// Fill out your copyright notice in the Description page of Project Settings.


#include "Managers/InputManager.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputAction.h"
#include "InputActionValue.h"
#include "Enums/LowerBodyAnimationState.h"
#include "Managers/AnimationDelegateManager.h"
#include "Managers/InputDelegateManager.h"

// Sets default values for this component's properties
UInputManager::UInputManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	

	
	// ...
}

// Called when the game starts
void UInputManager::BeginPlay()
{
	Super::BeginPlay();

	// ...
	mOwner = GetOwner();
	
}

void UInputManager::Init(APlayerController* playerController)
{
	SetupInputBinding(playerController);
}

void UInputManager::SetupInputBinding(APlayerController* playerController)
{
	if(playerController)
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(playerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(IMC_player, 0);
		}
	}

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(playerController->InputComponent))
	{
		if (jumpIA)
		{
			EnhancedInputComponent->BindAction(jumpIA, ETriggerEvent::Triggered, this, &UInputManager::InputJump);
		}

		if (walkIA)
		{
			EnhancedInputComponent->BindAction(walkIA, ETriggerEvent::Triggered, this, &UInputManager::InputMove);
		}

		if (lookIA)
		{
			EnhancedInputComponent->BindAction(lookIA, ETriggerEvent::Triggered, this, &UInputManager::InputLook);
		}

		if (shootIA)
		{
			EnhancedInputComponent->BindAction(shootIA, ETriggerEvent::Triggered, this, &UInputManager::InputUseCurrentWeapon);
		}

		if (interactIA)
		{
			EnhancedInputComponent->BindAction(interactIA, ETriggerEvent::Triggered, this, &UInputManager::InputPickUpItem);
		}

		if (reloadIA)
		{
			EnhancedInputComponent->BindAction(reloadIA, ETriggerEvent::Triggered, this, &UInputManager::InputReload);
		}
	}
}

APlayerController* UInputManager::GetOwnerController()
{
	if (AActor* Owner = GetOwner())
	{
		AController* Controller = Owner->GetInstigatorController();
		if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
		{
			return PlayerController;
		}
	}
	return nullptr;
}

void UInputManager::InputUseCurrentWeapon(const FInputActionValue& value)
{
	UInputDelegateManager::Get()->OnTriggerShootInput(mOwner);
}

void UInputManager::InputPickUpItem(const FInputActionValue& value)
{
	UInputDelegateManager::Get()->OnTriggerPickUpItem(mOwner);
}

void UInputManager::InputJump(const FInputActionValue& value)
{
	UInputDelegateManager::Get()->OnTriggerJumpInput(mOwner);
}

void UInputManager::InputMove(const FInputActionValue& value)
{
	const FVector2D MovementVector = value.Get<FVector2D>();

	UInputDelegateManager::Get()->OnTriggerInputMove(MovementVector,mOwner);

	if (mOwner)
	{
		if (MovementVector.X > 0)
		{
			UAnimationDelegateManager::Get()->UpdateLowerBodyState(ELowerBodyAnimationState::ELBAS_Right, mOwner);
		}
		else 
		{
			UAnimationDelegateManager::Get()->UpdateLowerBodyState(ELowerBodyAnimationState::ELBAS_Left, mOwner);
		}

		if (MovementVector.Y > 0)
		{
			UAnimationDelegateManager::Get()->UpdateLowerBodyState(ELowerBodyAnimationState::ELBAS_Forward, mOwner);
		}
		else
		{
			UAnimationDelegateManager::Get()->UpdateLowerBodyState(ELowerBodyAnimationState::ELBAS_Backward, mOwner);
		}
	}
}

void UInputManager::InputLook(const FInputActionValue& value)
{
	const FVector2D LookAxisValue = value.Get<FVector2D>();
	UInputDelegateManager::Get()->OnTriggerInputLook(LookAxisValue, mOwner);
}

void UInputManager::InputReload(const FInputActionValue& value)
{
	UInputDelegateManager::Get()->OnTriggerReloadInput(mOwner);
}

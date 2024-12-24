// Fill out your copyright notice in the Description page of Project Settings.


#include "Managers/InputManager.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputAction.h"
#include "InputActionValue.h"
#include "Managers/CharacterMovementManager.h"
#include "Managers/WeaponManager.h"
#include "Managers/InventoryManager.h"


// Sets default values for this component's properties
UInputManager::UInputManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	characterMovementManager = CreateDefaultSubobject<UCharacterMovementManager>(TEXT("MovementManager"));

	characterInventoryManager = CreateDefaultSubobject<UInventoryManager>(TEXT("InventoryManager"));
	// ...
}

// Called when the game starts
void UInputManager::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UInputManager::Init(APlayerController* playerController, ACharacter* playerCharacther)
{
	characterMovementManager->Init(playerController, playerCharacther);
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
		if (characterMovementManager && characterInventoryManager)
		{
			// need to refactor this cause all of the manager in an extra include in header so I want them to not have it we can just pass in a function i make
			// here and call the function here like how i do shoot
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
	characterInventoryManager->weaponManager->UseCurrentWeapon();
}

void UInputManager::InputPickUpItem(const FInputActionValue& value)
{
	characterInventoryManager->PickUpItem();
}

void UInputManager::InputJump(const FInputActionValue& value)
{
	characterMovementManager->Jump();
}

void UInputManager::InputMove(const FInputActionValue& value)
{
	const FVector2D MovementVector = value.Get<FVector2D>();
	characterMovementManager->Move(MovementVector);
}

void UInputManager::InputLook(const FInputActionValue& value)
{
	const FVector2D LookAxisValue = value.Get<FVector2D>();
	characterMovementManager->Look(LookAxisValue);
}

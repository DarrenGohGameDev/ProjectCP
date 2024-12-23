// Fill out your copyright notice in the Description page of Project Settings.


#include "Managers/InputManager.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputAction.h"
#include "InputActionValue.h"
#include "Managers/CharacterMovementManager.h"
#include "Managers/WeaponManager.h"


// Sets default values for this component's properties
UInputManager::UInputManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	characterMovementManager = CreateDefaultSubobject<UCharacterMovementManager>(TEXT("MovementManager"));
		
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
		if (characterMovementManager && characterWeaponManager)
		{
			// need to refactor this cause all of the manager in an extra include in header so I want them to not have it we can just pass in a function i make
			// here and call the function here like how i do shoot
			if (IA_jump)
			{
				EnhancedInputComponent->BindAction(IA_jump, ETriggerEvent::Triggered, characterMovementManager, &UCharacterMovementManager::Jump);
			}

			if (IA_walk)
			{
				EnhancedInputComponent->BindAction(IA_walk, ETriggerEvent::Triggered, characterMovementManager, &UCharacterMovementManager::Move);
			}

			if (IA_look)
			{
				EnhancedInputComponent->BindAction(IA_look, ETriggerEvent::Triggered, characterMovementManager, &UCharacterMovementManager::Look);
			}

			if (IA_shoot)
			{
				EnhancedInputComponent->BindAction(IA_shoot, ETriggerEvent::Triggered, this, &UInputManager::InputUseCurrentWeapon);
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
	characterWeaponManager->UseCurrentWeapon();
}

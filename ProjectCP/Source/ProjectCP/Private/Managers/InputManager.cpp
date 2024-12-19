// Fill out your copyright notice in the Description page of Project Settings.


#include "Managers/InputManager.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputAction.h"
#include "InputActionValue.h"
#include "Managers/CharacterMovementManager.h"


// Sets default values for this component's properties
UInputManager::UInputManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	CharacterMovementManager = CreateDefaultSubobject<UCharacterMovementManager>(TEXT("MovementManager"));
		
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
	CharacterMovementManager->Init(playerController, playerCharacther);
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
		if (CharacterMovementManager)
		{
			if (IA_jump)
			{
				EnhancedInputComponent->BindAction(IA_jump, ETriggerEvent::Triggered, CharacterMovementManager, &UCharacterMovementManager::Jump);
			}

			if (IA_walk)
			{
				EnhancedInputComponent->BindAction(IA_walk, ETriggerEvent::Triggered, CharacterMovementManager, &UCharacterMovementManager::Move);
			}

			if (IA_look)
			{
				EnhancedInputComponent->BindAction(IA_look, ETriggerEvent::Triggered, CharacterMovementManager, &UCharacterMovementManager::Look);
			}

			if (IA_shoot)
			{

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

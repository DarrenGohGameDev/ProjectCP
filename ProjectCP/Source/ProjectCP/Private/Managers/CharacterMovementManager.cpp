// Fill out your copyright notice in the Description page of Project Settings.


#include "Managers/CharacterMovementManager.h"
#include "Character/BaseCharacter.h"
#include "Managers/InputDelegateManager.h"
#include "StateMachine/StateMachineDelegateManager.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values for this component's properties
UCharacterMovementManager::UCharacterMovementManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCharacterMovementManager::BeginPlay()
{
	Super::BeginPlay();
	UInputDelegateManager::Get()->onInputMove.AddDynamic(this, &UCharacterMovementManager::Move);
	UInputDelegateManager::Get()->onJumpInput.AddDynamic(this, &UCharacterMovementManager::Jump);
	UInputDelegateManager::Get()->onInputLook.AddDynamic(this, &UCharacterMovementManager::Look);
	// ...
	
}

void UCharacterMovementManager::Init(AController* playerController,ACharacter* playerCharacther)
{
	mPlayerController = playerController;
	mPlayerPawn = Cast<APawn>(playerCharacther);
	mPlayerCharacther = playerCharacther;
}

void UCharacterMovementManager::Move(FVector2D value, AActor* owner)
{
	if (mPlayerController)
	{
		const FRotator Rotation = mPlayerController->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Forward = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		mPlayerPawn->AddMovementInput(Forward, value.Y);

		const FVector Right = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		mPlayerPawn->AddMovementInput(Right, value.X);
	}
}

void UCharacterMovementManager::Jump(AActor* owner)
{
	if (mPlayerCharacther)
	{
		mPlayerCharacther->Jump();
		UStateMachineDelegateManager::Get()->UpdateState(TEXT("Jump"), owner);
	}
}

void UCharacterMovementManager::Look(FVector2D value, AActor* owner)
{
	if (mPlayerController)
	{
		mPlayerPawn->AddControllerYawInput(value.X);
		mPlayerPawn->AddControllerPitchInput(value.Y);
	}
}

bool UCharacterMovementManager::IsPlayerFalling()
{
	return mPlayerCharacther->GetCharacterMovement()->IsFalling();
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "Managers/CharacterMovementManager.h"
#include "Character/BaseCharacter.h"

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

	// ...
	
}

void UCharacterMovementManager::Init(AController* playerController,ACharacter* playerCharacther)
{
	mPlayerController = playerController;
	mPlayerPawn = Cast<APawn>(playerCharacther);
	mPlayerCharacther = playerCharacther;
}

void UCharacterMovementManager::Move(FVector2D value)
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

void UCharacterMovementManager::Jump()
{
	if (mPlayerCharacther)
	{
		mPlayerCharacther->Jump();
	}
}

void UCharacterMovementManager::Look(FVector2D value)
{
	if (mPlayerController)
	{
		mPlayerPawn->AddControllerYawInput(value.X);
		mPlayerPawn->AddControllerPitchInput(value.Y);
	}
}


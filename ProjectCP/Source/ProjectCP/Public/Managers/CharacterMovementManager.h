// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterMovementManager.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTCP_API UCharacterMovementManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCharacterMovementManager();

	void Init(AController* playerController,ACharacter* playerCharacther);

	void Move(FVector2D value);

	void Jump();

	void Look(FVector2D value);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private :	
	AController * mPlayerController;
	APawn * mPlayerPawn;
	ACharacter* mPlayerCharacther;
		
};

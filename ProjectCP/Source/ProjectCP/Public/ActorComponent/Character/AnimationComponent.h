// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Enums/LowerBodyAnimationState.h"
#include "Enums/CharacterEquipState.h"
#include "AnimationComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTCP_API UAnimationComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAnimationComponent();

	FORCEINLINE ELowerBodyAnimationState GetCurrentLowerBodyAnimationState() { return currentLowerBodyAnimationState; }

	FORCEINLINE ECharacterEquipState GetCurrentCharacterEquipState() { return currentCharacterEquipState; }

	UPROPERTY(BlueprintReadOnly)
	ELowerBodyAnimationState currentLowerBodyAnimationState = ELowerBodyAnimationState::ELBAS_Forward;

	UPROPERTY(BlueprintReadOnly)
	ECharacterEquipState currentCharacterEquipState = ECharacterEquipState::ECS_NotEquip;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:	
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Enums/LowerBodyAnimationState.h"
#include "Enums/CharacterEquipState.h"
#include "BaseCharacterAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTCP_API UBaseCharacterAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public :

	UPROPERTY(BlueprintReadOnly)
	ELowerBodyAnimationState currentLowerBodyAnimationState = ELowerBodyAnimationState::ELBAS_Forward;

	UPROPERTY(BlueprintReadOnly)
	ECharacterEquipState currentCharacterEquipState = ECharacterEquipState::ECS_NotEquip;

private :

	virtual void NativeInitializeAnimation() override;

	virtual void BeginDestroy() override;

	UFUNCTION()
	void OnUpdateLowerBodyAnimationState(ELowerBodyAnimationState lowerBodyState, AActor* lowerBodyOwner);

	UFUNCTION()
	void OnUpdateCharacterEquipState(ECharacterEquipState equipState, AActor* equipOwner);

	AActor* mOwner;
	
};

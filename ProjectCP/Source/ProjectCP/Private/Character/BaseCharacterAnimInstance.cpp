// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/BaseCharacterAnimInstance.h"
#include "Managers/AnimationDelegateManager.h"

void UBaseCharacterAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	mOwner = TryGetPawnOwner();

	UAnimationDelegateManager::Get()->onLowerBodyChange.AddDynamic(this, &UBaseCharacterAnimInstance::OnUpdateLowerBodyAnimationState);
	UAnimationDelegateManager::Get()->onEquipChange.AddDynamic(this,&UBaseCharacterAnimInstance::OnUpdateCharacterEquipState);
}

void UBaseCharacterAnimInstance::OnUpdateLowerBodyAnimationState(ELowerBodyAnimationState lowerBodyState, AActor* lowerBodyOwner)
{
	if (lowerBodyOwner == mOwner)
	{
		currentLowerBodyAnimationState = lowerBodyState;
	}
}

void UBaseCharacterAnimInstance::OnUpdateCharacterEquipState(ECharacterEquipState equipState, AActor* equipOwner)
{
	if (equipOwner == mOwner)
	{
		currentCharacterEquipState = equipState;
	}
}

void UBaseCharacterAnimInstance::BeginDestroy()
{
	UAnimationDelegateManager::Get()->onLowerBodyChange.RemoveDynamic(this, &UBaseCharacterAnimInstance::OnUpdateLowerBodyAnimationState);
	UAnimationDelegateManager::Get()->onEquipChange.RemoveDynamic(this, &UBaseCharacterAnimInstance::OnUpdateCharacterEquipState);
}
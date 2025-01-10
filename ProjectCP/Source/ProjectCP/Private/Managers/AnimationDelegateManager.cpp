// Fill out your copyright notice in the Description page of Project Settings.


#include "Managers/AnimationDelegateManager.h"

UAnimationDelegateManager* UAnimationDelegateManager::mInstance = nullptr;

UAnimationDelegateManager* UAnimationDelegateManager::Get()
{
	if (!mInstance)
	{
		mInstance = NewObject<UAnimationDelegateManager>();
		mInstance->AddToRoot();
		UE_LOG(LogTemp, Log, TEXT("UAnimationDelegateManager instance created."));
	}

	return mInstance;
}

void UAnimationDelegateManager::UpdateLowerBodyState(ELowerBodyAnimationState lowerBodyState, AActor* lowerBodyOwner)
{
	if (mInstance->onLowerBodyChange.IsBound())
	{
		mInstance->onLowerBodyChange.Broadcast(lowerBodyState, lowerBodyOwner);
	}
}

void UAnimationDelegateManager::UpdateCharacterEquipState(ECharacterEquipState equipState, AActor* equipOwner)
{
	if (mInstance->onEquipChange.IsBound())
	{
		mInstance->onEquipChange.Broadcast(equipState, equipOwner);
	}
}

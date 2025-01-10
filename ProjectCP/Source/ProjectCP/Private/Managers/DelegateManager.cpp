// Fill out your copyright notice in the Description page of Project Settings.


#include "Managers/DelegateManager.h"

UDelegateManager* UDelegateManager::mInstance = nullptr;

UDelegateManager* UDelegateManager::Get()
{
	if (!mInstance)
	{
		mInstance = NewObject<UDelegateManager>();
		mInstance->AddToRoot();
		UE_LOG(LogTemp, Log, TEXT("DelegateManager instance created."));
	}

	return mInstance;
}

void UDelegateManager::UpdateItemOverlap(AActor* item)
{
	if (mInstance->onItemOverlap.IsBound())
	{
		mInstance->onItemOverlap.Broadcast(item);
	}
}

void UDelegateManager::UpdateWeaponAmmoUI(int32 maxAmount, int32 currentAmount)
{
	if (mInstance->onSetAmmoText.IsBound())
	{
		mInstance->onSetAmmoText.Broadcast(maxAmount, currentAmount);
	}
}

void UDelegateManager::ToggleWeaponAmmoUI(bool toggle)
{
	if (mInstance->onEquipWeapon.IsBound())
	{
		mInstance->onEquipWeapon.Broadcast(toggle);
	}
}

void UDelegateManager::HitActor(int32 damage, AActor* hitActor)
{
	if (mInstance->onHitActor.IsBound())
	{
		mInstance->onHitActor.Broadcast(damage,hitActor);
	}
}

void UDelegateManager::UpdateHpBarPercent(float minusPercent, AActor* hpBarOwner)
{
	if (mInstance->onHpBarChange.IsBound())
	{
		UE_LOG(LogTemp, Warning, TEXT("Broadcast hp percent"));
		mInstance->onHpBarChange.Broadcast(minusPercent, hpBarOwner);
	}
}

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
	if (OnItemOverlap.IsBound())
	{
		OnItemOverlap.Broadcast(item);
	}
}

void UDelegateManager::UpdateWeaponAmmoUI(int32 maxAmount, int32 currentAmount)
{
	if (OnSetAmmoText.IsBound())
	{
		OnSetAmmoText.Broadcast(maxAmount, currentAmount);
	}
}

void UDelegateManager::ToggleWeaponAmmoUI(bool toggle)
{
	if (OnEquipWeapon.IsBound())
	{
		OnEquipWeapon.Broadcast(toggle);
	}
}

void UDelegateManager::HitActor(int32 damage, AActor* hitActor)
{
	if (OnHitActor.IsBound())
	{
		OnHitActor.Broadcast(damage,hitActor);
	}
}

void UDelegateManager::UpdateHpBarPercent(float minusPercent, AActor* hpBarOwner)
{
	if (OnHpBarChange.IsBound())
	{
		OnHpBarChange.Broadcast(minusPercent, hpBarOwner);
	}
}

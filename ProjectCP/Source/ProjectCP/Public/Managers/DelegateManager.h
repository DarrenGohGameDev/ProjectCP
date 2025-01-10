// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Delegates/Delegate.h"
#include "UObject/ScriptDelegates.h"
#include "DelegateManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemOverlap, AActor*, item);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSetAmmoText, int32, maxAmount,int32, currentAmount);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEquipWeapon, bool, toggle);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHitActor, int32, damage, AActor*, hitActor);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeHpBarPercent, float, remainingPercent, AActor*, hpBarOwner);

UCLASS()
class PROJECTCP_API UDelegateManager : public UObject
{
	GENERATED_BODY()
	
public :
	static UDelegateManager* Get();

	void UpdateItemOverlap(AActor* item);

	void UpdateWeaponAmmoUI(int32 maxAmount, int32 currentAmount);

	void ToggleWeaponAmmoUI(bool toggle);

	void HitActor(int32 damage, AActor* hitActor);

	void UpdateHpBarPercent(float remainingPercent, AActor* hpBarOwner);

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnItemOverlap onItemOverlap;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FSetAmmoText onSetAmmoText;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnEquipWeapon onEquipWeapon;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnHitActor onHitActor;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnChangeHpBarPercent onHpBarChange;

private : 
	static UDelegateManager * mInstance;
};

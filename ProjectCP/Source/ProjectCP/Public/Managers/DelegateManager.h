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


UCLASS()
class PROJECTCP_API UDelegateManager : public UObject
{
	GENERATED_BODY()
	
public :
	static UDelegateManager* Get();

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnItemOverlap OnItemOverlap;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FSetAmmoText OnSetAmmoText;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnEquipWeapon OnEquipWeapon;

	void UpdateItemOverlap(AActor* item);

	void UpdateWeaponAmmoUI(int32 maxAmount, int32 currentAmount);

	void ToggleWeaponAmmoUI(bool toggle);

private : 
	static UDelegateManager * mInstance;
};

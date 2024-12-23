// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Enums/WeaponState.h"
#include "RangeWeaponInterface.generated.h"


// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class URangeWeaponInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PROJECTCP_API IRangeWeaponInterface
{
	GENERATED_BODY()

public :
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Weapon")
	void SetMaxAmmo(int amount);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Weapon")
	void SetCurrentAmmo(int amount);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Weapon")
	int32 GetMaxAmmo();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Weapon")
	int32 GetCurrentAmmo();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Weapon")
	void Shoot();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Weapon")
	void Reload();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Weapon")
	void FinishReloading();

	

};

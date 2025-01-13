// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponManager.generated.h"

class ABaseRangeWeapon;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTCP_API UWeaponManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeaponManager();

	UFUNCTION()
	void UseCurrentWeapon(AActor* owner);

	void EquipToPrimaryWeapon(ABaseRangeWeapon * newWeapon);

	UFUNCTION()
	void ReloadCurrentWeapon(AActor* owner);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(VisibleInstanceOnly)
	ABaseRangeWeapon* primaryWeapon;

private:	

		
};

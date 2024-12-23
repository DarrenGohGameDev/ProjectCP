// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interface/RangeWeaponInterface.h"
#include "BaseRangeWeapon.generated.h"

UCLASS()
class PROJECTCP_API ABaseRangeWeapon : public AActor , public IRangeWeaponInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseRangeWeapon();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void SetMaxAmmo_Implementation(int amount) override;

	virtual void SetCurrentAmmo_Implementation(int amount) override;

	virtual int32 GetMaxAmmo_Implementation() override;

	virtual int32 GetCurrentAmmo_Implementation() override;

	virtual void Shoot_Implementation() override;

	virtual void Reload_Implementation() override;

	virtual void FinishReloading_Implementation() override;

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Weapon")
	int32  maxAmmo = 10;

	UPROPERTY(EditAnywhere, Category = "Weapon")
	int32 useAmmoPerShot = 10;

	UPROPERTY(EditAnywhere, Category = "Weapon")
	float fireRate = 10.f;

	//UPROPERTY(VisibleAnywhere, BlueprintCallable, Category = "Weapon")
	EWeaponState  currentWeaponState = EWeaponState::EWS_Ready;

private:	

	int32 currentAmmo;

	FORCEINLINE void UseAmmo() { currentAmmo -= useAmmoPerShot; }

	FORCEINLINE void SetCurrentAmmo() { currentAmmo = maxAmmo; }
};

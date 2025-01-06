// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interface/RangeWeaponInterface.h"
#include "Item/BaseItem.h"
#include "BaseRangeWeapon.generated.h"

class ABullet;

UCLASS()
class PROJECTCP_API ABaseRangeWeapon : public ABaseItem, public IRangeWeaponInterface
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

	UPROPERTY(EditAnywhere, Category = "Weapon") // the lower the firerate the faster it shoot
	float fireRate = 0.1f;

	UPROPERTY(EditAnywhere, Category = "Weapon")
	float reloadSpeed = 1.5f;

	UPROPERTY(VisibleAnywhere, Category = "Weapon")
	EWeaponState  currentWeaponState = EWeaponState::EWS_Ready;

private:	

	int32 currentAmmo;

	void UseAmmo();

	void Shoot();

	UFUNCTION()
	void WeaponCooldown(float time);

	void WeaponReloadCooldown(float time);

	UFUNCTION()
	void WeaponReady();

	FORCEINLINE void SetCurrentAmmo() { currentAmmo = maxAmmo; }

	FTimerHandle  mWeaponFireRateCooldown;

	FTimerHandle  mWeaponReloadCooldown;

	UPROPERTY(EditAnywhere, Category = "Weapon")
	TSubclassOf<ABullet> mCurrentBullet;

	UPROPERTY(EditAnywhere, Category = "Weapon")
	USoundBase* mShootSound;

	UPROPERTY(EditAnywhere, Category = "Weapon")
	USoundBase* mReloadSound;
};

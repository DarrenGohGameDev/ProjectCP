// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/BaseRangeWeapon.h"
#include "Managers/DelegateManager.h"
#include "Weapon/Projectile/Bullet.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABaseRangeWeapon::ABaseRangeWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	itemType = EItemType::EIT_Weapon;
}

// Called when the game starts or when spawned
void ABaseRangeWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseRangeWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseRangeWeapon::SetMaxAmmo_Implementation(int amount)
{
	maxAmmo = amount;
}

void ABaseRangeWeapon::SetCurrentAmmo_Implementation(int amount)
{
	currentAmmo = amount;
}

int32 ABaseRangeWeapon::GetMaxAmmo_Implementation()
{
	return maxAmmo;
}

int32 ABaseRangeWeapon::GetCurrentAmmo_Implementation()
{
	return currentAmmo;
}

void ABaseRangeWeapon::Shoot_Implementation()
{
	if (currentWeaponState != EWeaponState::EWS_Ready || currentAmmo <= 0) return;
	
	//currentWeaponState = EWeaponState::EWS_Shooting;
	UE_LOG(LogTemp, Warning, TEXT("shooting weapon"));
	UseAmmo();
}

void ABaseRangeWeapon::Reload_Implementation()
{
	WeaponReloadCooldown(reloadSpeed);
	if (mReloadSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, mReloadSound, GetActorLocation());
	}
}

void ABaseRangeWeapon::FinishReloading_Implementation()
{
	SetCurrentAmmo_Implementation(maxAmmo);
	GetWorldTimerManager().ClearTimer(mWeaponReloadCooldown);
	currentWeaponState = EWeaponState::EWS_Ready;
	UDelegateManager::Get()->UpdateWeaponAmmoUI(GetMaxAmmo_Implementation(), GetCurrentAmmo_Implementation());
}

void ABaseRangeWeapon::UseAmmo()
{
	if (currentAmmo > 0)
	{
		currentAmmo -= useAmmoPerShot;
		UDelegateManager::Get()->UpdateWeaponAmmoUI(GetMaxAmmo_Implementation(), GetCurrentAmmo_Implementation());
		Shoot();
	}
}

void ABaseRangeWeapon::Shoot()
{
	UWorld* world = GetWorld();
	if (mCurrentBullet && world)
	{
		FActorSpawnParameters bulletSpawnParams;
		bulletSpawnParams.Owner = this;
		bulletSpawnParams.Instigator = GetInstigator();
		bulletSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;


		FVector spawnLocation = GetActorLocation();

		spawnLocation.X += 150.f;
		
		world->SpawnActor<ABullet>(
			mCurrentBullet,
			spawnLocation,
			GetActorRotation(),
			bulletSpawnParams
		);

		if (mShootSound)
		{
			UGameplayStatics::PlaySoundAtLocation(this, mShootSound,GetActorLocation());
		}
	}
}

void ABaseRangeWeapon::WeaponCooldown(float time)
{
	currentWeaponState = EWeaponState::EWS_NotReady;
	GetWorldTimerManager().SetTimer(mWeaponFireRateCooldown, this,&ABaseRangeWeapon::WeaponReady,time);
}

void ABaseRangeWeapon::WeaponReloadCooldown(float time)
{
	currentWeaponState = EWeaponState::EWS_Reloading;
	GetWorldTimerManager().SetTimer(mWeaponReloadCooldown, this, &ABaseRangeWeapon::FinishReloading_Implementation, time);
}

void ABaseRangeWeapon::WeaponReady()
{
	GetWorldTimerManager().ClearTimer(mWeaponFireRateCooldown);
	currentWeaponState = EWeaponState::EWS_Ready;
}
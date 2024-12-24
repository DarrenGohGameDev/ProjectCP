// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/BaseRangeWeapon.h"

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
	if (currentWeaponState != EWeaponState::EWS_Ready && currentAmmo <= 0) return;
	
	currentWeaponState = EWeaponState::EWS_Shooting;
	UE_LOG(LogTemp, Warning, TEXT("shooting weapon"));
	UseAmmo();
}

void ABaseRangeWeapon::UseAmmo()
{
	currentAmmo -= useAmmoPerShot;
	UE_LOG(LogTemp, Warning, TEXT("using weapon ammo"));
}

void ABaseRangeWeapon::Reload_Implementation()
{
	currentWeaponState = EWeaponState::EWS_Reloading;
	SetCurrentAmmo_Implementation(maxAmmo);
}

void ABaseRangeWeapon::FinishReloading_Implementation()
{
	currentWeaponState = EWeaponState::EWS_Ready;
}


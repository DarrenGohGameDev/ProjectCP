// Fill out your copyright notice in the Description page of Project Settings.


#include "Managers/WeaponManager.h"
#include "Weapon/BaseRangeWeapon.h"


// Sets default values for this component's properties
UWeaponManager::UWeaponManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;


	primaryWeapon = nullptr;
	// ...
}
// Called when the game starts
void UWeaponManager::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UWeaponManager::UseCurrentWeapon()
{
	if (primaryWeapon)
	{
		primaryWeapon->Shoot_Implementation();
	}
}
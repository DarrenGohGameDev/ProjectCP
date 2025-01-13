// Fill out your copyright notice in the Description page of Project Settings.


#include "Managers/WeaponManager.h"
#include "Weapon/BaseRangeWeapon.h"
#include "Managers/DelegateManager.h"
#include "Managers/AnimationDelegateManager.h"
#include "Enums/CharacterEquipState.h"
#include "Managers/InputDelegateManager.h"


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

	UInputDelegateManager::Get()->onShootInput.AddDynamic(this, &UWeaponManager::UseCurrentWeapon);
	UInputDelegateManager::Get()->onReloadInput.AddDynamic(this, &UWeaponManager::ReloadCurrentWeapon);
	// ...
	
}

void UWeaponManager::UseCurrentWeapon(AActor* owner)
{
	if (primaryWeapon)
	{
		primaryWeapon->Shoot_Implementation();
		UDelegateManager::Get()->UpdateWeaponAmmoUI(primaryWeapon->GetMaxAmmo_Implementation(), primaryWeapon->GetCurrentAmmo_Implementation());
	}
}

void UWeaponManager::EquipToPrimaryWeapon(ABaseRangeWeapon* newWeapon)
{
	if (primaryWeapon == nullptr)
	{
		primaryWeapon = newWeapon;

		UDelegateManager::Get()->ToggleWeaponAmmoUI(true);

		UDelegateManager::Get()->UpdateWeaponAmmoUI(primaryWeapon->GetMaxAmmo_Implementation(), primaryWeapon->GetCurrentAmmo_Implementation());

		UAnimationDelegateManager::Get()->UpdateCharacterEquipState(ECharacterEquipState::ECS_Equip,GetOwner());

		//UE_LOG(LogTemp, Warning, TEXT("location %d"), Get);

		//primaryWeapon->SetActorLocation();
		//primaryWeapon->SetRootComponent(GetOwner()->GetRootComponent());
		primaryWeapon->AttachToComponent(GetOwner()->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	}
}

void UWeaponManager::ReloadCurrentWeapon(AActor* owner)
{
	if (primaryWeapon)
	{
		primaryWeapon->Reload_Implementation();
		UE_LOG(LogTemp, Log, TEXT("Reload"));
	}
}

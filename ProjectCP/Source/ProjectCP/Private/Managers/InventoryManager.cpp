// Fill out your copyright notice in the Description page of Project Settings.


#include "Managers/InventoryManager.h"
#include "Managers/WeaponManager.h"
#include "Item/BaseItem.h"
#include "Enums/ItemType.h"
#include "Weapon/BaseRangeWeapon.h"

// Sets default values for this component's properties
UInventoryManager::UInventoryManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	weaponManager = CreateDefaultSubobject<UWeaponManager>(TEXT("WeaponManager"));
	// ...
}

// Called when the game starts
void UInventoryManager::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UInventoryManager::Init(FVector cameraLocation)
{
	mCameraLocation = cameraLocation;
}

void UInventoryManager::PickUpItem()
{
	if (mOverlapItem == nullptr) return;

	if (mOverlapItem->GetItemType() == EItemType::EIT_Weapon)
	{
		ABaseRangeWeapon * newRangeWeapon = Cast<ABaseRangeWeapon>(mOverlapItem);
		if (!newRangeWeapon) return;
		weaponManager->EquipToPrimaryWeapon(newRangeWeapon);
	}
}

void UInventoryManager::SetOverlappingItem(ABaseItem* Item)
{
	UE_LOG(LogTemp, Warning, TEXT("set overlapped an item"));
	mOverlapItem = Item;
}

void UInventoryManager::TriggerTestDelegate(ABaseItem* item)
{
	SetOverlappingItem(item);
}

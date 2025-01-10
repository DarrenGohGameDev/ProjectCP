// Fill out your copyright notice in the Description page of Project Settings.


#include "Managers/InventoryManager.h"
#include "Managers/WeaponManager.h"
#include "Item/BaseItem.h"
#include "Enums/ItemType.h"
#include "Weapon/BaseRangeWeapon.h"
#include "Managers/DelegateManager.h"

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
	onItemOverlap();
	// ...
	
}

void UInventoryManager::onItemOverlap()
{
	if (!mBindPickUp)
	{
		UDelegateManager::Get()->onItemOverlap.AddDynamic(this, &UInventoryManager::SetOverlappingItem);
		mBindPickUp = true;
	}
}

void UInventoryManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	UDelegateManager::Get()->onItemOverlap.RemoveDynamic(this, &UInventoryManager::SetOverlappingItem);
}

void UInventoryManager::Init(FVector cameraLocation)
{
	mCameraLocation = cameraLocation;
}

void UInventoryManager::PickUpItem()
{
	
	if (mOverlapItem == nullptr) return;
	UE_LOG(LogTemp, Warning, TEXT("picking up item"));
	if (mOverlapItem->GetItemType() == EItemType::EIT_Weapon)
	{
		ABaseRangeWeapon * newRangeWeapon = Cast<ABaseRangeWeapon>(mOverlapItem);
		if (!newRangeWeapon) return;
		weaponManager->EquipToPrimaryWeapon(newRangeWeapon);
	}
}

void UInventoryManager::SetOverlappingItem(AActor* item)
{
	if (item == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("overlappp item is null"));
		mOverlapItem = nullptr;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Handled Item Pickup: %s"), *item->GetName());
		ABaseItem* overlapItem = Cast<ABaseItem>(item);
		mOverlapItem = overlapItem;
		UE_LOG(LogTemp, Warning, TEXT("set overlapped an item"));
	}
	
}

void UInventoryManager::TriggerTestDelegate(ABaseItem* item)
{
	SetOverlappingItem(item);
}

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Interface/PickUpInterface.h"
#include "InventoryManager.generated.h"

class UWeaponManager;
class ABaseItem;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTCP_API UInventoryManager : public UActorComponent , public IPickUpInterface
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryManager();

	void Init(FVector cameraLocation);

	void PickUpItem();

	virtual void SetOverlappingItem(AActor* item) override;

	UFUNCTION(BlueprintCallable, Category = "Events")
	void TriggerTestDelegate(ABaseItem* item);

	UPROPERTY(VisibleInstanceOnly)
	UWeaponManager* weaponManager;



protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:	

	void OnItemOverlap();

	FVector mCameraLocation;
	
	UPROPERTY(VisibleInstanceOnly)
	ABaseItem* mOverlapItem;

	bool mBindPickUp = false;

};

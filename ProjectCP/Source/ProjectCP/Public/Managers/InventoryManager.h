// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Interface/PickUpInterface.h"
#include "Delegates/Delegate.h"
#include "UObject/ScriptDelegates.h"
#include "InventoryManager.generated.h"

class UWeaponManager;
class ABaseItem;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemOverlap, ABaseItem*, OverlapItem);

//DECLARE_DELEGATE_OneParam(FOnItemOverlap, AActor);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTCP_API UInventoryManager : public UActorComponent , public IPickUpInterface
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryManager();

	void Init(FVector cameraLocation);

	void PickUpItem();

	virtual void SetOverlappingItem(class ABaseItem* Item) override;

	UFUNCTION(BlueprintCallable, Category = "Events")
	void TriggerTestDelegate(ABaseItem* item);

	UWeaponManager* weaponManager;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnItemOverlap OnItemOverlap;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:	

	FVector mCameraLocation;
	
	UPROPERTY(VisibleInstanceOnly)
	ABaseItem* mOverlapItem;

};

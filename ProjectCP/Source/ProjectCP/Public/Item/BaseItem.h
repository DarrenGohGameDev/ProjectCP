// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enums/ItemType.h"
#include "BaseItem.generated.h"

class USphereComponent;


UCLASS()
class PROJECTCP_API ABaseItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseItem();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FORCEINLINE EItemType GetItemType() { return itemType; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Item")
	EItemType itemType = EItemType::EIT_Item;

private:	

	UFUNCTION()
	virtual void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	virtual void OnSphereOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* mItemMesh;

	UPROPERTY(VisibleAnywhere)
	USphereComponent* mSphere;

	UPROPERTY(EditAnywhere, Category = "Pickup")
	USoundBase* mPickUpSound;
};

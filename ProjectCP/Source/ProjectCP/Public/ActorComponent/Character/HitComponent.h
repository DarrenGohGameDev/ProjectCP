// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Interface/GetHitInterface.h"
#include "HitComponent.generated.h"

class UHealthComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTCP_API UHitComponent : public UActorComponent , public IGetHitInterface
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHitComponent();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:	
		
	virtual void GetHit_Implementation(int32  damage, AActor* Hitter) override;

	UHealthComponent* mHealthComponent;
};
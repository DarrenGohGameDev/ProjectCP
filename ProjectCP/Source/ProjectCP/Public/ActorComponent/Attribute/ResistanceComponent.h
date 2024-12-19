// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ResistanceComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTCP_API UResistanceComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UResistanceComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Attributes")
	float FireResistance = 0.f;

	UPROPERTY(EditAnywhere, Category = "Attributes")
	float ColdResistance = 0.f;

	UPROPERTY(EditAnywhere, Category = "Attributes")
	float LightningResistance = 0.f;

// Getters and setters for Stats
public:	
	// Resistance Stat getter
	FORCEINLINE float GetCurrentFireResistance() const { return FireResistance; }
	FORCEINLINE float GetCurrentColdResistnace() const { return ColdResistance; }
	FORCEINLINE float GetCurrentLightningResistance() const { return LightningResistance; }

	// Resistance Stat Setter
	FORCEINLINE void SetCurrentFireResistance(float Amount) { FireResistance = Amount; }
	FORCEINLINE void SetCurrentColdResistnace(float Amount) { ColdResistance = Amount; }
	FORCEINLINE void SetCurrentLightningResistance(float Amount) { LightningResistance = Amount; }
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DefenceComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTCP_API UDefenceComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDefenceComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Defence Attributes")
	float Armor = 0.f;

	UPROPERTY(EditAnywhere, Category = "Defence Attributes")
	float Evasion = 0.f;

	UPROPERTY(EditAnywhere, Category = "Defence Attributes")
	float DamageReduction = 0.f;

	UPROPERTY(EditAnywhere, Category = "Defence Attributes")
	float PhysicalDamageReduction = 0.f;

	UPROPERTY(EditAnywhere, Category = "Defence Attributes")
	float ElementalDamageReduction = 0.f;

// Getters and setters for Stats
public:	
	// Defensive Stat getter
	FORCEINLINE float GetCurrentArmor() const { return Armor; }
	FORCEINLINE float GetCurrentEvasion() const { return Evasion; }
	FORCEINLINE float GetCurrentDamageReduction() const { return DamageReduction; }
	FORCEINLINE float GetCurrentPhysicalDamageReduction() const { return PhysicalDamageReduction; }
	FORCEINLINE float GetCurrentElementalDamageReduction() const { return ElementalDamageReduction; }

	// Defensive Stat Seter
	FORCEINLINE void SetCurrentArmor(float Amount) { Armor = Amount; }
	FORCEINLINE void SetCurrentEvasion(float Amount) { Evasion = Amount; }
	FORCEINLINE void SetCurrentDamageReduction(float Amount) { DamageReduction = Amount; }
	FORCEINLINE void SetCurrentPhysicalDamageReduction(float Amount) { PhysicalDamageReduction = Amount; }
	FORCEINLINE void SetCurrentElementalDamageReduction(float Amount) { ElementalDamageReduction = Amount; }
};

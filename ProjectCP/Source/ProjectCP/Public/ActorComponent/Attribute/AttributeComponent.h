// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttributeComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTCP_API UAttributeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAttributeComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Attributes")
	float MaxHp = 100.f;

	UPROPERTY(VisibleAnywhere, Category = "Attributes")
	float CurrentHp;

	UPROPERTY(EditAnywhere, Category = "Attributes")
	float MaxStamina = 100.f;

	UPROPERTY(VisibleAnywhere, Category = "Attributes")
	float CurrentStamina;

	UPROPERTY(EditAnywhere, Category = "Attributes")
	float MaxMana = 100.f;

	UPROPERTY(VisibleAnywhere, Category = "Attributes")
	float CurrentMana;

	UPROPERTY(EditAnywhere, Category = "Attributes")
	float Armor = 0.f;

	UPROPERTY(EditAnywhere, Category = "Attributes")
	float Evasion = 0.f;

	UPROPERTY(EditAnywhere, Category = "Attributes")
	float DamageReduction = 0.f;

	UPROPERTY(EditAnywhere, Category = "Attributes")
	float PhysicalDamageReduction = 0.f;

	UPROPERTY(EditAnywhere, Category = "Attributes")
	float ElementalDamageReduction = 0.f;

	UPROPERTY(EditAnywhere, Category = "Attributes")
	float FireResistance = 0.f;

	UPROPERTY(EditAnywhere, Category = "Attributes")
	float ColdResistance = 0.f;

	UPROPERTY(EditAnywhere, Category = "Attributes")
	float LightningResistance = 0.f;
// Getters for Stats
public :
	// Main Stat getter
	FORCEINLINE float GetCurrentHp() const { return CurrentHp; }
	FORCEINLINE float GetCurrentMana() const { return CurrentMana; }
	FORCEINLINE float GetCurrentStamina() const { return CurrentStamina; }

	// Main Stat getter in percent
	FORCEINLINE float GetCurrentHpPercent() { return CurrentHpPercent(); }
	FORCEINLINE float GetCurrentManaPercent() { return CurrentManaPercent(); }
	FORCEINLINE float GetCurrentStaminaPercent() { return CurrentStaminaPercent(); }

	// Defensive Stat getter
	FORCEINLINE float GetCurrentArmor() const { return Armor; }
	FORCEINLINE float GetCurrentEvasion() const { return Evasion; }
	FORCEINLINE float GetCurrentDamageReduction() const { return DamageReduction; }
	FORCEINLINE float GetCurrentPhysicalDamageReduction() const { return PhysicalDamageReduction; }
	FORCEINLINE float GetCurrentElementalDamageReduction() const { return ElementalDamageReduction; }
	
	// Resistance Stat getter
	FORCEINLINE float GetCurrentFireResistance() const { return FireResistance; }
	FORCEINLINE float GetCurrentColdResistnace() const { return ColdResistance; }
	FORCEINLINE float GetCurrentLightningResistance() const { return LightningResistance; }

	// Main Stat Setter
	FORCEINLINE void SetCurrentHp(float Amount) { CurrentHp = Amount; }
	FORCEINLINE void SetCurrentMana(float Amount) { CurrentMana = Amount; }
	FORCEINLINE void SetCurrentStamina(float Amount) { CurrentStamina = Amount; }

	// Defensive Stat Seter
	FORCEINLINE void SetCurrentArmor(float Amount) { Armor = Amount; }
	FORCEINLINE void SetCurrentEvasion(float Amount) { Evasion = Amount; }
	FORCEINLINE void SetCurrentDamageReduction(float Amount) { DamageReduction = Amount; }
	FORCEINLINE void SetCurrentPhysicalDamageReduction(float Amount) { PhysicalDamageReduction = Amount; }
	FORCEINLINE void SetCurrentElementalDamageReduction(float Amount) { ElementalDamageReduction = Amount; }

	// Resistance Stat Setter
	FORCEINLINE void SetCurrentFireResistance(float Amount) { FireResistance = Amount; }
	FORCEINLINE void SetCurrentColdResistnace(float Amount) { ColdResistance = Amount; }
	FORCEINLINE void SetCurrentLightningResistance(float Amount) { LightningResistance = Amount; }

	// Taking Damage
	FORCEINLINE void TakeDamage(float Amount);
	// Using Stamina
	FORCEINLINE void UseStamina(float Amount);
	// Using Mana
	FORCEINLINE void UseMana(float Amount);

private : 
	void SetBaseStats();

	float CurrentHpPercent();

	float CurrentManaPercent();

	float CurrentStaminaPercent();
};

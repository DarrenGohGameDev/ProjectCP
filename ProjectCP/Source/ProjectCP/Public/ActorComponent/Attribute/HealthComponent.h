// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTCP_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "HP Attributes")
	float MaxHp = 100.f;

	UPROPERTY(VisibleAnywhere, Category = "HP Attributes")
	float CurrentHp;

// Getters and Setter for Stats
public:	
	// Main Stat getter
	FORCEINLINE float GetCurrentHp() const { return CurrentHp; }

	// Main Stat getter in percent
	FORCEINLINE float GetCurrentHpPercent() { return CurrentHpPercent(); }

	// Taking Damage
	void TakeDamage(float Amount ,float& currentHpPercent );

	// Main Stat Setter
	FORCEINLINE void SetCurrentHp(float Amount) { CurrentHp = Amount; }

private : 
	void SetStats();

	float CurrentHpPercent();
		
};

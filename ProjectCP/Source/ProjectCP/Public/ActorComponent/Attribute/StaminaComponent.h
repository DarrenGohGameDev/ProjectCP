// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StaminaComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTCP_API UStaminaComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStaminaComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Stamina Attributes")
	float MaxStamina = 100.f;

	UPROPERTY(VisibleAnywhere, Category = "Stamina Attributes")
	float CurrentStamina;

// Getters and Setter for Stats
public:	
	// Main Stat getter
	FORCEINLINE float GetCurrentStamina() const { return CurrentStamina; }

	// Main Stat getter in percent
	FORCEINLINE float GetCurrentStaminaPercent() { return CurrentStaminaPercent(); }

	// Main Stat Setter
	FORCEINLINE void SetCurrentStamina(float Amount) { CurrentStamina = Amount; }

	// Using Stamina
	FORCEINLINE void UseStamina(float Amount);

private :
	void SetStats();

	float CurrentStaminaPercent();
};

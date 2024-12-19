// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ManaComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTCP_API UManaComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UManaComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Mana Attributes")
	float MaxMana = 100.f;

	UPROPERTY(VisibleAnywhere, Category = "Mana Attributes")
	float CurrentMana;

// Getters and setters for Stats
public:	
	// Main Stat getter
	FORCEINLINE float GetCurrentMana() const { return CurrentMana; }

	// Main Stat getter in percent
	FORCEINLINE float GetCurrentManaPercent() { return CurrentManaPercent(); }

	// Using Mana
	FORCEINLINE void UseMana(float Amount);

private :
	void SetStats();

	float CurrentManaPercent();
		
};

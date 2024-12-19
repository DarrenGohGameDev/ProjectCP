// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponent/Attribute/ManaComponent.h"

// Sets default values for this component's properties
UManaComponent::UManaComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UManaComponent::BeginPlay()
{
	Super::BeginPlay();
	SetStats();
	// ...
	
}

void UManaComponent::UseMana(float Amount)
{
	CurrentMana = FMath::Clamp(CurrentMana - Amount, 0.f, MaxMana);
}

void UManaComponent::SetStats()
{
	CurrentMana = MaxMana;
}

float UManaComponent::CurrentManaPercent()
{
	return 0.0f;
}


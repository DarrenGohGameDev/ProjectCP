// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponent/Attribute/HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();
	SetStats();
	// ...
	
}

void UHealthComponent::TakeDamage(float Amount, float& currentHpPercent)
{
	CurrentHp = FMath::Clamp(CurrentHp - Amount, 0.f, MaxHp);
	currentHpPercent = CurrentHpPercent();
}

void UHealthComponent::SetStats()
{
	CurrentHp = MaxHp;
}

float UHealthComponent::CurrentHpPercent()
{
	return MaxHp / CurrentHp;
}


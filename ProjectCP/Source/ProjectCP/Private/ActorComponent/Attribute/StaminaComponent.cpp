// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponent/Attribute/StaminaComponent.h"

// Sets default values for this component's properties
UStaminaComponent::UStaminaComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UStaminaComponent::BeginPlay()
{
	Super::BeginPlay();
	SetStats();
	// ...
	
}

void UStaminaComponent::UseStamina(float Amount)
{
	CurrentStamina = FMath::Clamp(CurrentStamina - Amount, 0.f, MaxStamina);
}

void UStaminaComponent::SetStats()
{
	CurrentStamina = MaxStamina;
}

float UStaminaComponent::CurrentStaminaPercent()
{
	return MaxStamina / CurrentStamina;
}


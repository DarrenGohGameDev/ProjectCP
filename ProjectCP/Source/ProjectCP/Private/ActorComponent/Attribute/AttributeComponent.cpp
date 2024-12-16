// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponent/Attribute/AttributeComponent.h"

// Sets default values for this component's properties
UAttributeComponent::UAttributeComponent()
{

}


// Called when the game starts
void UAttributeComponent::BeginPlay()
{
	Super::BeginPlay();
	SetBaseStats();
}

void UAttributeComponent::TakeDamage(float Amount)
{
	CurrentHp = FMath::Clamp(CurrentHp - Amount, 0.f, MaxHp);
}

void UAttributeComponent::UseStamina(float Amount)
{
	CurrentStamina = FMath::Clamp(CurrentStamina - Amount, 0.f, MaxStamina);
}

void UAttributeComponent::UseMana(float Amount)
{
	CurrentMana = FMath::Clamp(CurrentMana - Amount, 0.f, MaxMana);
}

void UAttributeComponent::SetBaseStats()
{
	CurrentHp = MaxHp;
	CurrentMana = MaxMana;
	CurrentStamina = MaxStamina;
}

float UAttributeComponent::CurrentHpPercent()
{
	return MaxHp / CurrentHp;
}

float UAttributeComponent::CurrentManaPercent()
{
	return MaxMana / CurrentMana;
}

float UAttributeComponent::CurrentStaminaPercent()
{
	return MaxStamina / CurrentStamina;
}


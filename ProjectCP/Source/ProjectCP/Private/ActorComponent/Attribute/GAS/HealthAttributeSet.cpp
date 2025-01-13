// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponent/Attribute/GAS/HealthAttributeSet.h"
#include "Net/UnrealNetwork.h"
#include "Managers/DelegateManager.h"

void UHealthAttributeSet::Init(AActor* owner)
{
	mOwner = owner;
	currentHealth.SetBaseValue(100.f);
	maxHealth.SetBaseValue(100.f);
	currentHealth.SetCurrentValue(currentHealth.GetBaseValue());
	maxHealth.SetCurrentValue(maxHealth.GetBaseValue());
	UDelegateManager::Get()->onTakeDamage.AddDynamic(this, &UHealthAttributeSet::TakeDamage);
	UDelegateManager::Get()->UpdateHpBarPercent(CurrentHpPercent(), mOwner);
	UE_LOG(LogTemp, Warning, TEXT("get current hp percent %f"), CurrentHpPercent());
}


void UHealthAttributeSet::TakeDamage(float Amount, float&currentHpPercent, AActor* owner)
{
	if (owner != mOwner) return;

	currentHealth.SetCurrentValue(FMath::Clamp(currentHealth.GetCurrentValue() - Amount, 0.f, maxHealth.GetCurrentValue()));
	currentHpPercent = CurrentHpPercent();
}

void UHealthAttributeSet::OnRepCurrentHealth(const FGameplayAttributeData& oldCurrentHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UHealthAttributeSet, currentHealth, oldCurrentHealth);
}

void UHealthAttributeSet::OnRepMaxHealth(const FGameplayAttributeData& oldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UHealthAttributeSet, maxHealth, oldMaxHealth);
}

void UHealthAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UHealthAttributeSet, currentHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UHealthAttributeSet, maxHealth, COND_None, REPNOTIFY_Always);
}

float UHealthAttributeSet::CurrentHpPercent()
{
	return currentHealth.GetCurrentValue() / maxHealth.GetCurrentValue();
}

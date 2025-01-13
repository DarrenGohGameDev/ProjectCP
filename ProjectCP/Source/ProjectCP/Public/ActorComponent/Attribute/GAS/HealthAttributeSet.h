// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "HealthAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
/**
 * 
 */
UCLASS()
class PROJECTCP_API UHealthAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public :

	FORCEINLINE float GetCurrentHp() const { return currentHealth.GetCurrentValue(); }

	FORCEINLINE float GetCurrentHpPercent() { return CurrentHpPercent(); }

	FORCEINLINE void SetCurrentHp(float Amount) { currentHealth.SetCurrentValue(Amount); }

	void Init(AActor* owner);

	UFUNCTION()
	void TakeDamage(float Amount, float&currentHpPercent,AActor * owner);

	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRepCurrentHealth)
	FGameplayAttributeData currentHealth = 100.f;
	ATTRIBUTE_ACCESSORS(UHealthAttributeSet, currentHealth);


	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRepMaxHealth)
	FGameplayAttributeData maxHealth = 100.f;
	ATTRIBUTE_ACCESSORS(UHealthAttributeSet, maxHealth);

protected :

	UFUNCTION()
	virtual void OnRepCurrentHealth(const FGameplayAttributeData& oldCurrentHealth);

	UFUNCTION()
	virtual void OnRepMaxHealth(const FGameplayAttributeData& oldMaxHealth);

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:

	float CurrentHpPercent();

	AActor* mOwner;
};

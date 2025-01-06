// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HpBarWidget.generated.h"

class UProgressBar;
/**
 * 
 */
UCLASS()
class PROJECTCP_API UHpBarWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	virtual void NativeConstruct() override;

	void Init(AActor* owner);

	UFUNCTION()
	void SetHpBarPercent(float remainingPercent, AActor* hpBarOwner);

	UPROPERTY(meta = (BindWidget))
	UProgressBar* hpBar;

private:

	void ToggleHpBar(bool toggle);

	AActor* mOwner;

	AActor* mPlayer;
};

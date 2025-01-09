// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerAmmoCounterWidget.generated.h"

class UTextBlock;
/**
 * 
 */
UCLASS()
class PROJECTCP_API UPlayerAmmoCounterWidget : public UUserWidget
{
	GENERATED_BODY()
public:

	virtual void NativeConstruct() override;

	UFUNCTION()
	void SetAmmoText(int32 maxAmount, int32 currentAmount);

	UFUNCTION()
	void ToggleThisWidget(bool toggle);

private:
	UPROPERTY(meta = (BindWidget))
	UTextBlock* mAmmoText;

	void NativeDestruct() override;
};

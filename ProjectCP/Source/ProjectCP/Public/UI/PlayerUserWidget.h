// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerUserWidget.generated.h"


class UTextBlock;
/**
 * 
 */
UCLASS()
class PROJECTCP_API UPlayerUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetMaxAmmoText(int32 amount);

	void SetCurrenAmmoText(int32 amount);

	void SetAmmoText(int32 maxAmount, int32 currentAmount);

private:
	UPROPERTY(meta = (BindWidget))
	UTextBlock* mMaxAmmoText;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* mCurrentAmmoText;
};

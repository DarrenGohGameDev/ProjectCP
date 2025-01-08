// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerUserWidget.generated.h"

class UPlayerAmmoCounterWidget;
class UHpBarWidget;
/**
 * 
 */
UCLASS()
class PROJECTCP_API UPlayerUserWidget : public UUserWidget
{
	GENERATED_BODY()

public :

	void Init(AActor * UIOwner);

private :

	UPROPERTY(meta = (BindWidget))
	UPlayerAmmoCounterWidget * playerAmmoWidgetClass;

	UPROPERTY(meta = (BindWidget))
	UHpBarWidget * playerHpBarWidgetClass;
};

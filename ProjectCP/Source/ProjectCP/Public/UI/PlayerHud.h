// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Blueprint/UserWidget.h"
#include "PlayerHud.generated.h"

class UPlayerUserWidget;
class UHpBarWidget;

/**
 * 
 */
UCLASS()
class PROJECTCP_API APlayerHud : public AHUD
{
	GENERATED_BODY()
	
public :

	FORCEINLINE UPlayerUserWidget* GetPlayerOverlay() const { return mPlayerOverlay; }

protected :

	virtual void BeginPlay() override;

	

private :
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UPlayerUserWidget> mPlayerUserWidgetClass;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UHpBarWidget> mPlayerHpBarWidgetClass;

	UPROPERTY()
	UPlayerUserWidget* mPlayerOverlay;

	UPROPERTY()
	UHpBarWidget* mPlayerHpBarUI;
};

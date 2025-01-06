// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/PlayerHud.h"
#include "UI/PlayerUserWidget.h"
#include "Managers/DelegateManager.h"
#include "UI/HpBarWidget.h"

void APlayerHud::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* Controller = World->GetFirstPlayerController();
		if (Controller && mPlayerUserWidgetClass && mPlayerHpBarWidgetClass)
		{
			mPlayerOverlay = CreateWidget<UPlayerUserWidget>(Controller, mPlayerUserWidgetClass);
			mPlayerOverlay->AddToViewport();

			mPlayerHpBarUI = CreateWidget<UHpBarWidget>(Controller, mPlayerHpBarWidgetClass);
			mPlayerHpBarUI->Init(Controller->GetPawn());
			mPlayerHpBarUI->AddToViewport();
		}
	}
}

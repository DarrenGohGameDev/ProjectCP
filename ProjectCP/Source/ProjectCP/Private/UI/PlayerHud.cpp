// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/PlayerHud.h"
#include "UI/PlayerUserWidget.h"

void APlayerHud::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* Controller = World->GetFirstPlayerController();
		if (Controller && mPlayerUserWidgetClass)
		{
			mPlayerOverlay = CreateWidget<UPlayerUserWidget>(Controller, mPlayerUserWidgetClass);
			mPlayerOverlay->AddToViewport();

			mPlayerOverlay->SetAmmoText(20, 10);
		}
	}


}

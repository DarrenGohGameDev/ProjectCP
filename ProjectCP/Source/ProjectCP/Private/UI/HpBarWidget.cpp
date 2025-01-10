// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/HpBarWidget.h"
#include "Components/ProgressBar.h"
#include "Managers/DelegateManager.h"

void UHpBarWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (!mPlayer)  return;

	if (mPlayer == mOwner)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player hp bar"));
		ToggleHpBar(true);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Enemy hp bar"));
		ToggleHpBar(false);
	}
}

void UHpBarWidget::Init(AActor* owner)
{
	mOwner = owner;

	UWorld* World = GetWorld();
	APlayerController* Controller = World->GetFirstPlayerController();

	mPlayer = Controller->GetPawn();
	
}

void UHpBarWidget::SetHpBarPercent(float remainingPercent, AActor* hpBarOwner)
{
	if (hpBar && hpBarOwner == mOwner)
	{
		UE_LOG(LogTemp, Warning, TEXT("Minus hp"));
		hpBar->SetPercent(remainingPercent);
	}
}

void UHpBarWidget::ToggleHpBar(bool toggle)
{
	if (toggle)
	{
		UE_LOG(LogTemp, Warning, TEXT("Toggle hp bar"));
		hpBar->SetVisibility(ESlateVisibility::Visible);
		UDelegateManager::Get()->onHpBarChange.AddDynamic(this, &UHpBarWidget::SetHpBarPercent);
	}
	else
	{
		hpBar->SetVisibility(ESlateVisibility::Hidden);
		UDelegateManager::Get()->onHpBarChange.RemoveDynamic(this, &UHpBarWidget::SetHpBarPercent);
	}
}


void UHpBarWidget::NativeDestruct()
{
	Super::NativeDestruct();

	UDelegateManager::Get()->onHpBarChange.RemoveDynamic(this, &UHpBarWidget::SetHpBarPercent);
}
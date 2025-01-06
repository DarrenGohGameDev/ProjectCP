// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/HpBarWidget.h"
#include "Components/ProgressBar.h"
#include "Managers/DelegateManager.h"

void UHpBarWidget::NativeConstruct()
{
	UDelegateManager::Get()->OnHpBarChange.AddDynamic(this, &UHpBarWidget::SetHpBarPercent);
	
}

void UHpBarWidget::Init(AActor* owner)
{
	mOwner = owner;

	UWorld* World = GetWorld();
	APlayerController* Controller = World->GetFirstPlayerController();

	mPlayer = Controller->GetPawn();

	UE_LOG(LogTemp, Warning, TEXT("Owner %s"), *owner->GetName());
}

void UHpBarWidget::SetHpBarPercent(float remainingPercent, AActor* hpBarOwner)
{
	if (hpBar)
	{
		UE_LOG(LogTemp, Warning, TEXT("actor %s"), *hpBarOwner->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("hpBarOwner is NULL!"));
	}

	/*if (hpBarOwner != mPlayer)
	{
		ToggleHpBar(true);
	}*/

	
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
		hpBar->SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		hpBar->SetVisibility(ESlateVisibility::Hidden);
	}
}

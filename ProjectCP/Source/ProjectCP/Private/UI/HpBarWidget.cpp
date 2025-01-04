// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/HpBarWidget.h"
#include "Components/ProgressBar.h"
#include "Managers/DelegateManager.h"

void UHpBarWidget::NativeConstruct()
{
	UDelegateManager::Get()->OnHpBarChange.AddDynamic(this, &UHpBarWidget::SetHpBarPercent);
}

void UHpBarWidget::SetHpBarPercent(float remainingPercent, AActor* hpBarOwner)
{
	if (hpBar && hpBarOwner == GetOwningPlayer())
	{
		hpBar->SetPercent(remainingPercent);
	}
}
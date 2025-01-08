// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/PlayerAmmoCounterWidget.h"
#include "Components/TextBlock.h"
#include "Managers/DelegateManager.h"

void UPlayerAmmoCounterWidget::NativeConstruct()
{
	Super::NativeConstruct();
	ToggleThisWidget(false);
}


void UPlayerAmmoCounterWidget::SetMaxAmmoText(int32 amount)
{
	if (mMaxAmmoText)
	{
		mMaxAmmoText->SetText(FText::FromString(FString::Printf(TEXT("%d"), amount)));
	}
}

void UPlayerAmmoCounterWidget::SetCurrenAmmoText(int32 amount)
{
	if (mCurrentAmmoText)
	{
		mCurrentAmmoText->SetText(FText::FromString(FString::Printf(TEXT("%d"), amount)));
	}
}

void UPlayerAmmoCounterWidget::SetAmmoText(int32 maxAmount, int32 currentAmount)
{
	if (mMaxAmmoText)
	{
		mMaxAmmoText->SetText(FText::FromString(FString::Printf(TEXT("%d"), maxAmount)));
	}

	if (mCurrentAmmoText)
	{
		mCurrentAmmoText->SetText(FText::FromString(FString::Printf(TEXT("%d"), currentAmount)));
	}
}

void UPlayerAmmoCounterWidget::ToggleThisWidget(bool toggle)
{
	if (toggle)
	{
		this->SetVisibility(ESlateVisibility::Visible);
		UDelegateManager::Get()->OnSetAmmoText.AddDynamic(this, &UPlayerAmmoCounterWidget::SetAmmoText);
		UDelegateManager::Get()->OnEquipWeapon.AddDynamic(this, &UPlayerAmmoCounterWidget::ToggleThisWidget);
	}
	else
	{
		this->SetVisibility(ESlateVisibility::Hidden);
		UDelegateManager::Get()->OnSetAmmoText.RemoveDynamic(this, &UPlayerAmmoCounterWidget::SetAmmoText);
		UDelegateManager::Get()->OnEquipWeapon.RemoveDynamic(this, &UPlayerAmmoCounterWidget::ToggleThisWidget);
	}
}

void UPlayerAmmoCounterWidget::NativeDestruct()
{
	Super::NativeDestruct();
	UDelegateManager::Get()->OnSetAmmoText.RemoveDynamic(this, &UPlayerAmmoCounterWidget::SetAmmoText);
	UDelegateManager::Get()->OnEquipWeapon.RemoveDynamic(this, &UPlayerAmmoCounterWidget::ToggleThisWidget);
}
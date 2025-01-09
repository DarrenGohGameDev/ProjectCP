// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/PlayerAmmoCounterWidget.h"
#include "Components/TextBlock.h"
#include "Managers/DelegateManager.h"

void UPlayerAmmoCounterWidget::NativeConstruct()
{
	Super::NativeConstruct();
	UDelegateManager::Get()->OnEquipWeapon.AddDynamic(this, &UPlayerAmmoCounterWidget::ToggleThisWidget);
	ToggleThisWidget(false);
}

void UPlayerAmmoCounterWidget::SetAmmoText(int32 maxAmount, int32 currentAmount)
{
	if (mAmmoText)
	{
		mAmmoText->SetText(FText::Format(NSLOCTEXT("AmmoText", "AmmoFormat", "{0} / {1}"), { currentAmount, maxAmount } ));
	}
}

void UPlayerAmmoCounterWidget::ToggleThisWidget(bool toggle)
{
	if (toggle)
	{
		this->SetVisibility(ESlateVisibility::Visible);
		UDelegateManager::Get()->OnSetAmmoText.AddDynamic(this, &UPlayerAmmoCounterWidget::SetAmmoText);
	}
	else
	{
		this->SetVisibility(ESlateVisibility::Hidden);
		UDelegateManager::Get()->OnSetAmmoText.RemoveDynamic(this, &UPlayerAmmoCounterWidget::SetAmmoText);
	}
}

void UPlayerAmmoCounterWidget::NativeDestruct()
{
	Super::NativeDestruct();
	UDelegateManager::Get()->OnSetAmmoText.RemoveDynamic(this, &UPlayerAmmoCounterWidget::SetAmmoText);
	UDelegateManager::Get()->OnEquipWeapon.RemoveDynamic(this, &UPlayerAmmoCounterWidget::ToggleThisWidget);
}
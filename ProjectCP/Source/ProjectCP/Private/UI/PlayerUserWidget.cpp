// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/PlayerUserWidget.h"
#include "Components/TextBlock.h"

void UPlayerUserWidget::SetMaxAmmoText(int32 amount)
{
	if (mMaxAmmoText)
	{
		mMaxAmmoText->SetText(FText::FromString(FString::Printf(TEXT("%d"), amount)));
	}
}

void UPlayerUserWidget::SetCurrenAmmoText(int32 amount)
{
	if (mCurrentAmmoText)
	{
		mCurrentAmmoText->SetText(FText::FromString(FString::Printf(TEXT("%d"), amount)));
	}
}

void UPlayerUserWidget::SetAmmoText(int32 maxAmount, int32 currentAmount)
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
// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/PlayerUserWidget.h"
#include "UI/HpBarWidget.h"
#include "UI/PlayerAmmoCounterWidget.h"

void UPlayerUserWidget::Init(AActor* UIOwner)
{
	playerHpBarWidgetLayer->Init(UIOwner);
}

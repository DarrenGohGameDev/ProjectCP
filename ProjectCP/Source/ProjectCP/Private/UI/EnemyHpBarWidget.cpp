// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/EnemyHpBarWidget.h"
#include "UI/HpBarWidget.h"

void UEnemyHpBarWidget::BeginPlay()
{
	Super::BeginPlay();


}

void UEnemyHpBarWidget::SetHpBarWidget()
{
	if (HealthBarWidget == nullptr)
	{
		HealthBarWidget = Cast<UHpBarWidget>(GetUserWidgetObject());
	}
}

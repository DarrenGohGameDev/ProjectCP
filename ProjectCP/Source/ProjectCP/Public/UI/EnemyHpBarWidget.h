// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "EnemyHpBarWidget.generated.h"

class UHpBarWidget;
/**
 * 
 */
UCLASS()
class PROJECTCP_API UEnemyHpBarWidget : public UWidgetComponent
{
	GENERATED_BODY()

public :
	virtual void BeginPlay() override;

	void SetHpBarWidget();
	
private:
	UPROPERTY()
	UHpBarWidget* HealthBarWidget;
};

// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Button/LoadLevelButton.h"
#include "Kismet/GameplayStatics.h"
#include "Components/Button.h"

void ULoadLevelButton::NativeConstruct()
{
	Super::NativeConstruct();

	if (mLoadLevelButton)
	{
		mLoadLevelButton->OnClicked.AddDynamic(this, &ULoadLevelButton::OpenLevel);
	}
}

void ULoadLevelButton::OpenLevel()
{
	if (levelName != "")
	{
		UGameplayStatics::OpenLevel(this, levelName);
	}
}

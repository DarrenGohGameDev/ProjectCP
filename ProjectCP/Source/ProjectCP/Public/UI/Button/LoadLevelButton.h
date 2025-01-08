// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LoadLevelButton.generated.h"


class UButton;
/**
 * 
 */
UCLASS()
class PROJECTCP_API ULoadLevelButton : public UUserWidget
{
	GENERATED_BODY()
	
private: 
	virtual void NativeConstruct() override;

	UFUNCTION()
	void OpenLevel();

	UPROPERTY(EditAnywhere, Category = "LevelName")
	FName levelName;

	UPROPERTY(meta  =  (BindWidget))
	UButton* mLoadLevelButton;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Delegates/Delegate.h"
#include "UObject/ScriptDelegates.h"
#include "InputDelegateManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShootInput, AActor*, owner);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJumpInput, AActor*, owner);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInputMove, FVector2D, input, AActor*, owner);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInputLook, FVector2D, input, AActor*, owner);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReloadInput, AActor*, owner);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPickUpItem, AActor*, owner);

/**
 * 
 */
UCLASS()
class PROJECTCP_API UInputDelegateManager : public UObject
{
	GENERATED_BODY()
	
public :
	static UInputDelegateManager * Get();

	void OnTriggerShootInput(AActor* owner);

	void OnTriggerJumpInput(AActor* owner);

	void OnTriggerInputMove(FVector2D input, AActor* owner);

	void OnTriggerInputLook(FVector2D input, AActor* owner);

	void OnTriggerReloadInput(AActor* owner);

	void OnTriggerPickUpItem(AActor* owner);

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnShootInput onShootInput;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnJumpInput onJumpInput;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnInputMove onInputMove;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnInputLook onInputLook;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnReloadInput onReloadInput;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnPickUpItem onPickUpItem;


private :
	static UInputDelegateManager * mInstance;
};

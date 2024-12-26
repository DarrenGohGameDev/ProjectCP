// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Delegates/Delegate.h"
#include "UObject/ScriptDelegates.h"
#include "DelegateManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemOverlap, AActor*, item);
/**
 * 
 */
UCLASS()
class PROJECTCP_API UDelegateManager : public UObject
{
	GENERATED_BODY()
	
public :
	static UDelegateManager* Get();

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnItemOverlap OnItemOverlap;

private : 
	static UDelegateManager * mInstance;
};

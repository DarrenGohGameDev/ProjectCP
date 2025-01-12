// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Delegates/Delegate.h"
#include "StateMachineDelegateManager.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeState, FString, stateKey, AActor*, owner);
/**
 * 
 */
UCLASS()
class PROJECTCP_API UStateMachineDelegateManager : public UObject
{
	GENERATED_BODY()
	
public :
	static UStateMachineDelegateManager* Get();

	void UpdateState(FString stateKey, AActor* owner);

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnChangeState onChangeState;

private:

	static UStateMachineDelegateManager* mInstance;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseState.generated.h"

class UStateContext;
/**
 * 
 */
UCLASS()
class PROJECTCP_API UBaseState : public UObject
{
	GENERATED_BODY()

public :

	virtual void EnterState();
	virtual void TickState();
	virtual void ExitState();
	virtual void InitState(UStateContext* newStateContext, AActor * newOwner);

protected :
	UStateContext* stateContext;
	
};

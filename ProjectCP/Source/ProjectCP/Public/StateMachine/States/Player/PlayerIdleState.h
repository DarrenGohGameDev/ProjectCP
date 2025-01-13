// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StateMachine/BaseState.h"
#include "PlayerIdleState.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTCP_API UPlayerIdleState : public UBaseState
{
	GENERATED_BODY()


public:

	virtual void EnterState() override;
	virtual void TickState() override;
	virtual void ExitState() override;
	
};

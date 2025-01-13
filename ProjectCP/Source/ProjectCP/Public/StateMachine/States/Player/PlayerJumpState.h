// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StateMachine/BaseState.h"
#include "PlayerJumpState.generated.h"

class UPlayerStateContext;
/**
 * 
 */
UCLASS()
class PROJECTCP_API UPlayerJumpState : public UBaseState
{
	GENERATED_BODY()
	
public:

	virtual void EnterState() override;
	virtual void TickState() override;
	virtual void ExitState() override;

private  :
	UPlayerStateContext* mPlayerStateContext;

};

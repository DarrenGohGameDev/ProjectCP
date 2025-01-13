// Fill out your copyright notice in the Description page of Project Settings.


#include "StateMachine/BaseState.h"
#include "StateMachine/StateContext.h"

void UBaseState::EnterState()
{

}

void UBaseState::TickState()
{

}

void UBaseState::ExitState()
{
	

}

void UBaseState::InitState(UStateContext* newStateContext, AActor* newOwner)
{
	stateContext = newStateContext;
	stateContext->SetStateContextOwner(newOwner);
}

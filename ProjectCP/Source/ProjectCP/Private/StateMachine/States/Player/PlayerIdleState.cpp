// Fill out your copyright notice in the Description page of Project Settings.


#include "StateMachine/States/Player/PlayerIdleState.h"

void UPlayerIdleState::EnterState()
{
	Super::EnterState();
	UE_LOG(LogTemp, Warning, TEXT("enter idle state"));
}

void UPlayerIdleState::TickState()
{
	Super::TickState();
	//UE_LOG(LogTemp, Warning, TEXT("enter Tick state"));
}

void UPlayerIdleState::ExitState()
{
	Super::ExitState();
	UE_LOG(LogTemp, Warning, TEXT("enter Exit state"));
}
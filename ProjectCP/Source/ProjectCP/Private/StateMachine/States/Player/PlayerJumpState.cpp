// Fill out your copyright notice in the Description page of Project Settings.


#include "StateMachine/States/Player/PlayerJumpState.h"
#include "StateMachine/States/Player/PlayerStateContext.h"
#include "StateMachine/StateMachineDelegateManager.h"
#include "Managers/CharacterMovementManager.h"
#include "Character/PlayerCharacter.h"

void UPlayerJumpState::EnterState()
{
	Super::EnterState();
	UE_LOG(LogTemp, Warning, TEXT("enter Jump state"));

	if (!mPlayerStateContext)
	{
		mPlayerStateContext = Cast<UPlayerStateContext>(stateContext);
		mPlayerStateContext->SetPlayerContext();
	}
	
}

void UPlayerJumpState::TickState()
{
	Super::TickState();
	UE_LOG(LogTemp, Warning, TEXT("enter jump Tick state"));

	if (!mPlayerStateContext || !stateContext) return;

	if (mPlayerStateContext->GetPlayerClass()->GetCharacterMovementManager()->IsPlayerFalling())
	{
		UStateMachineDelegateManager::Get()->UpdateState(TEXT("Idle"), stateContext->GetStateOwner());
	}
	
}

void UPlayerJumpState::ExitState()
{
	Super::ExitState();
	UE_LOG(LogTemp, Warning, TEXT("enter jump Exit state"));
}

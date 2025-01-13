// Fill out your copyright notice in the Description page of Project Settings.


#include "StateMachine/States/Player/PlayerStateContext.h"
#include "Character/PlayerCharacter.h"

void UPlayerStateContext::SetPlayerContext()
{
	if (!owner) return;

	APlayerCharacter* playerChar = Cast<APlayerCharacter>(owner);

	if (playerChar)
	{
		mPlayerClass = playerChar;
	}
}

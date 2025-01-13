// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StateMachine/StateContext.h"
#include "PlayerStateContext.generated.h"

class APlayerCharacter;

/**
 * 
 */
UCLASS()
class PROJECTCP_API UPlayerStateContext : public UStateContext
{
	GENERATED_BODY()

public :
	void SetPlayerContext();

	FORCEINLINE APlayerCharacter * GetPlayerClass() { return mPlayerClass; }

private :
	APlayerCharacter* mPlayerClass;
	
};

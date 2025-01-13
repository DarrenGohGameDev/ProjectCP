// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StateContext.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTCP_API UStateContext : public UObject
{
	GENERATED_BODY()

public :
	void SetStateContextOwner(AActor* newOwner);
	
	FORCEINLINE AActor* GetStateOwner() { return owner; }

protected :
	AActor* owner;
};

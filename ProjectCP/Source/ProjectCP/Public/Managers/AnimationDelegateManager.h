// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Delegates/Delegate.h"
#include "Enums/LowerBodyAnimationState.h"
#include "Enums/CharacterEquipState.h"
#include "AnimationDelegateManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLowerBodyChange,ELowerBodyAnimationState, lowerBodyState, AActor* ,lowerBodyOwner);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEquipChange, ECharacterEquipState, equipState, AActor*, equipOwner);
/**
 * 
 */
UCLASS()
class PROJECTCP_API UAnimationDelegateManager : public UObject
{
	GENERATED_BODY()

public  :
	static UAnimationDelegateManager* Get();

	void UpdateLowerBodyState(ELowerBodyAnimationState lowerBodyState, AActor* lowerBodyOwner);

	void UpdateCharacterEquipState(ECharacterEquipState equipState, AActor* equipOwner);

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnLowerBodyChange onLowerBodyChange;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnEquipChange onEquipChange;
	
	
private:

	static UAnimationDelegateManager* mInstance;
};

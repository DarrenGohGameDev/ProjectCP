// Fill out your copyright notice in the Description page of Project Settings.


#include "StateMachine/StateMachineDelegateManager.h"

UStateMachineDelegateManager* UStateMachineDelegateManager::mInstance = nullptr;

UStateMachineDelegateManager* UStateMachineDelegateManager::Get()
{
	if (!mInstance)
	{
		mInstance = NewObject<UStateMachineDelegateManager>();
		mInstance->AddToRoot();
		UE_LOG(LogTemp, Log, TEXT("UStateMachineDelegateManager instance created."));
	}

	return mInstance;
}

void UStateMachineDelegateManager::UpdateState(FString stateKey, AActor* owner)
{
	if (mInstance->onChangeState.IsBound())
	{
		mInstance->onChangeState.Broadcast(stateKey,owner);
	}
}

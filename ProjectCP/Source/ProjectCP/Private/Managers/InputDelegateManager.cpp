// Fill out your copyright notice in the Description page of Project Settings.


#include "Managers/InputDelegateManager.h"

UInputDelegateManager* UInputDelegateManager::mInstance = nullptr;

UInputDelegateManager* UInputDelegateManager::Get()
{
	if (!mInstance)
	{
		mInstance = NewObject<UInputDelegateManager>();
		mInstance->AddToRoot();
		UE_LOG(LogTemp, Log, TEXT("UInputDelegateManager instance created."));
	}

	return mInstance;
}

void UInputDelegateManager::OnTriggerShootInput(AActor* owner)
{
	if (mInstance->onShootInput.IsBound())
	{
		mInstance->onShootInput.Broadcast(owner);
	}
}

void UInputDelegateManager::OnTriggerJumpInput(AActor* owner)
{
	if (mInstance->onJumpInput.IsBound())
	{
		mInstance->onJumpInput.Broadcast(owner);
	}
}

void UInputDelegateManager::OnTriggerInputMove(FVector2D input, AActor* owner)
{
	if (mInstance->onInputMove.IsBound())
	{
		mInstance->onInputMove.Broadcast(input, owner);
	}
}

void UInputDelegateManager::OnTriggerInputLook(FVector2D input, AActor* owner)
{
	if (mInstance->onInputLook.IsBound())
	{
		mInstance->onInputLook.Broadcast(input, owner);
	}
}

void UInputDelegateManager::OnTriggerReloadInput(AActor* owner)
{
	if (mInstance->onReloadInput.IsBound())
	{
		mInstance->onReloadInput.Broadcast(owner);
	}
}

void UInputDelegateManager::OnTriggerPickUpItem(AActor* owner)
{
	if (mInstance->onPickUpItem.IsBound())
	{
		mInstance->onPickUpItem.Broadcast(owner);
	}
}

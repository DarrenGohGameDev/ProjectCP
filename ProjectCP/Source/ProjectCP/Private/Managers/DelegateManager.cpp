// Fill out your copyright notice in the Description page of Project Settings.


#include "Managers/DelegateManager.h"

UDelegateManager* UDelegateManager::mInstance = nullptr;

UDelegateManager* UDelegateManager::Get()
{
	UE_LOG(LogTemp, Log, TEXT("DelegateManager instance Get."));
	if (!mInstance)
	{
		mInstance = NewObject<UDelegateManager>();
		mInstance->AddToRoot();
		UE_LOG(LogTemp, Log, TEXT("DelegateManager instance created."));
	}

	return mInstance;
}

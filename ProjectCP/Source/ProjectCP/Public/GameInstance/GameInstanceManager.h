// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameInstanceManager.generated.h"


class UDelegateManager;
class UObjectPoolingManager;
class UAnimationDelegateManager;
class ABullet;
/**
 * 
 */
UCLASS()
class PROJECTCP_API UGameInstanceManager : public UGameInstance
{
	GENERATED_BODY()
	
public :

	virtual void  OnStart() override;
	// when new levl start we need a game mode script to handle what ui show on screen be it menu or what not 
	// so when new level load pass in the correct UI to add to view port
	// need to do the multiple state machine so that I can switch state between game modes sort of since its a single player game
	// aka menu state / setting state / combat state
private :
	void InitManagers(UWorld * world);

	virtual void Shutdown() override;

	UDelegateManager* mDelegateManager;

	UObjectPoolingManager* mObjectPoolingManager;

	UAnimationDelegateManager* mAnimationDelegateManager;

	UPROPERTY(EditAnywhere, Category = "Bullet")
	TSubclassOf<ABullet> mSpawningBullet;
};

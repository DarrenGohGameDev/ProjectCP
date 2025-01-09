// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ObjectPoolingManager.generated.h"

class ABullet;

/**
 * 
 */
UCLASS()
class PROJECTCP_API UObjectPoolingManager : public UObject
{
	GENERATED_BODY()

public :

	static UObjectPoolingManager* Get();

	void Init(FVector3d spawnLocation, FRotator spawnRotation, TSubclassOf<ABullet> spawningBullet, UWorld * world);

	void GetBullet(AActor * bulletOwner,FVector3d spawnLocation, FRotator spawnRotation);

	void CleanBulletPool();

private :
	void AddNewBulletToPool(ABullet * bullet);

	void CreateBullet(AActor* bulletOwner, FVector3d spawnLocation, FRotator spawnRotation);

	void CreateBullet(FVector3d spawnLocation, FRotator spawnRotation);

	static UObjectPoolingManager* mInstance;

	TArray<ABullet*> mBulletPoolArray;

	TSubclassOf<ABullet> mSpawningBullet;

	UWorld* mWorld;
	
};

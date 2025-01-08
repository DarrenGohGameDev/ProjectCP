// Fill out your copyright notice in the Description page of Project Settings.


#include "GameInstance/GameInstanceManager.h"
#include "Managers/DelegateManager.h"
#include "Managers/ObjectPoolingManager.h"
#include "Weapon/Projectile/Bullet.h"

void UGameInstanceManager::OnStart()
{
	Super::OnStart();

	UWorld* world = GetWorld();

	if (world)
	{
		InitManagers(world);
	}
}

void UGameInstanceManager::InitManagers(UWorld * world)
{
	mDelegateManager = NewObject<UDelegateManager>(this);
	if (mDelegateManager)
	{
		mDelegateManager->Get();
	}

	mObjectPoolingManager = NewObject< UObjectPoolingManager>(this);
	if (mObjectPoolingManager)
	{

		mObjectPoolingManager->Get();
		if (mSpawningBullet)
		{
			// after runnnig once one play it never ran again ?? need to check but it cost no bug atm 
			FVector3d spawnLocation = FVector3d(0, -400.f, 0);
			FRotator spawnRotation = FRotator(0, 0.f, 0);
			mObjectPoolingManager->Get()->Init(spawnLocation, spawnRotation, mSpawningBullet, world);
		}
	}
}

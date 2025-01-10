// Fill out your copyright notice in the Description page of Project Settings.


#include "GameInstance/GameInstanceManager.h"
#include "Managers/DelegateManager.h"
#include "Managers/ObjectPoolingManager.h"
#include "Managers/AnimationDelegateManager.h"
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
			FVector3d spawnLocation = FVector3d(0, -5400.f, 0);
			FRotator spawnRotation = FRotator(0, 0.f, 0);
			mObjectPoolingManager->Get()->Init(spawnLocation, spawnRotation, mSpawningBullet, world);
			UE_LOG(LogTemp, Warning, TEXT("Manager are created instance created."));
		}
	}

	mAnimationDelegateManager = NewObject< UAnimationDelegateManager>(this);
	if (mAnimationDelegateManager)
	{
		mAnimationDelegateManager->Get();
	}
}

void UGameInstanceManager::Shutdown()
{
	Super::Shutdown();

	if (mObjectPoolingManager)
	{
		mObjectPoolingManager->CleanBulletPool();
	}
}

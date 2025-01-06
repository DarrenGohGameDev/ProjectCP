// Fill out your copyright notice in the Description page of Project Settings.


#include "Managers/ObjectPoolingManager.h"
#include "Weapon/Projectile/Bullet.h"

UObjectPoolingManager* UObjectPoolingManager::mInstance = nullptr;

UObjectPoolingManager* UObjectPoolingManager::Get()
{
	if (!mInstance)
	{
		mInstance = NewObject<UObjectPoolingManager>();
		mInstance->AddToRoot();
		UE_LOG(LogTemp, Log, TEXT("Object Pooling Manager instance created."));
	}

	return mInstance;
}

void UObjectPoolingManager::Init(AActor* bulletOwner, TSubclassOf<ABullet> spawningBullet, UWorld * world)
{
	mSpawningBullet = spawningBullet;
	mWorld = world;
	if (mBulletPool.Num() < 10)
	{
		FVector3d bulletLocation = bulletOwner->GetActorLocation();
		FRotator bulletRotation = bulletOwner->GetActorRotation();

		for (int32 i = 0; i < 10; i++)
		{
			CreateBullet(bulletOwner, bulletLocation, bulletRotation);
		}
	}
}

void UObjectPoolingManager::AddNewBulletToPool(ABullet * bullet)
{
	mBulletPool.Add(bullet);
}

void UObjectPoolingManager::CreateBullet(AActor* bulletOwner, FVector3d spawnLocation, FRotator spawnRotation)
{
	if (mWorld)
	{
		UE_LOG(LogTemp, Warning, TEXT("world is not null"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("world is null"));
	}

	if (mSpawningBullet)
	{
		UE_LOG(LogTemp, Warning, TEXT("mSpawningBullet is not null"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("mSpawningBullet is null"));
	}
	
	
	if (mWorld && mSpawningBullet)
	{
		FActorSpawnParameters bulletSpawnParams;
		bulletSpawnParams.Owner = bulletOwner;
		bulletSpawnParams.Instigator = bulletOwner->GetInstigator();
		bulletSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		ABullet* newBullet = mWorld->SpawnActor<ABullet>(
			mSpawningBullet,
			spawnLocation,
			spawnRotation,
			bulletSpawnParams
		);

		newBullet->NewBullet(true);

		UE_LOG(LogTemp, Warning, TEXT("Creating new bullet"));

		AddNewBulletToPool(newBullet);
	}
}

void UObjectPoolingManager::GetBullet(AActor* bulletOwner, FVector3d spawnLocation, FRotator spawnRotation)
{
	// loop thoruh the array till there is one bullet to use unless dont have we create new one
	for (int32 i = 0; i < mBulletPool.Num(); i++)
	{
		if (mBulletPool[i]->GetBulletState() == EBulletState::EBS_NotInUse)
		{
			UE_LOG(LogTemp, Warning, TEXT("using pool"));
			mBulletPool[i]->SetActorLocation(spawnLocation);
			mBulletPool[i]->ToggleBullet(true);
			return;
		}	
	}

	CreateBullet(bulletOwner, spawnLocation, spawnRotation);
	UE_LOG(LogTemp, Warning, TEXT("Create bullet"));
}
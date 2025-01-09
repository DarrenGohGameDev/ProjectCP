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

void UObjectPoolingManager::Init(FVector3d spawnLocation, FRotator spawnRotation, TSubclassOf<ABullet> spawningBullet, UWorld * world)
{
	mInstance->mSpawningBullet = spawningBullet;
	mInstance->mWorld = world;

	if (mInstance->mBulletPoolArray.Num() < 10)
	{
		for (int32 i = 0; i < 10; i++)
		{
			CreateBullet(spawnLocation, spawnRotation);
		}
	}
}

void UObjectPoolingManager::AddNewBulletToPool(ABullet * bullet)
{
	mInstance->mBulletPoolArray.Add(bullet);
}

void UObjectPoolingManager::CreateBullet(AActor* bulletOwner, FVector3d spawnLocation, FRotator spawnRotation)
{
	if (mInstance->mWorld && mInstance->mSpawningBullet)
	{
		FActorSpawnParameters bulletSpawnParams;
		bulletSpawnParams.Owner = bulletOwner;
		bulletSpawnParams.Instigator = bulletOwner->GetInstigator();
		bulletSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		ABullet* newBullet = mWorld->SpawnActor<ABullet>(
			mInstance->mSpawningBullet,
			spawnLocation,
			spawnRotation,
			bulletSpawnParams
		);

		newBullet->NewBullet(true);

		AddNewBulletToPool(newBullet);
	}
}

void UObjectPoolingManager::CreateBullet(FVector3d spawnLocation, FRotator spawnRotation)
{

	if (mInstance->mWorld && mInstance->mSpawningBullet)
	{
		FActorSpawnParameters bulletSpawnParams;
		bulletSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		ABullet* newBullet = mInstance->mWorld->SpawnActor<ABullet>(
			mInstance->mSpawningBullet,
			spawnLocation,
			spawnRotation,
			bulletSpawnParams
		);

		newBullet->NewBullet(true);

		AddNewBulletToPool(newBullet);
	}
}

void UObjectPoolingManager::CleanBulletPool()
{
	if (mInstance->mBulletPoolArray.Num() > 0)
	{
		TArray<ABullet*> bulletsToDestroy;
		for (int32 i = 0; i < mInstance->mBulletPoolArray.Num(); i++)
		{
			if (IsValid(mInstance->mBulletPoolArray[i]))
			{
				UE_LOG(LogTemp, Warning, TEXT("Cleaning pool"));
				bulletsToDestroy.Add(mInstance->mBulletPoolArray[i]);
			}
		}

		for (ABullet* bullet : bulletsToDestroy)
		{
			UE_LOG(LogTemp, Warning, TEXT("Destroying bullet"));
			bullet->Destroy();
		}

		UE_LOG(LogTemp, Warning, TEXT("emptying list"));
		mInstance->mBulletPoolArray.Empty();
	}
}

void UObjectPoolingManager::GetBullet(AActor* bulletOwner, FVector3d spawnLocation, FRotator spawnRotation)
{
	for (int32 i = 0; i < mInstance->mBulletPoolArray.Num(); i++)
	{
		if (mInstance->mBulletPoolArray[i]->GetBulletState() == EBulletState::EBS_NotInUse)
		{
			mInstance->mBulletPoolArray[i]->SetOwner(bulletOwner);
			mInstance->mBulletPoolArray[i]->SetActorLocation(spawnLocation);
			mInstance->mBulletPoolArray[i]->ToggleBullet(true);
			return;
		}	
	}

	CreateBullet(bulletOwner, spawnLocation, spawnRotation);
}
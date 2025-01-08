// Fill out your copyright notice in the Description page of Project Settings.


#include "Managers/GameManagers.h"
#include "Managers/DelegateManager.h"
#include "Managers/ObjectPoolingManager.h"
#include "Weapon/Projectile/Bullet.h"

// Sets default values
AGameManagers::AGameManagers()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	/*mDelegateManager = CreateDefaultSubobject<UDelegateManager>(TEXT("DelegateManager"));*/
	//mDelegateManager = NewObject<UDelegateManager>(this);
}

// Called when the game starts or when spawned
void AGameManagers::BeginPlay()
{
	Super::BeginPlay();

	UWorld* world = GetWorld();
	if (world)
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
				FVector3d spawnLocation = FVector3d(0, -400.f, 0);
				FRotator spawnRotation = FRotator(0, 0.f, 0);
				// after runnnig once one play it never ran again ?? need to check but it cost no bug atm 
				mObjectPoolingManager->Get()->Init(spawnLocation, spawnRotation, mSpawningBullet, world);
			}
		}
	}
}

// Called every frame
void AGameManagers::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


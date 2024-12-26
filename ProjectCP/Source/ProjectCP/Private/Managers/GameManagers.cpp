// Fill out your copyright notice in the Description page of Project Settings.


#include "Managers/GameManagers.h"
#include "Managers/DelegateManager.h"

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
	if (GetWorld())
	{
		mDelegateManager = NewObject<UDelegateManager>(this);
		if (mDelegateManager)
		{
			UE_LOG(LogTemp, Warning, TEXT("Custom UObject created in the world context"));
			mDelegateManager->Get();
		}
	}
}

// Called every frame
void AGameManagers::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/BaseItem.h"
#include "Components/SphereComponent.h"
#include "Character/PlayerCharacter.h"
#include "Managers/DelegateManager.h"

// Sets default values
ABaseItem::ABaseItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMeshComponent"));
	mItemMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	mItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = mItemMesh;

	mSphere = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	mSphere->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void ABaseItem::BeginPlay()
{
	Super::BeginPlay();

	mSphere->OnComponentBeginOverlap.AddDynamic(this, &ABaseItem::OnSphereOverlap);
	mSphere->OnComponentEndOverlap.AddDynamic(this, &ABaseItem::OnSphereOverlapEnd);
	
}
// Called every frame
void ABaseItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseItem::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerCharacter* player = Cast<APlayerCharacter>(OtherActor);
	if (player)
	{
		if (UDelegateManager::Get()->OnItemOverlap.IsBound())
		{
			UDelegateManager::Get()->OnItemOverlap.Broadcast(this);
		}
	}
}

void ABaseItem::OnSphereOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	APlayerCharacter* player = Cast<APlayerCharacter>(OtherActor);
	if (player)
	{
		if (UDelegateManager::Get()->OnItemOverlap.IsBound())
		{
			UDelegateManager::Get()->OnItemOverlap.Broadcast(nullptr);
		}
	}
}



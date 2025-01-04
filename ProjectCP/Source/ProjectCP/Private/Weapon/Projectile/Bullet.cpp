// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/Projectile/Bullet.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "CollisionQueryParams.h"
#include "Components/SphereComponent.h"
#include "ActorComponent/Character/HitComponent.h"
#include "Managers/DelegateManager.h"

// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BulletMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BulletMeshComponent"));
	RootComponent = BulletMeshComponent;

	BulletMeshComponent->SetCollisionObjectType(ECollisionChannel::ECC_EngineTraceChannel1);
	BulletMeshComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	BulletMeshComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
	BulletMeshComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_EngineTraceChannel1, ECollisionResponse::ECR_Ignore);

	BulletMeshComponent->SetSimulatePhysics(false);
	BulletMeshComponent->SetEnableGravity(false);
	BulletMeshComponent->SetMobility(EComponentMobility::Movable);

	projectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	projectileMovementComponent->InitialSpeed = 1000.f;
	projectileMovementComponent->MaxSpeed = 8500.f;
	projectileMovementComponent->bRotationFollowsVelocity = true;
	projectileMovementComponent->bShouldBounce = false;
	projectileMovementComponent->ProjectileGravityScale = 0.f;

	mSphere = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	mSphere->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();

	mSphere->OnComponentBeginOverlap.AddDynamic(this, &ABullet::OnSphereOverlap);

	if (projectileMovementComponent)
	{
		projectileMovementComponent->Velocity = GetActorForwardVector() * projectileMovementComponent->InitialSpeed;
	}
}

void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABullet::ToggleBullet(bool toggle)
{
	SetActorTickEnabled(toggle);

	SetActorEnableCollision(toggle);

	SetActorHiddenInGame(!toggle);
}


void ABullet::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UHitComponent * actorHitInterface = OtherActor->FindComponentByClass<UHitComponent>();

	if (actorHitInterface)
	{
		UDelegateManager::Get()->HitActor(damage, OtherActor);
		ToggleBullet(false);
	}
}
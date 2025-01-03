// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponent/Character/HitComponent.h"
#include "ActorComponent/Attribute/HealthComponent.h"

// Sets default values for this component's properties
UHitComponent::UHitComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	mHealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health Component"));
	// ...
}


// Called when the game starts
void UHitComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

// Called every frame
void UHitComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHitComponent::GetHit_Implementation(int32 damage, AActor* Hitter)
{
	float bulletDamage = (float)damage;
	mHealthComponent->TakeDamage(bulletDamage);
}
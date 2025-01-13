// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/BaseCharacter.h"
#include "ActorComponent/Character/HitComponent.h"
#include "ActorComponent/Character/AnimationComponent.h"
#include "StateMachine/StateManager.h"
#include "ActorComponent/Attribute/GAS/HealthAttributeSet.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	hitComponent = CreateDefaultSubobject<UHitComponent>(TEXT("HitComponent"));

	animationComponent = CreateDefaultSubobject<UAnimationComponent>(TEXT("AnimationComponent"));

	healthStat = CreateDefaultSubobject<UHealthAttributeSet>(TEXT("HealthStat"));

	GetMesh()->SetCollisionResponseToChannel(ECollisionChannel::ECC_EngineTraceChannel1, ECollisionResponse::ECR_Overlap);
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	healthStat->Init(this);
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


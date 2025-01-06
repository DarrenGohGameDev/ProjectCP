// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Enemy/BaseEnemyCharacter.h"
#include "ActorComponent/Character/HitComponent.h"
#include "UI/EnemyHpBarWidget.h"

// Sets default values
ABaseEnemyCharacter::ABaseEnemyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mHpBarWidget = CreateDefaultSubobject< UEnemyHpBarWidget>(TEXT("HpBarWidgetComponent"));
	mHpBarWidget->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void ABaseEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();

	mHpBarWidget->SetHpBarWidget();
	hitComponent->SetPlayerBaseHp();
}

// Called every frame
void ABaseEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseEnemyCharacter::ToggleHealthBar(bool toggle)
{

}

void ABaseEnemyCharacter::ToggleHealthBar(bool toggle, float hpPercent)
{

}
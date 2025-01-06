// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Character/BaseCharacter.h"
#include "BaseEnemyCharacter.generated.h"

class UEnemyHpBarWidget;

UCLASS()
class PROJECTCP_API ABaseEnemyCharacter : public ABaseCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseEnemyCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

private:	
	
	void ToggleHealthBar(bool toggle);

	void ToggleHealthBar(bool toggle, float hpPercent);

	UPROPERTY(VisibleAnywhere)
	UEnemyHpBarWidget* mHpBarWidget;
};

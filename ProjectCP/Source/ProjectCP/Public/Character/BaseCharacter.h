// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

class UHitComponent;
class UAnimationComponent;
class UStateManager;
class UHealthAttributeSet;

UCLASS()
class PROJECTCP_API ABaseCharacter : public ACharacter 
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();

	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UHitComponent* hitComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Animation Component")
	UHealthAttributeSet* healthStat;

	UPROPERTY(EditDefaultsOnly, Category = "Animation Component")
	UAnimationComponent* animationComponent;

	UPROPERTY(EditDefaultsOnly, Category = "State Component")
	UStateManager* stateManager;

private:	
	
};
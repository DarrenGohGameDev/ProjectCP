// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StateManager.generated.h"

class UBaseState;
class UStateContext;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTCP_API UStateManager : public UActorComponent
{
	GENERATED_BODY()

public:	

	UStateManager();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:

	virtual void BeginPlay() override;

	void Init();

	UBaseState * currentState;

	UPROPERTY(EditDefaultsOnly, Category = "State")
	TMap<FString,TSubclassOf<UBaseState>> allStates;

	UPROPERTY(EditDefaultsOnly, Category = "State")

	TSubclassOf<UStateContext> stateContext;

	bool isTransitioningState = false;

private:	
	
	UFUNCTION()
	void TransitionState(FString stateKey, AActor* owner);

	bool CheckValidNewState(FString newState, UBaseState*& newBaseState);

	void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	
	UPROPERTY()
	TMap<FString, UBaseState*> mCreatedStates;

	AActor * mOwner;

	UBaseState* mNextState;
};

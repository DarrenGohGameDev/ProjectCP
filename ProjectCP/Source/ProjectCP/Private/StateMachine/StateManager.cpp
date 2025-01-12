// Fill out your copyright notice in the Description page of Project Settings.


#include "StateMachine/StateManager.h"
#include "StateMachine/BaseState.h"
#include "StateMachine/StateMachineDelegateManager.h"

// Sets default values for this component's properties
UStateManager::UStateManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UStateManager::BeginPlay()
{
	Super::BeginPlay();
	Init();
	// ...
	
}

void UStateManager::Init()
{
	mOwner = GetOwner();

	for (auto i = allStates.CreateConstIterator(); i; ++i)
	{
		UBaseState* state = NewObject<UBaseState>(this, i->Value);
		mCreatedStates.Add(i->Key, state);
	}

	UStateMachineDelegateManager::Get()->onChangeState.AddDynamic(this, &UStateManager::TransitionState);
}

// Called every frame
void UStateManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!isTransitioningState)
	{
		currentState->TickState();
	}
	
}

void UStateManager::TransitionState(FString stateKey, AActor* owner)
{
	UBaseState* newBaseState = nullptr;

	if (mOwner == owner && CheckValidNewState(stateKey,newBaseState) && currentState != newBaseState)
	{
		isTransitioningState = true;
		currentState->ExitState();
		currentState = newBaseState;
		currentState->EnterState();
		isTransitioningState = false;
	}
}

bool UStateManager::CheckValidNewState(FString newState, UBaseState*& newBaseState)
{
	newBaseState = nullptr;
	if (currentState && mCreatedStates.Contains(newState))
	{
		newBaseState = mCreatedStates.FindRef(newState);
		return true;
	}
	return false;
}

void UStateManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	UStateMachineDelegateManager::Get()->onChangeState.RemoveDynamic(this, &UStateManager::TransitionState);
}

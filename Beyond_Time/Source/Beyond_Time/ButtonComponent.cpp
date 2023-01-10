// Fill out your copyright notice in the Description page of Project Settings.


#include "ButtonComponent.h"
#include "ElectricalPuzzleHandler.h"

// Sets default values for this component's properties
UButtonComponent::UButtonComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UButtonComponent::BeginPlay()
{
	Super::BeginPlay();

	PuzzleHandler = Cast<UElectricalPuzzleHandler>(PuzzleHandlerActor->GetComponentByClass(PuzzleHandlerComponent));
}


// Called every frame
void UButtonComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UButtonComponent::OnInteract_Implementation()
{
	if (ButtonSet || PuzzleHandler->Guessed) 
		return;

	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, FString::Printf(TEXT("Guessed number: %i"), ButtonNumber));
	PuzzleHandler->AddNumberToGuessCode(ButtonNumber);
	ButtonSet = true;
}


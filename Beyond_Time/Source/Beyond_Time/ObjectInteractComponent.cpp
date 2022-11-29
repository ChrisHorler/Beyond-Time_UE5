// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectInteractComponent.h"

// Sets default values for this component's properties
UOrangeConeInteraction::UOrangeConeInteraction()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOrangeConeInteraction::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UOrangeConeInteraction::OnInteract()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("You've interacted with the orange cone!"));
}


// Called every frame
void UOrangeConeInteraction::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


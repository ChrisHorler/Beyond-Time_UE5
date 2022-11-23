// Fill out your copyright notice in the Description page of Project Settings.


#include "TimeTravelComponent.h"

// Sets default values for this component's properties
UTimeTravelComponent::UTimeTravelComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UTimeTravelComponent::BeginPlay()
{
	Super::BeginPlay();

	PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
}

// Called every frame
void UTimeTravelComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if(IsActivated && TeleportTimer > 0)
	{
		//timer debug on screen
		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, FString::Printf(TEXT("%f = FloatVariable"), TeleportTimer));

		TeleportTimer -= DeltaTime;
	}
	
	if (IsActivated && TeleportTimer <= 0)
	{
		//teleportPlayer
		PlayerPawn->SetActorLocation(GetLocationForTimeTravel(PlayerPawn->GetActorLocation()));
		IsActivated = false;
	}
}

FVector UTimeTravelComponent::GetLocationForTimeTravel(FVector CurrentPosition)
{
	return InPast ? CurrentPosition + TimeTravelPositionOffset : CurrentPosition - TimeTravelPositionOffset;	 		
}

void UTimeTravelComponent::ActivateTimeTravel()
{
	if(IsActivated)
		return;

	TeleportTimer = TravelDelay;
	InPast = !InPast;
	IsActivated = true;
}



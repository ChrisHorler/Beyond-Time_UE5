// Fill out your copyright notice in the Description page of Project Settings.


#include "TimeTravelComponent.h"

#include "Kismet/GameplayStatics.h"

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
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATimeAffectedActor::StaticClass(), AllTimeActors);
}

// Called every frame
void UTimeTravelComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if(IsActivated && TeleportTimer > 0)
		TeleportTimer -= DeltaTime;

	//When the time runs out
	if (IsActivated && TeleportTimer <= 0)
	{
		//Update Time Actors
		UpdateAllTimeActors();
		
		//Teleport Player
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

void UTimeTravelComponent::UpdateAllTimeActors()
{
	for(auto TimeActor : AllTimeActors)
	{
		ATimeAffectedActor* TimeAffectedActor = static_cast<ATimeAffectedActor*>(TimeActor);

		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, Actor->GetName());
		
		if(TimeAffectedActor == nullptr)
			continue;
		
		if(!InPast)
		{
			TimeAffectedActor->LinkedActor->SetActorLocation(GetLocationForTimeTravel(TimeActor->GetActorLocation()) - TimeAffectedActor->DifferenceVector);	 				 		
			TimeAffectedActor->LinkedActor->SetActorRotation(TimeActor->GetActorRotation() - TimeAffectedActor->DifferenceRotation);

			TimeAffectedActor->OriginalVector = TimeAffectedActor->LinkedActor->GetActorLocation();
			TimeAffectedActor->OriginalRotation = TimeAffectedActor->LinkedActor->GetActorRotation();
		}
		else
		{
			//Calculate difference in Rotation and Vector
			TimeAffectedActor->DifferenceVector = TimeAffectedActor->OriginalVector - TimeAffectedActor->LinkedActor->GetActorLocation();
			TimeAffectedActor->DifferenceRotation = TimeAffectedActor->OriginalRotation - TimeAffectedActor->LinkedActor->GetActorRotation();
		}
	}
}



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
	PlayerCharacter = Cast<AGameCharacter>(PlayerPawn);

	//set time travel offset in each time actor
	for (auto TimeActor : AllTimeActors)
	{
		ATimeAffectedActor* TimeAffectedActor = static_cast<ATimeAffectedActor*>(TimeActor);

		TimeAffectedActor->TimeTravelOffset = TimeTravelLocationOffset;
		TimeAffectedActor->SetActorPhysics(false);
		TimeAffectedActor->ResetActor(); 
	}
}

// Called every frame
void UTimeTravelComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if(TimeTravelActivated && TeleportTimer > 0)
		TeleportTimer -= DeltaTime;

	
	if (TimeTravelActivated)
	{
		//When the Timer is below teleport timer, teleport player to new location
		if (TeleportTimer < TeleportDelay && !PlayerTeleported)
		{
			//Update Time Actors
			UpdateAllTimeActors();

			//Teleport Player
			PlayerPawn->SetActorLocation(GetLocationForTimeTravel(PlayerPawn->GetActorLocation()));
			PlayerTeleported = true;
		}
		//if timer has reached 0 give control to player and enable gravity again
		if (TeleportTimer <= 0)
		{
			//enable gravity
			if (PlayerCharacter)
			{
				PlayerCharacter->SetPlayerGravityState(true);
				UpdateAllTimeActorsPhysics();
			}
		
			TimeTravelActivated = false;
			PlayerTeleported = false;
		}
	}
}

FVector UTimeTravelComponent::GetLocationForTimeTravel(FVector CurrentPosition)
{
	return InPast ? CurrentPosition + TimeTravelLocationOffset : CurrentPosition - TimeTravelLocationOffset;	 		
}

void UTimeTravelComponent::ActivateTimeTravel()
{
	if(TimeTravelActivated)
		return;

	TeleportTimer = TravelDelay;
	InPast = !InPast;

	//disable gravity	
	if (PlayerCharacter)
	{
		PlayerCharacter->SetPlayerGravityState(false);
	}

	TimeTravelActivated = true;
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
			TimeAffectedActor->SetActorPhysics(false);

			TimeAffectedActor->LinkedActor->SetActorLocation(GetLocationForTimeTravel(TimeActor->GetActorLocation()));	 				 		
			TimeAffectedActor->LinkedActor->SetActorRotation(TimeActor->GetActorRotation());
		}
	}
}

void UTimeTravelComponent::UpdateAllTimeActorsPhysics()
{
	for (auto TimeActor : AllTimeActors)
	{
		ATimeAffectedActor* TimeAffectedActor = static_cast<ATimeAffectedActor*>(TimeActor);

		if (TimeAffectedActor == nullptr)
			continue;

		TimeAffectedActor->SetActorPhysics(InPast);
	}
}



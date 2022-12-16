// Fill out your copyright notice in the Description page of Project Settings.


#include "DeathTriggerBox.h"
#include "TimeAffectedActor.h"
#include "PickupHandler.h"
#include <Kismet/GameplayStatics.h>

ADeathTriggerBox::ADeathTriggerBox()
{
	PrimaryActorTick.bCanEverTick = true;

	RespawnPoint = CreateDefaultSubobject<UChildActorComponent>(TEXT("RespawnPoint"));

	OnActorBeginOverlap.AddDynamic(this, &ADeathTriggerBox::OnOverlapBegin);
}

void ADeathTriggerBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!IsActivated)
		return;

	if (DeathTimer > 0)
		DeathTimer -= DeltaTime;

	if (DeathTimer <= 0)
	{
		//Set player rotation and location to respawn point 
		Character->SetActorLocation(RespawnPoint->GetRelativeLocation());
		Character->SetPlayerRotation(RespawnPoint->GetRelativeRotation());
		Character->SetPlayerDeathState(false);

		//reset all time affected actors
		for (auto TimeActor : AllTimeActors)
		{
			TimeActor->ResetActor();
		}
		
		//reset if holding an object
		if (PickupHandler != nullptr)
		{
			if(PickupHandler->IsHoldingPickupObject)
			{
				PickupHandler->PickupSelectedObject();
			}
		}

		//reset all pickup actors
		for (auto PickupActor : AllPickupActors)
		{
			PickupActor->ResetActor();
		}

		IsActivated = false;
	}
}

void ADeathTriggerBox::OnOverlapBegin(AActor* MyOverlappedActor, AActor* OtherActor)
{
	if (!OtherActor || IsActivated)
		return;
	

	if (OtherActor->ActorHasTag("Player"))
	{
		Character = Cast<AGameCharacter>(OtherActor);

		if (Character != nullptr)
		{
			DeathTimer = DeathWaitAmount;
			Character->SetPlayerDeathState(true);
			PickupHandler = OtherActor->FindComponentByClass<UPickupHandler>();

			if(PickupHandler == nullptr)
				GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("NULL"));

			IsActivated = true;
		}

	}	

	if (OtherActor->ActorHasTag("Pickup"))
	{
		for (auto PickupActor : AllPickupActors)
		{
			PickupActor->ResetActor();
		}
	}
}

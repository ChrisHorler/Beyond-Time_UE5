// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameCharacter.h"
#include "TimeAffectedActor.h"
#include "InteractionHandler.h"
#include "PickupActor.h"
#include "Engine/TriggerBox.h"
#include "DeathTriggerBox.generated.h"

/**
 * 
 */
UCLASS()
class BEYOND_TIME_API ADeathTriggerBox : public ATriggerBox
{
	GENERATED_BODY()

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	ADeathTriggerBox();

	UPROPERTY(EditAnywhere, Category = "Trigger Settings")
	UChildActorComponent* RespawnPoint;

	UPROPERTY(EditAnywhere, Category = "Trigger Settings")
	float DeathWaitAmount = 2.0f;

	UPROPERTY(EditAnywhere, Category = "Trigger Settings")
	TArray<ATimeAffectedActor*> AllTimeActors;

	UPROPERTY(EditAnywhere, Category = "Trigger Settings")
	TArray<APickupActor*> AllPickupActors;

	UPROPERTY()
	float DeathTimer;

	UPROPERTY()
	bool IsActivated;

	UPROPERTY()
	AGameCharacter* Character;

	UPROPERTY()
	UInteractionHandler* InteractionHandler;

	// declare overlap begin function
	UFUNCTION()
	void OnOverlapBegin(AActor* MyOverlappedActor, AActor* OtherActor);
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameCharacter.h"
#include "TimeAffectedActor.h"
#include "Components/ActorComponent.h"
#include "TimeTravelComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BEYOND_TIME_API UTimeTravelComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTimeTravelComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	
	//methods
	FVector GetLocationForTimeTravel(FVector CurrentPosition);
	
	void ActivateTimeTravel();
	void UpdateAllTimeActors();
	void UpdateAllTimeActorsPhysics();

	UPROPERTY(EditAnywhere, Category = "Time Travel Settings")
	FVector TimeTravelLocationOffset;
	UPROPERTY(EditAnywhere, Category = "Time Travel Settings")
	float TravelDelay = 3.0f;
	UPROPERTY(EditAnywhere, Category = "Time Travel Settings")
	float TeleportDelay = 1.5f;

	UPROPERTY()
	bool InPast = false;
	UPROPERTY()
	bool TimeTravelActivated = false;

	UPROPERTY()
	bool PlayerTeleported = false;
	UPROPERTY()
	float TeleportTimer;

	UPROPERTY()
	APawn* PlayerPawn;

	UPROPERTY()
	AGameCharacter* PlayerCharacter;
	
	UPROPERTY(EditAnywhere, Category = "Time Travel Settings")
	TArray<AActor*> AllTimeActors;
};

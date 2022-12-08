// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimeAffectedActor.generated.h"

UCLASS()
class BEYOND_TIME_API ATimeAffectedActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATimeAffectedActor();

	void ResetActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	AActor* LinkedActor;

	UPROPERTY()
	FVector TimeTravelOffset;

private:
	UPROPERTY()
	FVector DefaultLocation;

	UPROPERTY()
	FRotator DefaultRotation;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;
};

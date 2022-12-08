// Fill out your copyright notice in the Description page of Project Settings.


#include "TimeAffectedActor.h"
#include "TimeTravelComponent.h"

// Sets default values
ATimeAffectedActor::ATimeAffectedActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
}

void ATimeAffectedActor::ResetActor()
{
	SetActorLocation(DefaultLocation);
	SetActorRotation(DefaultRotation);
	LinkedActor->SetActorLocation(DefaultLocation - TimeTravelOffset);
	LinkedActor->SetActorRotation(DefaultRotation);
}

// Called when the game starts or when spawned
void ATimeAffectedActor::BeginPlay()
{
	Super::BeginPlay();

	DefaultLocation = GetActorLocation();
	DefaultRotation = GetActorRotation();
}

// Called every frame
void ATimeAffectedActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


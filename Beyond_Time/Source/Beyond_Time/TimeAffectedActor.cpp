// Fill out your copyright notice in the Description page of Project Settings.


#include "TimeAffectedActor.h"

// Sets default values
ATimeAffectedActor::ATimeAffectedActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
}

// Called when the game starts or when spawned
void ATimeAffectedActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ATimeAffectedActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupActor.h"

// Sets default values
APickupActor::APickupActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
}

void APickupActor::ResetActor()
{
	SetActorLocation(DefaultLocation);
	SetActorRotation(DefaultRotation);

	UPrimitiveComponent* Component = Cast<UPrimitiveComponent>(GetRootComponent());
	if (Component)
	{
		//resets all physics velocity
		Component->ComponentVelocity = FVector(0, 0, 0);
		Component->SetPhysicsLinearVelocity(FVector(0, 0, 0));
		Component->SetPhysicsAngularVelocityInDegrees(FVector(0, 0, 0));
	}
}

// Called when the game starts or when spawned
void APickupActor::BeginPlay()
{
	Super::BeginPlay();

	DefaultLocation = GetActorLocation();
	DefaultRotation = GetActorRotation();
}

// Called every frame
void APickupActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractableInterface.h"
#include "Components/ActorComponent.h"
#include "ButtonComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BEYOND_TIME_API UButtonComponent : public UActorComponent, public IInteractableInterface
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UButtonComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void OnInteract_Implementation() override;

	UPROPERTY(EditAnywhere, Category="Button Settings")
	int ButtonNumber;

	UPROPERTY(EditAnywhere, Category="Button Settings")
	bool ButtonSet;
};


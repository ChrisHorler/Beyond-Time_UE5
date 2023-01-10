// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ElectricalPuzzleHandler.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BEYOND_TIME_API UElectricalPuzzleHandler : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UElectricalPuzzleHandler();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void AddNumberToGuessCode(int Number);
	void ResetPuzzle();
	void CompletePuzzle();

	UPROPERTY(EditAnywhere, Category = "Puzzle Settings")
		int ButtonAmount = 6;

	UPROPERTY(EditAnywhere, Category = "Puzzle Settings")
		FString CorrectCode = "421365";

	UPROPERTY(EditAnywhere, Category = "Puzzle Settings")
		TArray<AActor*> AllButtons;

	UPROPERTY()
		bool Guessed = false;

private:

	UPROPERTY()
		FString GuessingCode = "";

	UPROPERTY()
		int NumbersGuessed = 0;
};

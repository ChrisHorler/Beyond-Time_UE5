// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "PlayerHUD.generated.h"

/**
 * 
 */
UCLASS()
class BEYOND_TIME_API UPlayerHUD : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void SetImage(UTexture2D* newTexture);

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UImage* CrosshairImage;
};

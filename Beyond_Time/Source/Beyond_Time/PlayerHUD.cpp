// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHUD.h"

void UPlayerHUD::SetImage(UTexture2D* newTexture)
{
	if (CrosshairImage) 
	{
		CrosshairImage->SetBrushFromTexture(newTexture);
	}
}

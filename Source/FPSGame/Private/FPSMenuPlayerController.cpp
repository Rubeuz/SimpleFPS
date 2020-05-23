// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSMenuPlayerController.h"
#include "FPSMenuHUD.h"

AFPSMenuPlayerController::AFPSMenuPlayerController()
{

}

void AFPSMenuPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (InputComponent)
	{
		InputComponent->BindAction("OpenMenu", IE_Pressed, this, &AFPSMenuPlayerController::OpenMenu);
	}
}

void AFPSMenuPlayerController::OpenMenu()
{
	if (AFPSMenuHUD* MenuHUD = Cast<AFPSMenuHUD>(GetHUD()))
	{
		MenuHUD->ShowMenu();
	}
}
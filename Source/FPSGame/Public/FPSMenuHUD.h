// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FPSMenuHUD.generated.h"

/**
 * 
 */

class UTexture2D;

UCLASS()
class FPSGAME_API AFPSMenuHUD : public AHUD
{
	GENERATED_BODY()
	

protected:

	TSharedPtr <class SMainMenuWidget> MenuWidget;
	TSharedPtr <class SWidget> MenuWidgetContainer;

	virtual void BeginPlay() override;

public:

	void ShowMenu();
	void RemoveMenu();

public:

	AFPSMenuHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	UTexture2D* CrosshairTex;

	UPROPERTY(EditAnywhere, Category = "Health")
		TSubclassOf<class UUserWidget> HUDWidgetClass;

	UPROPERTY(EditAnywhere, Category = "Health")
		class UUserWidget* CurrentWidget;

};

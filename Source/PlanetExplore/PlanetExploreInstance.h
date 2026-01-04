// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "PlanetExploreInstance.generated.h"

/**
 * this instance class handles the main menu and game level transitions
 */
UCLASS()
class PLANETEXPLORE_API UPlanetExploreInstance : public UGameInstance
{
	GENERATED_BODY()


public:

	UFUNCTION(BlueprintCallable, Category = "Game Workflow")
	void LoadMainMenu();

	UFUNCTION(BlueprintCallable, Category = "Game Workflow")
	void LaunchGame();

	UFUNCTION(BlueprintCallable, Category = "Game Workflow")
	void ReturnToMainMenu();

protected:
	
	UPROPERTY(EditDefaultsOnly, Category = "Game Flow")
	FName MainMenuMapName = FName("Map_MainMenu");

	UPROPERTY(EditDefaultsOnly, Category = "Game Flow")
	FName GameplayMapName = FName("Stylized_Nature_ExampleScene");

};

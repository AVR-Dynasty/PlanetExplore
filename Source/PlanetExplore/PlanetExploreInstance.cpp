// Fill out your copyright notice in the Description page of Project Settings.


#include "PlanetExploreInstance.h"
#include "Kismet/GameplayStatics.h"

void UPlanetExploreInstance::LoadMainMenu()
{
	if (!MainMenuMapName.IsNone())
	{
		UGameplayStatics::OpenLevel(GetWorld(), MainMenuMapName);
	}
}


void UPlanetExploreInstance::LaunchGame()
{
	if (!GameplayMapName.IsNone())
	{
		UGameplayStatics::OpenLevel(GetWorld(), GameplayMapName);
	}
}


void UPlanetExploreInstance::ReturnToMainMenu()
{
	LoadMainMenu();
}
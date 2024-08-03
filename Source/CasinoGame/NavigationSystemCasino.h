// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NavigationSystem.h"
#include "NavigationSystemCasino.generated.h"

class UWorld;
/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class CASINOGAME_API UNavigationSystemCasino : public UNavigationSystemV1
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
	static void BuildNav(UWorld* World);
};

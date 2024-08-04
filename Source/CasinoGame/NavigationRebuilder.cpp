// Fill out your copyright notice in the Description page of Project Settings.


#include "NavigationRebuilder.h"
#include "NavigationSystem.h"


// Sets default values
ANavigationRebuilder::ANavigationRebuilder()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ANavigationRebuilder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANavigationRebuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANavigationRebuilder::RebuildNavMesh() const
{
	if (UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld()))
	{
		NavSys->Build();
	}
}


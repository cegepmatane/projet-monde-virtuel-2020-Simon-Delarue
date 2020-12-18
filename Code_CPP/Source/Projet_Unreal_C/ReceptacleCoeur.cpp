// Fill out your copyright notice in the Description page of Project Settings.


#include "ReceptacleCoeur.h"

// Sets default values
AReceptacleCoeur::AReceptacleCoeur()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->mailles = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Corps coeur"));
	this->RootComponent = this->mailles;

}

// Called when the game starts or when spawned
void AReceptacleCoeur::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AReceptacleCoeur::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


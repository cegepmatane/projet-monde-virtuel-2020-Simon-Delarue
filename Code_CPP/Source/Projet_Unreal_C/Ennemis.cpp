// Fill out your copyright notice in the Description page of Project Settings.


#include "Ennemis.h"

// Sets default values
AEnnemis::AEnnemis()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->mailles = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Corps de l'ennemi"));
	this->RootComponent = this->mailles;
}

// Called when the game starts or when spawned
void AEnnemis::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnnemis::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnnemis::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


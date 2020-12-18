// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "ReceptacleCoeur.generated.h"

UCLASS()
class PROJET_UNREAL_C_API AReceptacleCoeur : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Vie", meta = (AllowPrivateAccess = "true"));
	class UStaticMeshComponent* mailles;
public:	
	// Sets default values for this actor's properties
	AReceptacleCoeur();
	FORCEINLINE class UStaticMeshComponent* getMailles() { return this->mailles; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/StaticMeshComponent.h"
#include "Ennemis.generated.h"

UCLASS()
class PROJET_UNREAL_C_API AEnnemis : public ACharacter
{
	GENERATED_BODY()
private:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Ennemis", meta = (AllowPrivateAccess = "true"));
	class UStaticMeshComponent* mailles;
public:
	// Sets default values for this character's properties
	AEnnemis();
	FORCEINLINE class UStaticMeshComponent* getMailles() { return this->mailles; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

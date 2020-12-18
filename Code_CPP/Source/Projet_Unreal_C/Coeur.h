// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ReceptacleCoeur.h"
#include "Coeur.generated.h"

/**
 * 
 */
UCLASS()
class PROJET_UNREAL_C_API ACoeur : public AReceptacleCoeur
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vie", meta = (AllowPrivateAccess = "true"))
	int niveau;

	bool actif;
public:
	UFUNCTION(BlueprintCallable, Category = "Vie")
	void setActif(bool etat);
	UFUNCTION(BlueprintCallable, Category = "Vie")
	void activer();
	UFUNCTION(BlueprintCallable, Category = "Vie")
	void desactiver();
	UFUNCTION(BlueprintPure, Category = "Vie")
	bool estActif();
	
};

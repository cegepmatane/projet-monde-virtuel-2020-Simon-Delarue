// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ennemis.h"
#include "BebeGeant.generated.h"

/**
 * 
 */
UCLASS()
class PROJET_UNREAL_C_API ABebeGeant : public AEnnemis
{
	GENERATED_BODY()
private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ennemis", meta = (AllowPrivateAccess = "true"))
	int niveau;

	bool aggro; // Aggro = si l'ennemi est en mode attaque et qu'il vous a pris pour cible
public:
	UFUNCTION(BlueprintCallable, Category = "Ennemis")
		void setAggro(bool etat);
	UFUNCTION(BlueprintCallable, Category = "Ennemis")
		void activerAggro();
	UFUNCTION(BlueprintCallable, Category = "Ennemis")
		void desactiverAggro();
	UFUNCTION(BlueprintPure, Category = "Ennemis")
		bool estAggro();
	UFUNCTION(BlueprintCallable, Category = "Ennemis")
		void attaquer();
};

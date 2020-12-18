// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ennemis.h"
#include "Bonhomme_Rond.generated.h"

/**
 * 
 */
UCLASS()
class PROJET_UNREAL_C_API ABonhomme_Rond : public AEnnemis
{
	GENERATED_BODY()
private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ennemis", meta = (AllowPrivateAccess = "true"))
		float vitesseDeBase;

		FString couleur; 
public:
	UFUNCTION(BlueprintCallable, Category = "Ennemis")
		void setCouleur(FString newcouleur);
	UFUNCTION(BlueprintCallable, Category = "Ennemis")
		FString getCouleur();
	UFUNCTION(BlueprintCallable, Category = "Ennemis")
		void tomber();
};

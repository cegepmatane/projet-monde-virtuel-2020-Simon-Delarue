// Fill out your copyright notice in the Description page of Project Settings.


#include "Bonhomme_Rond.h"

void ABonhomme_Rond::setCouleur(FString newcouleur) 
{
	this->couleur = newcouleur;
}

FString ABonhomme_Rond::getCouleur() 
{
	return this->couleur;
}

void ABonhomme_Rond::tomber()
{
	//ajouter du code pour activer la physique et que le bonhomme tombe
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Le Bonhomme rond tombe par terre !"));
	}
		
}
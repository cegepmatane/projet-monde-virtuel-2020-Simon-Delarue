// Fill out your copyright notice in the Description page of Project Settings.


#include "Coeur.h"

void ACoeur::setActif(bool etat)
{
	this->actif = etat;
}
void ACoeur::activer()
{
	this->actif = true;
}
void ACoeur::desactiver()
{
	this->actif = false;
}
bool ACoeur::estActif() 
{
	return this->actif;
}

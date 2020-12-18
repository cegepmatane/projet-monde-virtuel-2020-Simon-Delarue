// Fill out your copyright notice in the Description page of Project Settings.


#include "BebeGeant.h"

void ABebeGeant::setAggro(bool etat)
{
	this->aggro = etat;
}
void ABebeGeant::activerAggro()
{
	this->aggro = true;
}
void ABebeGeant::desactiverAggro()
{
	this->aggro = false;
}
bool ABebeGeant::estAggro()
{
	return this->aggro;
}
void ABebeGeant::attaquer()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Le Bebe attaque !"));
	}
		
}
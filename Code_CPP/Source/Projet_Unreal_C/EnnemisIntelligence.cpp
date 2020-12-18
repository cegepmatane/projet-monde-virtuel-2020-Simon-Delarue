// Fill out your copyright notice in the Description page of Project Settings.


#include "EnnemisIntelligence.h"

AEnnemisIntelligence::AEnnemisIntelligence() 
{

	this->tableauNoir = CreateDefaultSubobject<UBlackboardComponent>(TEXT("Tableau Noir"));
	this->comportement = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("Comportement"));
	
}

void AEnnemisIntelligence::OnPossess(APawn* pion) 
{
	Super::OnPossess(pion);

	AEnnemisPathfinding* ennemisPathfinding = Cast<AEnnemisPathfinding>(pion);
	if (ennemisPathfinding) 
	{
		this->tableauNoir->InitializeBlackboard(*(ennemisPathfinding->comportement->BlackboardAsset));
		this->ennemiCle = this->tableauNoir->GetKeyID(TEXT("cible"));
		this->comportement->StartTree(*(ennemisPathfinding->comportement));

	}


}


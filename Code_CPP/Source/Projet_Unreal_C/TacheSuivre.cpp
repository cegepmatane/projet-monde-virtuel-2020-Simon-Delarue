// Fill out your copyright notice in the Description page of Project Settings.


#include "TacheSuivre.h"

EBTNodeResult::Type UTacheSuivre::ExecuteTask(UBehaviorTreeComponent& proprietaire, uint8* noeudMemoire)
{
	AEnnemisIntelligence * ennemisIntelligence = Cast<AEnnemisIntelligence>(proprietaire.GetAIOwner());
	AProjet_Unreal_CCharacter * cible = Cast<AProjet_Unreal_CCharacter>(proprietaire.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Object>(ennemisIntelligence->ennemiCle));

	if(cible)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, "Avance vers Ennemi");
		ennemisIntelligence->MoveToActor(cible, 3.f, true, true, true, 0, true);
		return EBTNodeResult::Succeeded;
	}
	else
	{
		return EBTNodeResult::Failed;
	}
	return EBTNodeResult::Failed;
}
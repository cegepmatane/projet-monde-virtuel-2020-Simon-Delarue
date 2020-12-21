// Fill out your copyright notice in the Description page of Project Settings.


#include "ServiceChercherJoueur.h"

UServiceChercherJoueur::UServiceChercherJoueur() 
{
	this->bCreateNodeInstance = true;

}

void UServiceChercherJoueur::TickNode(UBehaviorTreeComponent& proprietaire, uint8* noeudMemoire, float deltaSeconde)
{
	AEnnemisIntelligence* ennemiIntelligence =  Cast<AEnnemisIntelligence>(proprietaire.GetAIOwner());

	//Si le cast a fonctionné = si l'objet est du type attendu
	if (ennemiIntelligence)
	{
		//cible = joueur principal
		AProjet_Unreal_CCharacter * cible = Cast<AProjet_Unreal_CCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
		if (cible) 
		{
			//GEngine->AddOnScreenDebugMessage(-1,2.f,FColor::Green, "Cible trouvee");
			proprietaire.GetBlackboardComponent()->SetValue<UBlackboardKeyType_Object>(ennemiIntelligence->ennemiCle, cible);
		}
	}
}
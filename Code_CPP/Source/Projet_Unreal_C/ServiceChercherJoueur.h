// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerController.h"
#include "Projet_Unreal_CCharacter.h"
#include "EnnemisIntelligence.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/Blackboard/BlackBoardKeyType_Object.h"
#include "ServiceChercherJoueur.generated.h"

/**
 * 
 */
UCLASS()
class PROJET_UNREAL_C_API UServiceChercherJoueur : public UBTService
{
	GENERATED_BODY()
public:
	UServiceChercherJoueur();
protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "EnnemisIntelligence.h"
#include "Projet_Unreal_CCharacter.h"
#include "BehaviorTree/Blackboard/BlackBoardKeyType_Object.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TacheSuivre.generated.h"

/**
 * 
 */
UCLASS()
class PROJET_UNREAL_C_API UTacheSuivre : public UBTTaskNode
{
	GENERATED_BODY()

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& proprietaire, uint8* noeudMemoire) override;
	
};

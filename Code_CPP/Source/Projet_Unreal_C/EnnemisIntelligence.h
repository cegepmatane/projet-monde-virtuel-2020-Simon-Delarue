// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnnemisPathfinding.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "EnnemisIntelligence.generated.h"

/**
 * 
 */
UCLASS()
class PROJET_UNREAL_C_API AEnnemisIntelligence : public AAIController
{
	GENERATED_BODY()

public:
	AEnnemisIntelligence();
	void OnPossess(APawn* pion) override;
	uint8 ennemiCle;

private:
	UPROPERTY(transient)
	class UBlackboardComponent* tableauNoir;
	UPROPERTY(transient)
	class UBehaviorTreeComponent* comportement;
	
};

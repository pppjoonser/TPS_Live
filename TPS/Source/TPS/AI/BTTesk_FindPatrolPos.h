// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTesk_FindPatrolPos.generated.h"

/**
 * 
 */
UCLASS()
class TPS_API UBTTesk_FindPatrolPos : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UBTTesk_FindPatrolPos();

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
protected:
	UPROPERTY(EditAnywhere)
	float PatrolRadius = 1000.0f;
};

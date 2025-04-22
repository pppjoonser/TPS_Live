// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TPSAttackInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UTPSAttackInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TPS_API ITPSAttackInterface
{
	GENERATED_BODY()

public:
	virtual void AttackHitCheck() = 0;
};

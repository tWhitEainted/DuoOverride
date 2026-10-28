// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CPP_GameMode_FL.generated.h"

/**
 * 
 */
UCLASS()
class DUOOVERRIDE_API ACPP_GameMode_FL : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	ACPP_GameMode_FL();
	
protected:
	virtual void BeginPlay() override;
	
};

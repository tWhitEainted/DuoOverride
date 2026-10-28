// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "CPP_MultiplayerGameMode_FL.generated.h"

/**
 * 
 */
UCLASS()
class DUOOVERRIDE_API ACPP_MultiplayerGameMode_FL : public AGameMode
{
	GENERATED_BODY()
	
public:
	ACPP_MultiplayerGameMode_FL();

protected:
	virtual void BeginPlay() override;
};

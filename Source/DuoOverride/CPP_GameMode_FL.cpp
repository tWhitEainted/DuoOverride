// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_GameMode_FL.h"
#include "CPP_Character_FL.h"
#include "CPP_SplitGameState_FL.h"
#include "CPP_SplitPlayerState_FL.h"
#include "Kismet/GameplayStatics.h"



ACPP_GameMode_FL::ACPP_GameMode_FL()
{
	// Set default pawn class to our character
	DefaultPawnClass = ACPP_Character_FL::StaticClass();
	
	GameStateClass = ACPP_SplitGameState_FL::StaticClass();
	PlayerStateClass = ACPP_SplitPlayerState_FL::StaticClass();
}

void ACPP_GameMode_FL::BeginPlay()
{
	Super::BeginPlay();
	UGameplayStatics::CreatePlayer(GetWorld(), -1, true);
}
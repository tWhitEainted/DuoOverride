// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Character_FL.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "GameFramework/PlayerController.h"
#include "CPP_CustomViewportClient_FL.h"


// Sets default values
ACPP_Character_FL::ACPP_Character_FL()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP_Character_FL::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_Character_FL::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPP_Character_FL::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void ACPP_Character_FL::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	
	if (APlayerController* PC = Cast<APlayerController>(NewController))
	{
		auto* LP = PC->GetLocalPlayer();
		if (auto* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LP))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}


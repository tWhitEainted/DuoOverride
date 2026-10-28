// Fill out your copyright notice in the Description page of Project Settings.



#include "CPP_SplitGameState_FL.h"

#include "CPP_CustomViewportClient_FL.h"
#include "Engine/World.h"

ACPP_SplitGameState_FL::ACPP_SplitGameState_FL()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ACPP_SplitGameState_FL::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (FMath::IsNearlyEqual(SplitRatio, TargetSplitRatio, 0.001f))
	{
		SplitRatio = TargetSplitRatio;
		return;
	}

	SplitRatio = FMath::FInterpTo(SplitRatio, TargetSplitRatio, DeltaSeconds, TransitionSpeed);
	ApplyRatio();
}

void ACPP_SplitGameState_FL::SetSplitRatio(float NewRatio)
{
	TargetSplitRatio = FMath::Clamp(NewRatio, 0.05f, 0.95f);
}

void ACPP_SplitGameState_FL::SnapSplitRatio(float NewRatio)
{
	SplitRatio = TargetSplitRatio = FMath::Clamp(NewRatio, 0.05f, 0.95f);
	ApplyRatio();
}

void ACPP_SplitGameState_FL::ApplyRatio()
{
	if (UWorld* CurrentWorld = GetWorld())
	{
		if (UCPP_CustomViewportClient_FL* ViewportClient = Cast<UCPP_CustomViewportClient_FL>(CurrentWorld->GetGameViewport()))
		{
			ViewportClient->SnapRatio(SplitRatio);
		}
	}
}

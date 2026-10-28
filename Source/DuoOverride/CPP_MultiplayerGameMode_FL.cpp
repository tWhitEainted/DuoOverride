#include "CPP_MultiplayerGameMode_FL.h"
#include "CPP_Character_FL.h"
//#include "CPP_SplitGameState_FL.h"
#include "CPP_SplitPlayerState_FL.h"
#include "Kismet/GameplayStatics.h"

ACPP_MultiplayerGameMode_FL::ACPP_MultiplayerGameMode_FL()
{
	// Set default pawn class to our character
	DefaultPawnClass = ACPP_Character_FL::StaticClass();

	//GameStateClass = ACPP_SplitGameState_FL::StaticClass();
	PlayerStateClass = ACPP_SplitPlayerState_FL::StaticClass();
}

void ACPP_MultiplayerGameMode_FL::BeginPlay()
{
	Super::BeginPlay();
	UGameplayStatics::CreatePlayer(GetWorld(), -1, true);
}

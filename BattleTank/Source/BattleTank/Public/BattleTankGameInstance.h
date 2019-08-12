#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "BattleTank.h"
#include "BattleTankUserWidgetBase.h"
#include "BattleTankMainMenu.h"
#include "UObject/ConstructorHelpers.h"

#include "BattleTankGameInstance.generated.h"

UCLASS( BlueprintType, Blueprintable )

class BATTLETANK_API UBattleTankGameInstance : public UGameInstance
{
	GENERATED_BODY()

private:

	TSubclassOf<class UBattleTankMainMenu> MainMenuClass;

public: 
	UBattleTankGameInstance(const FObjectInitializer& ObjectInitializer);
	~UBattleTankGameInstance();

	virtual void Init() override;
};
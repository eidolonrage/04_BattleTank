#pragma once

#include "BattleTankUserWidgetBase.h"

#include "BattleTankMainMenu.generated.h"

/**
*
*/
UCLASS()

class BATTLETANK_API UBattleTankMainMenu : public UBattleTankUserWidgetBase
{
	GENERATED_BODY()

private:

public:

	void Setup();

	UPROPERTY(meta = (BindWidget))
		class UButton* StartButton;


};



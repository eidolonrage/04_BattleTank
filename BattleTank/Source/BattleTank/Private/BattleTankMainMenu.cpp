#include "BattleTankMainMenu.h"

void UBattleTankMainMenu::Setup()
{
	
	this->AddToViewport();
	
	UWorld* World = GetWorld();
	
	APlayerController* PlayerController = World->GetFirstPlayerController();
	
	FInputModeGameAndUI InputModeData;
	InputModeData.SetWidgetToFocus(this->TakeWidget());
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);

	PlayerController->SetInputMode(InputModeData);

	PlayerController->bShowMouseCursor = true;
	
}
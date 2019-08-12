
#include "BattleTankGameInstance.h"
#include "Kismet/KismetSystemLibrary.h"

UBattleTankGameInstance::UBattleTankGameInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	static ConstructorHelpers::FClassFinder<UBattleTankMainMenu> MenuClassFinder(TEXT("/Game/UI/MainMenuUI"));
	MainMenuClass = MenuClassFinder.Class;

}

UBattleTankGameInstance::~UBattleTankGameInstance(){}

void UBattleTankGameInstance::Init()
{
	Super::Init();
	UBattleTankMainMenu* Menu = CreateWidget<UBattleTankMainMenu>(this, MainMenuClass);

	Menu->Setup();
}

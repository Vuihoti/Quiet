// 最终解释权，著作权归Vuihoti所有


#include "MainMenuOverlay.h"
#include "Components/TextBlock.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Quiet/QuietCharacter.h"
#include "Components/ProgressBar.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
void UMainMenuOverlay::ShowFPS(bool Show)
{
	if (Show) {
		FPS->SetVisibility(ESlateVisibility::Visible);
	}
	else {
		FPS->SetVisibility(ESlateVisibility::Hidden);
	}
}

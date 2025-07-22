// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemViewOverlay.h"
#include "Components/CanvasPanel.h"
#include "Components/TextBlock.h"
void UItemViewOverlay::SetIntroducePanelOpacity(int32 Opacity)
{
	IntroducePanel->SetRenderOpacity(Opacity);
}

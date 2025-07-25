// 最终解释权，著作权归Vuihoti所有


#include "GameSetOverlay.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/CheckBox.h"
#include "Components/ComboBoxString.h"
#include "Components/Button.h"
#include "Components/EditableText.h"
#include "Components/Slider.h"
#include "Quiet/HUD/MyHUD.h"
#include "Quiet/HUD/MainMenuOverlay.h"
#include "Quiet/HUD/LobbyMenuOverlay.h"
#include "Quiet/GamePostProcessVolume.h"
#include "Kismet/GamePlayStatics.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "GameFramework/GameUserSettings.h"
#include "Quiet/PlayerController/QuietPlayerController.h"
#include "Quiet/QuietGameInstance.h"
#include "Quiet/QuietCharacter.h"
#include "Quiet/Lobby/LobbyCharacter.h"
#include "Sound/SoundClass.h"
#include "Sound/SoundMix.h"
#include "Quiet/Library/QuietDLSSLibrary.h"
#include "Quiet/Library/QuietStreamlineLibraryDLSSG.h"
#include "Components/Slider.h"

void UGameSetOverlay::SetUIDefault()
{
	UKismetSystemLibrary::GetSupportedFullscreenResolutions(SupportRES);
	for (int i = 0; i < SupportRES.Num(); i++) {
		ResolutionList->AddOption(FString::FromInt(SupportRES[i].X) + "*" + FString::FromInt(SupportRES[i].Y));
	}
	WindowModeList->AddOption(TEXT("全屏"));
	WindowModeList->AddOption(TEXT("无边框"));
	WindowModeList->AddOption(TEXT("窗口化"));
	TArray<FString> MaxFpsArr = { "30","60","90","120","144","165","200",TEXT("无限制") };
	for (int i = 0; i < MaxFpsArr.Num(); i++) {
		MaxFPSList->AddOption(MaxFpsArr[i]);
	}
	TArray<FString> QualityArr = { TEXT("低"),TEXT("中"),TEXT("高"),TEXT("极高"),TEXT("影视级") };
	for (int i = 0; i < QualityArr.Num(); i++) {
		GlobalIlluminationList->AddOption(QualityArr[i]);
		AntiAliasingList->AddOption(QualityArr[i]);
		ViewDistanceList->AddOption(QualityArr[i]);
		PostProcessingList->AddOption(QualityArr[i]);
		ShadowList->AddOption(QualityArr[i]);
		ReflectionList->AddOption(QualityArr[i]);
		TextureList->AddOption(QualityArr[i]);
		ShadingList->AddOption(QualityArr[i]);
	}
	for (int i = 0; i < 3; i++) {
		RayTracingList->AddOption(QualityArr[i]);
	}
	TArray<FString> SizeArr = { "16","17", "18", "19", "20", "21", "22", "23", "24", "25" };
	for (int i = 0; i < SizeArr.Num(); i++) {
		CaptionSizeList->AddOption(SizeArr[i]);
	}

	TArray<FString> DLSSArr = { TEXT("极致性能"),TEXT("性能"),TEXT("均衡"),TEXT("质量"),TEXT("超质量"),TEXT("DLAA") };
	for (int i = 0; i < DLSSArr.Num(); i++) {
		DLSSModeList->AddOption(DLSSArr[i]);
	}
}

void UGameSetOverlay::SetSettingDefault()
{
	DefaultGameSet.ShowFPS = false;
	DefaultGameSet.VSync = true;
	DefaultGameSet.MaxFPS = "60";
	DefaultGameSet.Resolution = SupportRES.Last();
	DefaultGameSet.WindowMode = "FullScreen";
	DefaultGameSet.bDLSS = false;
	DefaultGameSet.DLSSQuality = 2;
	DefaultGameSet.bFrameGeneration = false;
	DefaultGameSet.bRayTracing = false;
	DefaultGameSet.RayTracingQuality = 1;
	DefaultGameSet.bMotionBlur = true;
	DefaultGameSet.ViewDistance = 2;
	DefaultGameSet.AntiAliasing = 2;
	DefaultGameSet.PostProcessing = 2;
	DefaultGameSet.GlobalIllumination = 2;
	DefaultGameSet.Reflection = 2;
	DefaultGameSet.Shading = 2;
	DefaultGameSet.Texture = 2;
	DefaultGameSet.Shadow = 2;
	DefaultGameSet.MouseSensitivity = 0.4f;
	DefaultGameSet.TotalVolume = 1.f;
	DefaultGameSet.BackgroundVolume = 1.f; 
	DefaultGameSet.SoundEffectVolume = 1.f;
	DefaultGameSet.VoiceVolume = 1.f;
	DefaultGameSet.bShowCaption = true;
	DefaultGameSet.bShowCaptionBackground = true;
	DefaultGameSet.CaptionSize = 16;
	ApplySettingInUI(DefaultGameSet);
	
}

void UGameSetOverlay::NativeConstruct()
{
	Super::NativeConstruct();
	FGPUDriverInfo info = FPlatformMisc::GetGPUDriverInfo(GPUinfo);
	bCanDLSS = info.IsNVIDIA();
	bCanFG = GPUinfo.Contains("NVIDIA Geforce RTX 40") || GPUinfo.Contains("NVIDIA Geforce RTX 50");
	SetUIDefault();
	QuietPlayerController == nullptr ? Cast<AQuietPlayerController>(UGameplayStatics::GetPlayerController(this, 0)) : QuietPlayerController;
	QuietGameInstance = QuietGameInstance == nullptr ? Cast<UQuietGameInstance>(UGameplayStatics::GetGameInstance(this)) : QuietGameInstance;
	Character = Character == nullptr ? Cast<ACharacter>(UGameplayStatics::GetPlayerCharacter(this, 0)) : Character;
	ResetSet->OnClicked.AddDynamic(this, &UGameSetOverlay::SetSettingDefault);
	Confirm->OnClicked.AddDynamic(this, &UGameSetOverlay::ApplySet);

	TotalVolumeLine->OnValueChanged.AddDynamic(this, &UGameSetOverlay::OnTotalVolumeChanged);
	SoundEffectVolumeLine->OnValueChanged.AddDynamic(this, &UGameSetOverlay::OnSoundEffectVolumeChanged);
	BackgroundVolumeLine->OnValueChanged.AddDynamic(this, &UGameSetOverlay::OnBackgroundVolumeChanged);
	VoiceVolumeLine->OnValueChanged.AddDynamic(this, &UGameSetOverlay::OnVoiceVolumeChanged);
	if (QuietGameInstance->PlayerSet.FirstTime) {
		ApplySettingInUI(DefaultGameSet);
	}
	else {
		ApplySettingInUI(QuietGameInstance->PlayerSet);
	}
	if (LobbyMenuOverlayclass) {
		LobbyMenuOverlay = CreateWidget<ULobbyMenuOverlay>(this, LobbyMenuOverlayclass);
		LobbyMenuOverlay->RemoveFromParent();
	}
}

void UGameSetOverlay::ShowFPSChange(bool IsCheck)
{
	if (QuietPlayerController&& QuietPlayerController->QuietHUD) {
		QuietPlayerController->QuietHUD->MainMenuOverlay->ShowFPS(IsCheck);
	}
}

void UGameSetOverlay::ApplySet()
{
	GameSetting = UGameUserSettings::GetGameUserSettings();
	QuietGameInstance->PlayerSet.ShowFPS = bShowFPS->GetCheckedState() == ECheckBoxState::Checked;
	QuietGameInstance->PlayerSet.VSync = bVSync->GetCheckedState() == ECheckBoxState::Checked;

	OnTotalVolumeChanged(TotalVolumeLine->GetValue());
	OnBackgroundVolumeChanged(BackgroundVolumeLine->GetValue());
	OnSoundEffectVolumeChanged(SoundEffectVolumeLine->GetValue());
	OnVoiceVolumeChanged(VoiceVolumeLine->GetValue());

	if (MaxFPSList->GetSelectedIndex() == 7) {
		QuietGameInstance->PlayerSet.MaxFPS = "NoLimit";
	}
	else {
		QuietGameInstance->PlayerSet.MaxFPS = MaxFPSList->GetSelectedOption();
	}
	switch (WindowModeList->GetSelectedIndex())
	{
	case 0:
		QuietGameInstance->PlayerSet.WindowMode = "FullScreen";
		break;
	case 1:
		QuietGameInstance->PlayerSet.WindowMode = "WindowedFullscreen";
		break;
	case 2:
		QuietGameInstance->PlayerSet.WindowMode = "Windowed";
		break;
	}
	QuietGameInstance->PlayerSet.bDLSS = bOpenDLSS->GetCheckedState() == ECheckBoxState::Checked;

	QuietGameInstance->PlayerSet.DLSSQuality = DLSSModeList->GetSelectedIndex();

	QuietGameInstance->PlayerSet.bFrameGeneration = bFrameGeneration->GetCheckedState() == ECheckBoxState::Checked;

	QuietGameInstance->PlayerSet.bRayTracing = bRayTracing->GetCheckedState() == ECheckBoxState::Checked;

	QuietGameInstance->PlayerSet.RayTracingQuality = RayTracingList->GetSelectedIndex();

	QuietGameInstance->PlayerSet.bMotionBlur = bMotionBlur->GetCheckedState() == ECheckBoxState::Checked;
	if (ResolutionList->GetSelectedIndex() == NULL) {
		QuietGameInstance->PlayerSet.Resolution = SupportRES.Last();
	}
	else {
		QuietGameInstance->PlayerSet.Resolution = SupportRES[ResolutionList->GetSelectedIndex()];
	}

	QuietGameInstance->PlayerSet.GlobalIllumination = GlobalIlluminationList->GetSelectedIndex();

	QuietGameInstance->PlayerSet.AntiAliasing = AntiAliasingList->GetSelectedIndex();

	QuietGameInstance->PlayerSet.ViewDistance = ViewDistanceList->GetSelectedIndex();

	QuietGameInstance->PlayerSet.PostProcessing = PostProcessingList->GetSelectedIndex();

	QuietGameInstance->PlayerSet.Reflection = ReflectionList->GetSelectedIndex();

	QuietGameInstance->PlayerSet.Shadow = ShadowList->GetSelectedIndex();

	QuietGameInstance->PlayerSet.Shading = ShadingList->GetSelectedIndex();

	QuietGameInstance->PlayerSet.Texture = TextureList->GetSelectedIndex();

	QuietGameInstance->PlayerSet.MouseSensitivity = FCString::Atof(*MouseSensitivityBox->Text.ToString());

	QuietGameInstance->PlayerSet.TotalVolume = TotalVolumeLine->GetValue();

	QuietGameInstance->PlayerSet.BackgroundVolume = BackgroundVolumeLine->GetValue();

	QuietGameInstance->PlayerSet.SoundEffectVolume = SoundEffectVolumeLine->GetValue();

	QuietGameInstance->PlayerSet.VoiceVolume = VoiceVolumeLine->GetValue();

	//确定显示字幕
	QuietGameInstance->PlayerSet.bShowCaption = bShowCaption->GetCheckedState() == ECheckBoxState::Checked;
	//确定显示字幕背景
	QuietGameInstance->PlayerSet.bShowCaptionBackground = bShowCaptionBackground->GetCheckedState() == ECheckBoxState::Checked;
	//确定字幕大小
	QuietGameInstance->PlayerSet.CaptionSize = FCString::Atoi(*CaptionSizeList->GetSelectedOption());
	//确定游戏分辨率
	GameSetting->SetScreenResolution(QuietGameInstance->PlayerSet.Resolution);
	//确定显示帧数
	ShowFPSChange(QuietGameInstance->PlayerSet.ShowFPS);
	//确定窗口模式
	if (QuietGameInstance->PlayerSet.WindowMode == "FullScreen") {
		GameSetting->SetFullscreenMode(EWindowMode::Fullscreen);
	}
	else if (QuietGameInstance->PlayerSet.WindowMode == "WindowedFullscreen") {
		GameSetting->SetFullscreenMode(EWindowMode::WindowedFullscreen);
	}
	else {
		GameSetting->SetFullscreenMode(EWindowMode::Windowed);
	}
	//确定帧数限制
	if (QuietGameInstance->PlayerSet.MaxFPS == "NoLimit") {
		GameSetting->SetFrameRateLimit(1000.f);
		
	}
	else {
		GameSetting->SetFrameRateLimit(FCString::Atof(*QuietGameInstance->PlayerSet.MaxFPS));
	}
	FVector2D ScreenResolution = { 0,0 };
	bool bIsSupported;
	float OptimalScreenPercentage;
	bool bIsFixedScreenPercentage;
	float MinScreenPercentage;
	float MaxScreenPercentage;
	float OptimalSharpness;
	//确定垂直同步
	GameSetting->SetVSyncEnabled(QuietGameInstance->PlayerSet.VSync);
	//确定启用DLSS
	if (QuietGameInstance->PlayerSet.bDLSS && bCanDLSS) {
		UQuietDLSSLibrary::EnableDLSS(QuietGameInstance->PlayerSet.bDLSS);
		//确定DLSS模式
		switch (DLSSModeList->GetSelectedIndex())
		{
		case 0:
			UQuietDLSSLibrary::GetDLSSModeInformation(UDLSSMode::UltraPerformance, ScreenResolution, bIsSupported, OptimalScreenPercentage, bIsFixedScreenPercentage, MinScreenPercentage, MaxScreenPercentage, OptimalSharpness);
			UKismetSystemLibrary::ExecuteConsoleCommand(this, "r.ScreenPercentage " + FString::SanitizeFloat(OptimalScreenPercentage));
			break;
		case 1:
			UQuietDLSSLibrary::GetDLSSModeInformation(UDLSSMode::Performance, ScreenResolution, bIsSupported, OptimalScreenPercentage, bIsFixedScreenPercentage, MinScreenPercentage, MaxScreenPercentage, OptimalSharpness);
			UKismetSystemLibrary::ExecuteConsoleCommand(this, "r.ScreenPercentage " + FString::SanitizeFloat(OptimalScreenPercentage));
			break;
		case 2:
			UQuietDLSSLibrary::GetDLSSModeInformation(UDLSSMode::Balanced, ScreenResolution, bIsSupported, OptimalScreenPercentage, bIsFixedScreenPercentage, MinScreenPercentage, MaxScreenPercentage, OptimalSharpness);
			UKismetSystemLibrary::ExecuteConsoleCommand(this, "r.ScreenPercentage " + FString::SanitizeFloat(OptimalScreenPercentage));
			break;
		case 3:
			UQuietDLSSLibrary::GetDLSSModeInformation(UDLSSMode::Quality, ScreenResolution, bIsSupported, OptimalScreenPercentage, bIsFixedScreenPercentage, MinScreenPercentage, MaxScreenPercentage, OptimalSharpness);
			UKismetSystemLibrary::ExecuteConsoleCommand(this, "r.ScreenPercentage " + FString::SanitizeFloat(OptimalScreenPercentage));
			break;
		case 4:
			UQuietDLSSLibrary::GetDLSSModeInformation(UDLSSMode::UltraQuality, ScreenResolution, bIsSupported, OptimalScreenPercentage, bIsFixedScreenPercentage, MinScreenPercentage, MaxScreenPercentage, OptimalSharpness);
			UKismetSystemLibrary::ExecuteConsoleCommand(this, "r.ScreenPercentage " + FString::SanitizeFloat(OptimalScreenPercentage));
			break;
		case 5:
			UQuietDLSSLibrary::GetDLSSModeInformation(UDLSSMode::DLAA, ScreenResolution, bIsSupported, OptimalScreenPercentage, bIsFixedScreenPercentage, MinScreenPercentage, MaxScreenPercentage, OptimalSharpness);
			UKismetSystemLibrary::ExecuteConsoleCommand(this, "r.ScreenPercentage " + FString::SanitizeFloat(OptimalScreenPercentage));
			break;
		default:
			break;
		}
		//确定启用帧生成
		if (QuietGameInstance->PlayerSet.bFrameGeneration&& bCanFG)
		{
			UQuietStreamlineLibraryDLSSG::SetDLSSGMode(UStreamlineDLSSGMode::On);
		}
		else {
			UQuietStreamlineLibraryDLSSG::SetDLSSGMode(UStreamlineDLSSGMode::Off);
		}
	}
	else {
		UQuietDLSSLibrary::EnableDLSS(QuietGameInstance->PlayerSet.bDLSS);
		UQuietDLSSLibrary::GetDLSSModeInformation(UDLSSMode::Off, ScreenResolution, bIsSupported, OptimalScreenPercentage, bIsFixedScreenPercentage, MinScreenPercentage, MaxScreenPercentage, OptimalSharpness);
		UKismetSystemLibrary::ExecuteConsoleCommand(this, "r.ScreenPercentage " + FString::SanitizeFloat(OptimalScreenPercentage));
	}
	//确定启用光线追踪
	if (QuietGameInstance->PlayerSet.bRayTracing) {
		UKismetSystemLibrary::ExecuteConsoleCommand(this, "r.RayTracing.ForceAllRayTracingEffects 1");
		UKismetSystemLibrary::ExecuteConsoleCommand(this, "r.Lumen.HardwareRayTracing 1");
	}
	else {
		UKismetSystemLibrary::ExecuteConsoleCommand(this, "r.RayTracing.ForceAllRayTracingEffects 0");
		UKismetSystemLibrary::ExecuteConsoleCommand(this, "r.Lumen.HardwareRayTracing 0");
	}
	//确定光线追踪品质
	if (QuietGameInstance->PlayerSet.bRayTracing) {
		if (GamePostProcessVolume) {
			GamePostProcessVolume->SetRayTracingOP(QuietGameInstance->PlayerSet.RayTracingQuality);
		}
	}
	//确定动态模糊
	if (GamePostProcessVolume) {
		GamePostProcessVolume->MotionBlur(QuietGameInstance->PlayerSet.bMotionBlur);
	}
	//确定全局光照品质
	GameSetting->SetGlobalIlluminationQuality(QuietGameInstance->PlayerSet.GlobalIllumination);
	//确定抗锯齿
	GameSetting->SetAntiAliasingQuality(QuietGameInstance->PlayerSet.AntiAliasing);
	//确定视野距离
	GameSetting->SetViewDistanceQuality(QuietGameInstance->PlayerSet.ViewDistance);
	//确定后期处理
	GameSetting->SetPostProcessingQuality(QuietGameInstance->PlayerSet.PostProcessing);
	//确定阴影
	GameSetting->SetShadowQuality(QuietGameInstance->PlayerSet.Shadow);
	//确定着色
	GameSetting->SetShadingQuality(QuietGameInstance->PlayerSet.Shading);
	//确定反射
	GameSetting->SetReflectionQuality(QuietGameInstance->PlayerSet.Reflection);
	//确定纹理
	GameSetting->SetTextureQuality(QuietGameInstance->PlayerSet.Texture);
	//确定灵敏度
	if (Character != nullptr) {
		if (Character == Cast<ALobbyCharacter>(Character)) {
			LobbyCharacter = Cast<ALobbyCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
			LobbyCharacter->MouseSensitivity = QuietGameInstance->PlayerSet.MouseSensitivity;
		}
		else if (Character == Cast<AQuietCharacter>(Character)) {
			QuietCharacter = Cast<AQuietCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
			QuietCharacter->MouseSensitivity = QuietGameInstance->PlayerSet.MouseSensitivity;
		}
	}
	//确定音量
	if (SoundMix) {
		//确定总音量
		if (TotalVolumeClass) {
			UGameplayStatics::SetSoundMixClassOverride(this, SoundMix, TotalVolumeClass, QuietGameInstance->PlayerSet.TotalVolume);
		}
		if (BackgroundVolumeClass) {
			UGameplayStatics::SetSoundMixClassOverride(this, SoundMix, BackgroundVolumeClass, QuietGameInstance->PlayerSet.BackgroundVolume);
		}
		if (SoundEffectVolumeClass) {
			UGameplayStatics::SetSoundMixClassOverride(this, SoundMix, SoundEffectVolumeClass, QuietGameInstance->PlayerSet.SoundEffectVolume);
		}
		if (VoiceVolumeClass) {
			UGameplayStatics::SetSoundMixClassOverride(this, SoundMix, VoiceVolumeClass, QuietGameInstance->PlayerSet.VoiceVolume);
		}
	}
	QuietGameInstance->PlayerSet.FirstTime = false;
	GameSetting->ApplySettings(true);
	GameSetting->ApplyResolutionSettings(true);
	GameSetting->SaveSettings();
	QuietGameInstance->SaveLocalGameSetting();
}

void UGameSetOverlay::ApplySettingInUI(FGameSets Setting)
{
	if (Setting.ShowFPS) {
		bShowFPS->SetCheckedState(ECheckBoxState::Checked);
	}
	else {
		bShowFPS->SetCheckedState(ECheckBoxState::Unchecked);
	}
	if (Setting.VSync) {
		bVSync->SetCheckedState(ECheckBoxState::Checked);
	}
	else {
		bVSync->SetCheckedState(ECheckBoxState::Unchecked);
	}
	if (ResolutionList->FindOptionIndex(FString::FromInt(Setting.Resolution.X) + "*" + FString::FromInt(Setting.Resolution.Y)) == -1) {
		ResolutionList->SetSelectedIndex(ResolutionList->GetOptionCount() - 1);
	}
	else {
		ResolutionList->SetSelectedOption(FString::FromInt(Setting.Resolution.X) + "*" + FString::FromInt(Setting.Resolution.Y));
	}
	
	if (Setting.WindowMode == "FullScreen") {
		WindowModeList->SetSelectedOption(TEXT("全屏"));
	}
	else if (Setting.WindowMode == "WindowedFullscreen") {
		WindowModeList->SetSelectedOption(TEXT("无边框"));
	}
	else {
		WindowModeList->SetSelectedOption(TEXT("窗口化"));
	}
	if (Setting.MaxFPS == "NoLimit") {
		MaxFPSList->SetSelectedOption(TEXT("无限制"));
	}
	else {
		MaxFPSList->SetSelectedOption(Setting.MaxFPS);
	}
	if (Setting.bDLSS) {
		bOpenDLSS->SetCheckedState(ECheckBoxState::Checked);
	}
	else {
		bOpenDLSS->SetCheckedState(ECheckBoxState::Unchecked);
	}

	DLSSModeList->SetSelectedIndex(Setting.DLSSQuality);

	if (Setting.bFrameGeneration) {
		bFrameGeneration->SetCheckedState(ECheckBoxState::Checked);
	}
	else {
		bFrameGeneration->SetCheckedState(ECheckBoxState::Unchecked);
	}

	if (Setting.bRayTracing) {
		bRayTracing->SetCheckedState(ECheckBoxState::Checked);
	}
	else {
		bRayTracing->SetCheckedState(ECheckBoxState::Unchecked);
	}
	
	RayTracingList->SetSelectedIndex(Setting.RayTracingQuality);

	if (Setting.bMotionBlur) {
		bMotionBlur->SetCheckedState(ECheckBoxState::Checked);
	}
	else {
		bMotionBlur->SetCheckedState(ECheckBoxState::Unchecked);
	}

	GlobalIlluminationList->SetSelectedIndex(Setting.GlobalIllumination);

	AntiAliasingList->SetSelectedIndex(Setting.AntiAliasing);

	ViewDistanceList->SetSelectedIndex(Setting.ViewDistance);

	PostProcessingList->SetSelectedIndex(Setting.PostProcessing);

	ShadowList->SetSelectedIndex(Setting.Shadow);

	ReflectionList->SetSelectedIndex(Setting.Reflection);

	TextureList->SetSelectedIndex(Setting.Texture);

	ShadingList->SetSelectedIndex(Setting.Shading);

	MouseSensitivityBox->SetText(FText::FromString(FString::SanitizeFloat(Setting.MouseSensitivity)));

	TotalVolumeLine->SetValue(Setting.TotalVolume);

	BackgroundVolumeLine->SetValue(Setting.BackgroundVolume);

	SoundEffectVolumeLine->SetValue(Setting.SoundEffectVolume);

	VoiceVolumeLine->SetValue(Setting.VoiceVolume);

	if (Setting.bShowCaption) {
		bShowCaption->SetCheckedState(ECheckBoxState::Checked);
	}
	else {
		bShowCaption->SetCheckedState(ECheckBoxState::Unchecked);
	}
	if (Setting.bShowCaptionBackground) {
		bShowCaptionBackground->SetCheckedState(ECheckBoxState::Checked);
	}
	else {
		bShowCaptionBackground->SetCheckedState(ECheckBoxState::Unchecked);
	}
	CaptionSizeList->SetSelectedOption(FString::FromInt(Setting.CaptionSize));
}

void UGameSetOverlay::OnTotalVolumeChanged(float Value)
{
	
	UAkGameplayStatics::SetRTPCValue(TotalRTPC, Value * 100.f * TotalVolumeLine->GetValue(), 0, NULL);
	
}

void UGameSetOverlay::OnBackgroundVolumeChanged(float Value)
{
	
	UAkGameplayStatics::SetRTPCValue(BackgroundRTPC, Value * 100.f * TotalVolumeLine->GetValue(), 0, NULL);
}

void UGameSetOverlay::OnSoundEffectVolumeChanged(float Value)
{
	UAkGameplayStatics::SetRTPCValue(SoundEffectRTPC, Value * 100.f * TotalVolumeLine->GetValue(), 0, NULL);
}

void UGameSetOverlay::OnVoiceVolumeChanged(float Value)
{

	UAkGameplayStatics::SetRTPCValue(VoiceRTPC, Value * 100.f * TotalVolumeLine->GetValue(), 0, NULL);
}

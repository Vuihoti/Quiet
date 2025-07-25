// 最终解释权，著作权归Vuihoti所有

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Quiet/Structs/Structs.h"
#include "GenericPlatform/GenericPlatformDriver.h"
#include "AkAudio/Classes/AkGameplayStatics.h"
#include "AkAudio/Classes/AkRtpc.h"
#include "GameSetOverlay.generated.h"

/**
 * 
 */
UCLASS()
class QUIET_API UGameSetOverlay : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;
	UPROPERTY(BlueprintReadWrite)
	TArray<FIntPoint> SupportRES;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UCheckBox* bShowFPS;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UCheckBox* bVSync;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* Confirm;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* ResetSet;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UCheckBox* bOpenDLSS;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UComboBoxString* DLSSModeList;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UCheckBox* bFrameGeneration;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UCheckBox* bRayTracing;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UComboBoxString* RayTracingList;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UCheckBox* bMotionBlur;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UComboBoxString* ResolutionList;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UComboBoxString* WindowModeList;
	
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UComboBoxString* MaxFPSList;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UComboBoxString* GlobalIlluminationList;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UComboBoxString* ViewDistanceList;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UComboBoxString* PostProcessingList;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UComboBoxString* ShadowList;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UComboBoxString* ReflectionList;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UComboBoxString* TextureList;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UComboBoxString* ShadingList;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UComboBoxString* AntiAliasingList;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FGameSets DefaultGameSet;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UGameUserSettings* GameSetting;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UEditableText* MouseSensitivityBox;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class USlider* TotalVolumeLine;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class USlider* BackgroundVolumeLine;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class USlider* SoundEffectVolumeLine;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class USlider* VoiceVolumeLine;


	UFUNCTION(BlueprintCallable)
	void SetUIDefault();

	UFUNCTION(BlueprintCallable)
	void SetSettingDefault();

	UFUNCTION(BlueprintCallable)
	void ShowFPSChange(bool IsCheck);

	UFUNCTION(BlueprintCallable)
	void ApplySet();

	UFUNCTION(BlueprintCallable)
	void ApplySettingInUI(FGameSets Setting);

	UPROPERTY(BlueprintReadWrite)
	class AQuietPlayerController* QuietPlayerController;

	UPROPERTY()
	class UQuietGameInstance* QuietGameInstance;

	UPROPERTY(BlueprintReadWrite)
	class AQuietCharacter* QuietCharacter;

	UPROPERTY(BlueprintReadWrite)
	class ALobbyCharacter* LobbyCharacter;

	UPROPERTY(BlueprintReadWrite)
	class ACharacter* Character;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> LobbyMenuOverlayclass;
	UPROPERTY(BlueprintReadWrite)
	class ULobbyMenuOverlay* LobbyMenuOverlay;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundMix* SoundMix;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundClass* TotalVolumeClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundClass* BackgroundVolumeClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundClass* SoundEffectVolumeClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundClass* VoiceVolumeClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCheckBox* bShowCaption;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCheckBox* bShowCaptionBackground;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UComboBoxString* CaptionSizeList;

	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class AGamePostProcessVolume* GamePostProcessVolume;

	UPROPERTY(BlueprintReadOnly)
	bool bCanFG = false;

	UPROPERTY(BlueprintReadOnly)
	bool bCanDLSS = false;

	UPROPERTY(BlueprintReadOnly)
	FString CPUinfo = FPlatformMisc::GetCPUBrand();

	UPROPERTY(BlueprintReadOnly)
	FString GPUinfo = FWindowsPlatformMisc::GetPrimaryGPUBrand();

	// 声明RTPC设置函数
	UFUNCTION()
	void OnTotalVolumeChanged(float Value);

	UFUNCTION()
	void OnBackgroundVolumeChanged(float Value);

	UFUNCTION()
	void OnSoundEffectVolumeChanged(float Value);

	UFUNCTION()
	void OnVoiceVolumeChanged(float Value);
	UPROPERTY(EditDefaultsOnly)
	UAkRtpc* TotalRTPC;
	UPROPERTY(EditDefaultsOnly)
	UAkRtpc* BackgroundRTPC;
	UPROPERTY(EditDefaultsOnly)
	UAkRtpc* SoundEffectRTPC;
	UPROPERTY(EditDefaultsOnly)
	UAkRtpc* VoiceRTPC;
};

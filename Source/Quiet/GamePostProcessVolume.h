// 最终解释权，著作权归Vuihoti所有

#pragma once

#include "CoreMinimal.h"
#include "Engine/PostProcessVolume.h"
#include "GamePostProcessVolume.generated.h"

/**
 * 
 */
UCLASS()
class QUIET_API AGamePostProcessVolume : public APostProcessVolume
{
	GENERATED_BODY()
	
public:
	AGamePostProcessVolume() {
		Settings.AutoExposureMaxBrightness = 1.f;
		Settings.AutoExposureMinBrightness = 1.f;
		Settings.BloomIntensity = 1.f;
		bUnbound = true;
		Settings.MotionBlurAmount = 1;
		Settings.MotionBlurMax = 50;
	}
	void MotionBlur(bool On) {
		if (On) {
			Settings.MotionBlurAmount = 1;
			Settings.MotionBlurMax = 50;
		}
		else {
			Settings.MotionBlurAmount = 0;
			Settings.MotionBlurMax = 0;
		}
	}
	void SetRayTracingOP(int32 Level) {
		Settings.PathTracingEnableEmissiveMaterials = true;
		Settings.PathTracingEnableReferenceDOF = true;
		Settings.PathTracingEnableDenoiser = true;
		Settings.PathTracingEnableReferenceAtmosphere = true;
		switch (Level)
		{
		case 0:
			Settings.PathTracingMaxBounces = 8;
			Settings.PathTracingSamplesPerPixel = 512;
			Settings.PathTracingMaxPathExposure = 10;

			Settings.LumenSceneLightingQuality = 1.f;
			Settings.LumenSceneDetail = 2.f;
			Settings.LumenSceneViewDistance = 20000.f;
			Settings.LumenFinalGatherQuality = 1.f;
			Settings.LumenMaxTraceDistance = 20000.f;
			Settings.LumenSceneLightingUpdateSpeed = 2.f;
			Settings.LumenFinalGatherLightingUpdateSpeed = 2;
			Settings.LumenReflectionQuality = 1.f;
			Settings.LumenMaxReflectionBounces = 2;
			Settings.LumenMaxRefractionBounces = 16;

			Settings.BloomMethod = EBloomMethod::BM_SOG;
			break;
		case 1:
			Settings.PathTracingMaxBounces = 16;
			Settings.PathTracingSamplesPerPixel = 1024;
			Settings.PathTracingMaxPathExposure = 20;

			Settings.LumenSceneLightingQuality = 1.5f;
			Settings.LumenSceneDetail = 3.f;
			Settings.LumenSceneViewDistance = 80000.f;
			Settings.LumenFinalGatherQuality = 1.5f;
			Settings.LumenMaxTraceDistance = 80000.f;
			Settings.LumenSceneLightingUpdateSpeed = 3.f;
			Settings.LumenFinalGatherLightingUpdateSpeed = 3.f;
			Settings.LumenReflectionQuality = 1.5f;
			Settings.LumenMaxReflectionBounces = 4.f;
			Settings.LumenMaxRefractionBounces = 16.f;

			Settings.BloomMethod = EBloomMethod::BM_SOG;
			break;
		case 2:
			Settings.PathTracingMaxBounces = 32;
			Settings.PathTracingSamplesPerPixel = 2048;
			Settings.PathTracingMaxPathExposure = 30;

			Settings.LumenSceneLightingQuality = 2.f;
			Settings.LumenSceneDetail = 4.f;
			Settings.LumenSceneViewDistance = 160000.f;
			Settings.LumenFinalGatherQuality = 2.f;
			Settings.LumenMaxTraceDistance = 160000.f;
			Settings.LumenSceneLightingUpdateSpeed = 4.f;
			Settings.LumenFinalGatherLightingUpdateSpeed = 4.f;
			Settings.LumenReflectionQuality = 2.f;
			Settings.LumenMaxReflectionBounces = 8.f;
			Settings.LumenMaxRefractionBounces = 32.f;
			Settings.BloomMethod = EBloomMethod::BM_FFT;
			break;
		default:
			break;
		}
	}
	UFUNCTION(BlueprintCallable)
	void SetSaturation(float Value) {
		Settings.bOverride_ColorSaturation = true;
		Settings.ColorSaturation = FVector4(Value, Value, Value, 1);
	}
};

/*******************************************************************************
The content of this file includes portions of the proprietary AUDIOKINETIC Wwise
Technology released in source code form as part of the game integration package.
The content of this file may not be used without valid licenses to the
AUDIOKINETIC Wwise Technology.
Note that the use of the game engine is subject to the Unreal(R) Engine End User
License Agreement at https://www.unrealengine.com/en-US/eula/unreal
 
License Usage
 
Licensees holding valid licenses to the AUDIOKINETIC Wwise Technology may use
this file in accordance with the end user license agreement provided with the
software or, alternatively, in accordance with the terms contained
in a written agreement between you and Audiokinetic Inc.
Copyright (c) 2025 Audiokinetic Inc.
*******************************************************************************/

#pragma once

#include "AkAudioType.h"
#include "Wwise/CookedData/WwiseGameParameterCookedData.h"
#if WITH_EDITORONLY_DATA
#include "Wwise/Info/WwiseObjectInfo.h"
#endif
#include "AkRtpc.generated.h"

UCLASS(BlueprintType)
class AKAUDIO_API UAkRtpc : public UAkAudioType
{
	GENERATED_BODY()

public:
	
	UPROPERTY(Transient, VisibleAnywhere, Category = "AkRtpc")
	FWwiseGameParameterCookedData GameParameterCookedData;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = "AkRtpc")
	FWwiseObjectInfo RtpcInfo;
#endif

public :
	void Serialize(FArchive& Ar) override;
	virtual AkUInt32 GetShortID() const override {return GameParameterCookedData.ShortId;}

#if WITH_EDITORONLY_DATA
	virtual void LoadData() override { GetGameParameterCookedData(); }
	void GetGameParameterCookedData();
	virtual void FillInfo() override;
	virtual FWwiseObjectInfo* GetInfoMutable() override {return &RtpcInfo;}
	virtual FWwiseObjectInfo GetInfo() const override {return RtpcInfo;}
	virtual bool ObjectIsInSoundBanks() override;
#endif

#if WITH_EDITORONLY_DATA && UE_5_5_OR_LATER
public:
#if UE_5_6_OR_LATER
	virtual void OnCookEvent(UE::Cook::ECookEvent CookEvent, UE::Cook::FCookEventContext& Context) override;
#else
	virtual void PreSave(FObjectPreSaveContext Context) override;
#endif
#endif
};

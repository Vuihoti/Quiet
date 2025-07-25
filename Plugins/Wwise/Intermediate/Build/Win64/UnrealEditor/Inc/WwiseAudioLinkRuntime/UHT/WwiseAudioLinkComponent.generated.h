// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/AudioLink/WwiseAudioLinkComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WWISEAUDIOLINKRUNTIME_WwiseAudioLinkComponent_generated_h
#error "WwiseAudioLinkComponent.generated.h already included, missing '#pragma once' in WwiseAudioLinkComponent.h"
#endif
#define WWISEAUDIOLINKRUNTIME_WwiseAudioLinkComponent_generated_h

#define FID_Quiet_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWwiseAudioLinkComponent(); \
	friend struct Z_Construct_UClass_UWwiseAudioLinkComponent_Statics; \
public: \
	DECLARE_CLASS(UWwiseAudioLinkComponent, UAkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WwiseAudioLinkRuntime"), NO_API) \
	DECLARE_SERIALIZER(UWwiseAudioLinkComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UWwiseAudioLinkComponent*>(this); }


#define FID_Quiet_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWwiseAudioLinkComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWwiseAudioLinkComponent(UWwiseAudioLinkComponent&&); \
	UWwiseAudioLinkComponent(const UWwiseAudioLinkComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWwiseAudioLinkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWwiseAudioLinkComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWwiseAudioLinkComponent) \
	NO_API virtual ~UWwiseAudioLinkComponent();


#define FID_Quiet_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h_29_PROLOG
#define FID_Quiet_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h_32_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WWISEAUDIOLINKRUNTIME_API UClass* StaticClass<class UWwiseAudioLinkComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

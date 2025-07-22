// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAudioEvent;
class UAkComponent;
class UAkSwitchValue;
class UAkTrigger;
struct FLatentActionInfo;
#ifdef AKAUDIO_AkComponent_generated_h
#error "AkComponent.generated.h already included, missing '#pragma once' in AkComponent.h"
#endif
#define AKAUDIO_AkComponent_generated_h

#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAttenuationRadius); \
	DECLARE_FUNCTION(execSetOutputBusVolume); \
	DECLARE_FUNCTION(execSetEarlyReflectionsVolume); \
	DECLARE_FUNCTION(execSetEarlyReflectionsAuxBus); \
	DECLARE_FUNCTION(execSetListeners); \
	DECLARE_FUNCTION(execSetStopWhenOwnerDestroyed); \
	DECLARE_FUNCTION(execSetSwitch); \
	DECLARE_FUNCTION(execPostTrigger); \
	DECLARE_FUNCTION(execPostAkEventAndWaitForEnd); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAndWaitForEnd); \
	DECLARE_FUNCTION(execSetEnableSpotReflectors); \
	DECLARE_FUNCTION(execSetGameObjectRadius); \
	DECLARE_FUNCTION(execGetOcclusionCollisionChannel);


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkComponent(); \
	friend struct Z_Construct_UClass_UAkComponent_Statics; \
public: \
	DECLARE_CLASS(UAkComponent, UAkGameObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkComponent)


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_76_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAkComponent(UAkComponent&&); \
	UAkComponent(const UAkComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkComponent) \
	NO_API virtual ~UAkComponent();


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_PROLOG
#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_76_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h


#define FOREACH_ENUM_EREFLECTIONFILTERBITS(op) \
	op(EReflectionFilterBits::Wall) \
	op(EReflectionFilterBits::Ceiling) \
	op(EReflectionFilterBits::Floor) 

enum class EReflectionFilterBits;
template<> struct TIsUEnumClass<EReflectionFilterBits> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EReflectionFilterBits>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

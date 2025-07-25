// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintNodes/PostEventAtLocationAsync.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAudioEvent;
class UObject;
class UPostEventAtLocationAsync;
#ifdef AKAUDIO_PostEventAtLocationAsync_generated_h
#error "PostEventAtLocationAsync.generated.h already included, missing '#pragma once' in PostEventAtLocationAsync.h"
#endif
#define AKAUDIO_PostEventAtLocationAsync_generated_h

#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_24_DELEGATE \
AKAUDIO_API void FPostEventAtLocationAsyncOutputPin_DelegateWrapper(const FMulticastScriptDelegate& PostEventAtLocationAsyncOutputPin, int32 PlayingID);


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPollPostEventFuture); \
	DECLARE_FUNCTION(execPostEventAtLocationAsync);


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPostEventAtLocationAsync(); \
	friend struct Z_Construct_UClass_UPostEventAtLocationAsync_Statics; \
public: \
	DECLARE_CLASS(UPostEventAtLocationAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UPostEventAtLocationAsync)


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPostEventAtLocationAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPostEventAtLocationAsync(UPostEventAtLocationAsync&&); \
	UPostEventAtLocationAsync(const UPostEventAtLocationAsync&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPostEventAtLocationAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPostEventAtLocationAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPostEventAtLocationAsync) \
	NO_API virtual ~UPostEventAtLocationAsync();


#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_26_PROLOG
#define FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_29_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UPostEventAtLocationAsync>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

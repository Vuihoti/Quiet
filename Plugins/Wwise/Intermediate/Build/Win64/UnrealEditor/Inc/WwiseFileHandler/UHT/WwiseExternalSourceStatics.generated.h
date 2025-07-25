// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/WwiseExternalSourceStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAkUniqueID;
#ifdef WWISEFILEHANDLER_WwiseExternalSourceStatics_generated_h
#error "WwiseExternalSourceStatics.generated.h already included, missing '#pragma once' in WwiseExternalSourceStatics.h"
#endif
#define WWISEFILEHANDLER_WwiseExternalSourceStatics_generated_h

#define FID_Quiet_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_WwiseExternalSourceStatics_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetExternalSourceMediaWithIds); \
	DECLARE_FUNCTION(execSetExternalSourceMediaByName); \
	DECLARE_FUNCTION(execSetExternalSourceMediaById);


#define FID_Quiet_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_WwiseExternalSourceStatics_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWwiseExternalSourceStatics(); \
	friend struct Z_Construct_UClass_UWwiseExternalSourceStatics_Statics; \
public: \
	DECLARE_CLASS(UWwiseExternalSourceStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WwiseFileHandler"), NO_API) \
	DECLARE_SERIALIZER(UWwiseExternalSourceStatics)


#define FID_Quiet_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_WwiseExternalSourceStatics_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWwiseExternalSourceStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWwiseExternalSourceStatics(UWwiseExternalSourceStatics&&); \
	UWwiseExternalSourceStatics(const UWwiseExternalSourceStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWwiseExternalSourceStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWwiseExternalSourceStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWwiseExternalSourceStatics) \
	NO_API virtual ~UWwiseExternalSourceStatics();


#define FID_Quiet_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_WwiseExternalSourceStatics_h_26_PROLOG
#define FID_Quiet_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_WwiseExternalSourceStatics_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_WwiseExternalSourceStatics_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_WwiseExternalSourceStatics_h_29_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_WwiseExternalSourceStatics_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WWISEFILEHANDLER_API UClass* StaticClass<class UWwiseExternalSourceStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_WwiseExternalSourceStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

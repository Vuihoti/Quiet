// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Library/QuietDLSSLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUIET_QuietDLSSLibrary_generated_h
#error "QuietDLSSLibrary.generated.h already included, missing '#pragma once' in QuietDLSSLibrary.h"
#endif
#define QUIET_QuietDLSSLibrary_generated_h

#define FID_Quiet_Source_Quiet_Library_QuietDLSSLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuietDLSSLibrary(); \
	friend struct Z_Construct_UClass_UQuietDLSSLibrary_Statics; \
public: \
	DECLARE_CLASS(UQuietDLSSLibrary, UDLSSLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(UQuietDLSSLibrary)


#define FID_Quiet_Source_Quiet_Library_QuietDLSSLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuietDLSSLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UQuietDLSSLibrary(UQuietDLSSLibrary&&); \
	UQuietDLSSLibrary(const UQuietDLSSLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuietDLSSLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuietDLSSLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuietDLSSLibrary) \
	NO_API virtual ~UQuietDLSSLibrary();


#define FID_Quiet_Source_Quiet_Library_QuietDLSSLibrary_h_12_PROLOG
#define FID_Quiet_Source_Quiet_Library_QuietDLSSLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_Library_QuietDLSSLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_Library_QuietDLSSLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class UQuietDLSSLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_Library_QuietDLSSLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

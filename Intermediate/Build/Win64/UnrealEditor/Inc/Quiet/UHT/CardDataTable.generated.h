// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataTable/CardDataTable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUIET_CardDataTable_generated_h
#error "CardDataTable.generated.h already included, missing '#pragma once' in CardDataTable.h"
#endif
#define QUIET_CardDataTable_generated_h

#define FID_Quiet_Source_Quiet_DataTable_CardDataTable_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCardDataTable(); \
	friend struct Z_Construct_UClass_UCardDataTable_Statics; \
public: \
	DECLARE_CLASS(UCardDataTable, UDataTable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Quiet"), NO_API) \
	DECLARE_SERIALIZER(UCardDataTable)


#define FID_Quiet_Source_Quiet_DataTable_CardDataTable_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCardDataTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCardDataTable(UCardDataTable&&); \
	UCardDataTable(const UCardDataTable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCardDataTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCardDataTable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCardDataTable) \
	NO_API virtual ~UCardDataTable();


#define FID_Quiet_Source_Quiet_DataTable_CardDataTable_h_13_PROLOG
#define FID_Quiet_Source_Quiet_DataTable_CardDataTable_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Quiet_Source_Quiet_DataTable_CardDataTable_h_16_INCLASS_NO_PURE_DECLS \
	FID_Quiet_Source_Quiet_DataTable_CardDataTable_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUIET_API UClass* StaticClass<class UCardDataTable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Quiet_Source_Quiet_DataTable_CardDataTable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

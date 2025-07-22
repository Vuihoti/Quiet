// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiet/DataTable/CardDataTable.h"
#include "Quiet/Structs/Structs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCardDataTable() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataTable();
QUIET_API UClass* Z_Construct_UClass_UCardDataTable();
QUIET_API UClass* Z_Construct_UClass_UCardDataTable_NoRegister();
QUIET_API UScriptStruct* Z_Construct_UScriptStruct_FCardData();
UPackage* Z_Construct_UPackage__Script_Quiet();
// End Cross Module References

// Begin Class UCardDataTable
void UCardDataTable::StaticRegisterNativesUCardDataTable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCardDataTable);
UClass* Z_Construct_UClass_UCardDataTable_NoRegister()
{
	return UCardDataTable::StaticClass();
}
struct Z_Construct_UClass_UCardDataTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DataTable,ImportOptions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataTable/CardDataTable.h" },
		{ "ModuleRelativePath", "DataTable/CardDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardData_MetaData[] = {
		{ "Category", "CardDataTable" },
		{ "ModuleRelativePath", "DataTable/CardDataTable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CardData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCardDataTable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCardDataTable_Statics::NewProp_CardData = { "CardData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardDataTable, CardData), Z_Construct_UScriptStruct_FCardData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardData_MetaData), NewProp_CardData_MetaData) }; // 2892857109
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCardDataTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardDataTable_Statics::NewProp_CardData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCardDataTable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCardDataTable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataTable,
	(UObject* (*)())Z_Construct_UPackage__Script_Quiet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCardDataTable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCardDataTable_Statics::ClassParams = {
	&UCardDataTable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCardDataTable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCardDataTable_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCardDataTable_Statics::Class_MetaDataParams), Z_Construct_UClass_UCardDataTable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCardDataTable()
{
	if (!Z_Registration_Info_UClass_UCardDataTable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCardDataTable.OuterSingleton, Z_Construct_UClass_UCardDataTable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCardDataTable.OuterSingleton;
}
template<> QUIET_API UClass* StaticClass<UCardDataTable>()
{
	return UCardDataTable::StaticClass();
}
UCardDataTable::UCardDataTable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCardDataTable);
UCardDataTable::~UCardDataTable() {}
// End Class UCardDataTable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_DataTable_CardDataTable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCardDataTable, UCardDataTable::StaticClass, TEXT("UCardDataTable"), &Z_Registration_Info_UClass_UCardDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCardDataTable), 548411573U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_DataTable_CardDataTable_h_810249808(TEXT("/Script/Quiet"),
	Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_DataTable_CardDataTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Quiet_Source_Quiet_DataTable_CardDataTable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

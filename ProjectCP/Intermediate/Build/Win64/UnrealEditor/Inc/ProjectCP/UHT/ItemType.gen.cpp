// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Enums/ItemType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemType() {}

// Begin Cross Module References
PROJECTCP_API UEnum* Z_Construct_UEnum_ProjectCP_EItemType();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Enum EItemType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
static UEnum* EItemType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectCP_EItemType, (UObject*)Z_Construct_UPackage__Script_ProjectCP(), TEXT("EItemType"));
	}
	return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
}
template<> PROJECTCP_API UEnum* StaticEnum<EItemType>()
{
	return EItemType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectCP_EItemType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EIT_Item.DisplayName", "Item" },
		{ "EIT_Item.Name", "EItemType::EIT_Item" },
		{ "EIT_Weapon.DisplayName", "Weapon" },
		{ "EIT_Weapon.Name", "EItemType::EIT_Weapon" },
		{ "ModuleRelativePath", "Public/Enums/ItemType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemType::EIT_Item", (int64)EItemType::EIT_Item },
		{ "EItemType::EIT_Weapon", (int64)EItemType::EIT_Weapon },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectCP_EItemType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectCP,
	nullptr,
	"EItemType",
	"EItemType",
	Z_Construct_UEnum_ProjectCP_EItemType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectCP_EItemType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectCP_EItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectCP_EItemType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectCP_EItemType()
{
	if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_ProjectCP_EItemType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
}
// End Enum EItemType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Enums_ItemType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3135750350U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Enums_ItemType_h_3292989666(TEXT("/Script/ProjectCP"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Enums_ItemType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Enums_ItemType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Enums/CharacterEquipState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterEquipState() {}

// Begin Cross Module References
PROJECTCP_API UEnum* Z_Construct_UEnum_ProjectCP_ECharacterEquipState();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Enum ECharacterEquipState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterEquipState;
static UEnum* ECharacterEquipState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharacterEquipState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharacterEquipState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectCP_ECharacterEquipState, (UObject*)Z_Construct_UPackage__Script_ProjectCP(), TEXT("ECharacterEquipState"));
	}
	return Z_Registration_Info_UEnum_ECharacterEquipState.OuterSingleton;
}
template<> PROJECTCP_API UEnum* StaticEnum<ECharacterEquipState>()
{
	return ECharacterEquipState_StaticEnum();
}
struct Z_Construct_UEnum_ProjectCP_ECharacterEquipState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ECS_Equip.DisplayName", "Equip" },
		{ "ECS_Equip.Name", "ECharacterEquipState::ECS_Equip" },
		{ "ECS_NotEquip.DisplayName", "Not Equip" },
		{ "ECS_NotEquip.Name", "ECharacterEquipState::ECS_NotEquip" },
		{ "ModuleRelativePath", "Public/Enums/CharacterEquipState.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharacterEquipState::ECS_Equip", (int64)ECharacterEquipState::ECS_Equip },
		{ "ECharacterEquipState::ECS_NotEquip", (int64)ECharacterEquipState::ECS_NotEquip },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectCP_ECharacterEquipState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectCP,
	nullptr,
	"ECharacterEquipState",
	"ECharacterEquipState",
	Z_Construct_UEnum_ProjectCP_ECharacterEquipState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectCP_ECharacterEquipState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectCP_ECharacterEquipState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectCP_ECharacterEquipState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectCP_ECharacterEquipState()
{
	if (!Z_Registration_Info_UEnum_ECharacterEquipState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterEquipState.InnerSingleton, Z_Construct_UEnum_ProjectCP_ECharacterEquipState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharacterEquipState.InnerSingleton;
}
// End Enum ECharacterEquipState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Enums_CharacterEquipState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECharacterEquipState_StaticEnum, TEXT("ECharacterEquipState"), &Z_Registration_Info_UEnum_ECharacterEquipState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3153584895U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Enums_CharacterEquipState_h_1989413208(TEXT("/Script/ProjectCP"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Enums_CharacterEquipState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Enums_CharacterEquipState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

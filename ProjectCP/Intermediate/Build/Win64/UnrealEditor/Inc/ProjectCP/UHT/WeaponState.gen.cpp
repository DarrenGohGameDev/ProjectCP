// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Enums/WeaponState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponState() {}

// Begin Cross Module References
PROJECTCP_API UEnum* Z_Construct_UEnum_ProjectCP_EWeaponState();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Enum EWeaponState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponState;
static UEnum* EWeaponState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeaponState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeaponState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectCP_EWeaponState, (UObject*)Z_Construct_UPackage__Script_ProjectCP(), TEXT("EWeaponState"));
	}
	return Z_Registration_Info_UEnum_EWeaponState.OuterSingleton;
}
template<> PROJECTCP_API UEnum* StaticEnum<EWeaponState>()
{
	return EWeaponState_StaticEnum();
}
struct Z_Construct_UEnum_ProjectCP_EWeaponState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EWS_Ready.DisplayName", "Ready" },
		{ "EWS_Ready.Name", "EWeaponState::EWS_Ready" },
		{ "EWS_Reloading.DisplayName", "Reloading" },
		{ "EWS_Reloading.Name", "EWeaponState::EWS_Reloading" },
		{ "EWS_Shooting.DisplayName", "Shooting" },
		{ "EWS_Shooting.Name", "EWeaponState::EWS_Shooting" },
		{ "ModuleRelativePath", "Public/Enums/WeaponState.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeaponState::EWS_Ready", (int64)EWeaponState::EWS_Ready },
		{ "EWeaponState::EWS_Shooting", (int64)EWeaponState::EWS_Shooting },
		{ "EWeaponState::EWS_Reloading", (int64)EWeaponState::EWS_Reloading },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectCP_EWeaponState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectCP,
	nullptr,
	"EWeaponState",
	"EWeaponState",
	Z_Construct_UEnum_ProjectCP_EWeaponState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectCP_EWeaponState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectCP_EWeaponState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectCP_EWeaponState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectCP_EWeaponState()
{
	if (!Z_Registration_Info_UEnum_EWeaponState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponState.InnerSingleton, Z_Construct_UEnum_ProjectCP_EWeaponState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeaponState.InnerSingleton;
}
// End Enum EWeaponState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Enums_WeaponState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWeaponState_StaticEnum, TEXT("EWeaponState"), &Z_Registration_Info_UEnum_EWeaponState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3671116167U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Enums_WeaponState_h_3611819508(TEXT("/Script/ProjectCP"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Enums_WeaponState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Enums_WeaponState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

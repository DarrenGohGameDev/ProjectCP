// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Enums/BulletState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBulletState() {}

// Begin Cross Module References
PROJECTCP_API UEnum* Z_Construct_UEnum_ProjectCP_EBulletState();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Enum EBulletState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBulletState;
static UEnum* EBulletState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBulletState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBulletState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectCP_EBulletState, (UObject*)Z_Construct_UPackage__Script_ProjectCP(), TEXT("EBulletState"));
	}
	return Z_Registration_Info_UEnum_EBulletState.OuterSingleton;
}
template<> PROJECTCP_API UEnum* StaticEnum<EBulletState>()
{
	return EBulletState_StaticEnum();
}
struct Z_Construct_UEnum_ProjectCP_EBulletState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EBS_InUse.DisplayName", "InUse" },
		{ "EBS_InUse.Name", "EBulletState::EBS_InUse" },
		{ "EBS_NotInUse.DisplayName", "NotUse" },
		{ "EBS_NotInUse.Name", "EBulletState::EBS_NotInUse" },
		{ "ModuleRelativePath", "Public/Enums/BulletState.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBulletState::EBS_InUse", (int64)EBulletState::EBS_InUse },
		{ "EBulletState::EBS_NotInUse", (int64)EBulletState::EBS_NotInUse },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectCP_EBulletState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectCP,
	nullptr,
	"EBulletState",
	"EBulletState",
	Z_Construct_UEnum_ProjectCP_EBulletState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectCP_EBulletState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectCP_EBulletState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectCP_EBulletState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectCP_EBulletState()
{
	if (!Z_Registration_Info_UEnum_EBulletState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBulletState.InnerSingleton, Z_Construct_UEnum_ProjectCP_EBulletState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBulletState.InnerSingleton;
}
// End Enum EBulletState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Enums_BulletState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBulletState_StaticEnum, TEXT("EBulletState"), &Z_Registration_Info_UEnum_EBulletState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3472759578U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Enums_BulletState_h_2865562692(TEXT("/Script/ProjectCP"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Enums_BulletState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Enums_BulletState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

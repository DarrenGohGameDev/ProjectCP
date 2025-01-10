// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Enums/LowerBodyAnimationState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLowerBodyAnimationState() {}

// Begin Cross Module References
PROJECTCP_API UEnum* Z_Construct_UEnum_ProjectCP_ELowerBodyAnimationState();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Enum ELowerBodyAnimationState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELowerBodyAnimationState;
static UEnum* ELowerBodyAnimationState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELowerBodyAnimationState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELowerBodyAnimationState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectCP_ELowerBodyAnimationState, (UObject*)Z_Construct_UPackage__Script_ProjectCP(), TEXT("ELowerBodyAnimationState"));
	}
	return Z_Registration_Info_UEnum_ELowerBodyAnimationState.OuterSingleton;
}
template<> PROJECTCP_API UEnum* StaticEnum<ELowerBodyAnimationState>()
{
	return ELowerBodyAnimationState_StaticEnum();
}
struct Z_Construct_UEnum_ProjectCP_ELowerBodyAnimationState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ELBAS_Backward.DisplayName", "Backward" },
		{ "ELBAS_Backward.Name", "ELowerBodyAnimationState::ELBAS_Backward" },
		{ "ELBAS_Forward.DisplayName", "Forward" },
		{ "ELBAS_Forward.Name", "ELowerBodyAnimationState::ELBAS_Forward" },
		{ "ELBAS_Left.DisplayName", "Left" },
		{ "ELBAS_Left.Name", "ELowerBodyAnimationState::ELBAS_Left" },
		{ "ELBAS_Right.DisplayName", "Right" },
		{ "ELBAS_Right.Name", "ELowerBodyAnimationState::ELBAS_Right" },
		{ "ModuleRelativePath", "Public/Enums/LowerBodyAnimationState.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELowerBodyAnimationState::ELBAS_Forward", (int64)ELowerBodyAnimationState::ELBAS_Forward },
		{ "ELowerBodyAnimationState::ELBAS_Backward", (int64)ELowerBodyAnimationState::ELBAS_Backward },
		{ "ELowerBodyAnimationState::ELBAS_Left", (int64)ELowerBodyAnimationState::ELBAS_Left },
		{ "ELowerBodyAnimationState::ELBAS_Right", (int64)ELowerBodyAnimationState::ELBAS_Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectCP_ELowerBodyAnimationState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectCP,
	nullptr,
	"ELowerBodyAnimationState",
	"ELowerBodyAnimationState",
	Z_Construct_UEnum_ProjectCP_ELowerBodyAnimationState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectCP_ELowerBodyAnimationState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectCP_ELowerBodyAnimationState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectCP_ELowerBodyAnimationState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectCP_ELowerBodyAnimationState()
{
	if (!Z_Registration_Info_UEnum_ELowerBodyAnimationState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELowerBodyAnimationState.InnerSingleton, Z_Construct_UEnum_ProjectCP_ELowerBodyAnimationState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELowerBodyAnimationState.InnerSingleton;
}
// End Enum ELowerBodyAnimationState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Enums_LowerBodyAnimationState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELowerBodyAnimationState_StaticEnum, TEXT("ELowerBodyAnimationState"), &Z_Registration_Info_UEnum_ELowerBodyAnimationState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2605313593U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Enums_LowerBodyAnimationState_h_706040136(TEXT("/Script/ProjectCP"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Enums_LowerBodyAnimationState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Enums_LowerBodyAnimationState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

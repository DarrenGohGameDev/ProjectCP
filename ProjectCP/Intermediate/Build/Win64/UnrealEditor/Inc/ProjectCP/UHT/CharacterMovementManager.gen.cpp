// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Managers/CharacterMovementManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterMovementManager() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTCP_API UClass* Z_Construct_UClass_UCharacterMovementManager();
PROJECTCP_API UClass* Z_Construct_UClass_UCharacterMovementManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UCharacterMovementManager Function Jump
struct Z_Construct_UFunction_UCharacterMovementManager_Jump_Statics
{
	struct CharacterMovementManager_eventJump_Parms
	{
		AActor* owner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Managers/CharacterMovementManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterMovementManager_Jump_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementManager_eventJump_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementManager_Jump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementManager_Jump_Statics::NewProp_owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementManager_Jump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementManager_Jump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementManager, nullptr, "Jump", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementManager_Jump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementManager_Jump_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementManager_Jump_Statics::CharacterMovementManager_eventJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementManager_Jump_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementManager_Jump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementManager_Jump_Statics::CharacterMovementManager_eventJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementManager_Jump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementManager_Jump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementManager::execJump)
{
	P_GET_OBJECT(AActor,Z_Param_owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Jump(Z_Param_owner);
	P_NATIVE_END;
}
// End Class UCharacterMovementManager Function Jump

// Begin Class UCharacterMovementManager Function Look
struct Z_Construct_UFunction_UCharacterMovementManager_Look_Statics
{
	struct CharacterMovementManager_eventLook_Parms
	{
		FVector2D value;
		AActor* owner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Managers/CharacterMovementManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementManager_Look_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementManager_eventLook_Parms, value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterMovementManager_Look_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementManager_eventLook_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementManager_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementManager_Look_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementManager_Look_Statics::NewProp_owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementManager_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementManager_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementManager, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementManager_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementManager_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementManager_Look_Statics::CharacterMovementManager_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementManager_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementManager_Look_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementManager_Look_Statics::CharacterMovementManager_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementManager_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementManager_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementManager::execLook)
{
	P_GET_STRUCT(FVector2D,Z_Param_value);
	P_GET_OBJECT(AActor,Z_Param_owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_value,Z_Param_owner);
	P_NATIVE_END;
}
// End Class UCharacterMovementManager Function Look

// Begin Class UCharacterMovementManager Function Move
struct Z_Construct_UFunction_UCharacterMovementManager_Move_Statics
{
	struct CharacterMovementManager_eventMove_Parms
	{
		FVector2D value;
		AActor* owner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Managers/CharacterMovementManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementManager_Move_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementManager_eventMove_Parms, value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterMovementManager_Move_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementManager_eventMove_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementManager_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementManager_Move_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementManager_Move_Statics::NewProp_owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementManager_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementManager_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementManager, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementManager_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementManager_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementManager_Move_Statics::CharacterMovementManager_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementManager_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementManager_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementManager_Move_Statics::CharacterMovementManager_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementManager_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementManager_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementManager::execMove)
{
	P_GET_STRUCT(FVector2D,Z_Param_value);
	P_GET_OBJECT(AActor,Z_Param_owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_value,Z_Param_owner);
	P_NATIVE_END;
}
// End Class UCharacterMovementManager Function Move

// Begin Class UCharacterMovementManager
void UCharacterMovementManager::StaticRegisterNativesUCharacterMovementManager()
{
	UClass* Class = UCharacterMovementManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Jump", &UCharacterMovementManager::execJump },
		{ "Look", &UCharacterMovementManager::execLook },
		{ "Move", &UCharacterMovementManager::execMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterMovementManager);
UClass* Z_Construct_UClass_UCharacterMovementManager_NoRegister()
{
	return UCharacterMovementManager::StaticClass();
}
struct Z_Construct_UClass_UCharacterMovementManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Managers/CharacterMovementManager.h" },
		{ "ModuleRelativePath", "Public/Managers/CharacterMovementManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterMovementManager_Jump, "Jump" }, // 663008791
		{ &Z_Construct_UFunction_UCharacterMovementManager_Look, "Look" }, // 3678275504
		{ &Z_Construct_UFunction_UCharacterMovementManager_Move, "Move" }, // 3168928009
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterMovementManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCharacterMovementManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMovementManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterMovementManager_Statics::ClassParams = {
	&UCharacterMovementManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMovementManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterMovementManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterMovementManager()
{
	if (!Z_Registration_Info_UClass_UCharacterMovementManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterMovementManager.OuterSingleton, Z_Construct_UClass_UCharacterMovementManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterMovementManager.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UCharacterMovementManager>()
{
	return UCharacterMovementManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterMovementManager);
UCharacterMovementManager::~UCharacterMovementManager() {}
// End Class UCharacterMovementManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_CharacterMovementManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterMovementManager, UCharacterMovementManager::StaticClass, TEXT("UCharacterMovementManager"), &Z_Registration_Info_UClass_UCharacterMovementManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterMovementManager), 4067248575U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_CharacterMovementManager_h_2321245835(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_CharacterMovementManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_CharacterMovementManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

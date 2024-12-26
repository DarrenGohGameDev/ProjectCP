// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Managers/DelegateManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDelegateManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UDelegateManager();
PROJECTCP_API UClass* Z_Construct_UClass_UDelegateManager_NoRegister();
PROJECTCP_API UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Delegate FOnItemOverlap
struct Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics
{
	struct _Script_ProjectCP_eventOnItemOverlap_Parms
	{
		AActor* item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Managers/DelegateManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectCP_eventOnItemOverlap_Parms, item), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics::NewProp_item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectCP, nullptr, "OnItemOverlap__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics::_Script_ProjectCP_eventOnItemOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics::_Script_ProjectCP_eventOnItemOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemOverlap_DelegateWrapper(const FMulticastScriptDelegate& OnItemOverlap, AActor* item)
{
	struct _Script_ProjectCP_eventOnItemOverlap_Parms
	{
		AActor* item;
	};
	_Script_ProjectCP_eventOnItemOverlap_Parms Parms;
	Parms.item=item;
	OnItemOverlap.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnItemOverlap

// Begin Class UDelegateManager
void UDelegateManager::StaticRegisterNativesUDelegateManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDelegateManager);
UClass* Z_Construct_UClass_UDelegateManager_NoRegister()
{
	return UDelegateManager::StaticClass();
}
struct Z_Construct_UClass_UDelegateManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Managers/DelegateManager.h" },
		{ "ModuleRelativePath", "Public/Managers/DelegateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemOverlap_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Managers/DelegateManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemOverlap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDelegateManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDelegateManager_Statics::NewProp_OnItemOverlap = { "OnItemOverlap", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDelegateManager, OnItemOverlap), Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemOverlap_MetaData), NewProp_OnItemOverlap_MetaData) }; // 112737219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDelegateManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDelegateManager_Statics::NewProp_OnItemOverlap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDelegateManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDelegateManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDelegateManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDelegateManager_Statics::ClassParams = {
	&UDelegateManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDelegateManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDelegateManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDelegateManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UDelegateManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDelegateManager()
{
	if (!Z_Registration_Info_UClass_UDelegateManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDelegateManager.OuterSingleton, Z_Construct_UClass_UDelegateManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDelegateManager.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UDelegateManager>()
{
	return UDelegateManager::StaticClass();
}
UDelegateManager::UDelegateManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDelegateManager);
UDelegateManager::~UDelegateManager() {}
// End Class UDelegateManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_DelegateManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDelegateManager, UDelegateManager::StaticClass, TEXT("UDelegateManager"), &Z_Registration_Info_UClass_UDelegateManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDelegateManager), 2300549587U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_DelegateManager_h_944541565(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_DelegateManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_DelegateManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

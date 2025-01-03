// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Interface/GetHitInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetHitInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UGetHitInterface();
PROJECTCP_API UClass* Z_Construct_UClass_UGetHitInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Interface UGetHitInterface Function GetHit
struct GetHitInterface_eventGetHit_Parms
{
	int32 damage;
	AActor* Hitter;
};
void IGetHitInterface::GetHit(int32 damage, AActor* Hitter)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHit instead.");
}
static FName NAME_UGetHitInterface_GetHit = FName(TEXT("GetHit"));
void IGetHitInterface::Execute_GetHit(UObject* O, int32 damage, AActor* Hitter)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UGetHitInterface::StaticClass()));
	GetHitInterface_eventGetHit_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UGetHitInterface_GetHit);
	if (Func)
	{
		Parms.damage=damage;
		Parms.Hitter=Hitter;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IGetHitInterface*)(O->GetNativeInterfaceAddress(UGetHitInterface::StaticClass())))
	{
		I->GetHit_Implementation(damage,Hitter);
	}
}
struct Z_Construct_UFunction_UGetHitInterface_GetHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/GetHitInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Hitter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGetHitInterface_GetHit_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GetHitInterface_eventGetHit_Parms, damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetHitInterface_GetHit_Statics::NewProp_Hitter = { "Hitter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GetHitInterface_eventGetHit_Parms, Hitter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetHitInterface_GetHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetHitInterface_GetHit_Statics::NewProp_damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetHitInterface_GetHit_Statics::NewProp_Hitter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetHitInterface_GetHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetHitInterface_GetHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetHitInterface, nullptr, "GetHit", nullptr, nullptr, Z_Construct_UFunction_UGetHitInterface_GetHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetHitInterface_GetHit_Statics::PropPointers), sizeof(GetHitInterface_eventGetHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetHitInterface_GetHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGetHitInterface_GetHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(GetHitInterface_eventGetHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGetHitInterface_GetHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGetHitInterface_GetHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IGetHitInterface::execGetHit)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_damage);
	P_GET_OBJECT(AActor,Z_Param_Hitter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetHit_Implementation(Z_Param_damage,Z_Param_Hitter);
	P_NATIVE_END;
}
// End Interface UGetHitInterface Function GetHit

// Begin Interface UGetHitInterface
void UGetHitInterface::StaticRegisterNativesUGetHitInterface()
{
	UClass* Class = UGetHitInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHit", &IGetHitInterface::execGetHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGetHitInterface);
UClass* Z_Construct_UClass_UGetHitInterface_NoRegister()
{
	return UGetHitInterface::StaticClass();
}
struct Z_Construct_UClass_UGetHitInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/GetHitInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetHitInterface_GetHit, "GetHit" }, // 1303525152
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGetHitInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGetHitInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGetHitInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGetHitInterface_Statics::ClassParams = {
	&UGetHitInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGetHitInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UGetHitInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGetHitInterface()
{
	if (!Z_Registration_Info_UClass_UGetHitInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGetHitInterface.OuterSingleton, Z_Construct_UClass_UGetHitInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGetHitInterface.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UGetHitInterface>()
{
	return UGetHitInterface::StaticClass();
}
UGetHitInterface::UGetHitInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGetHitInterface);
UGetHitInterface::~UGetHitInterface() {}
// End Interface UGetHitInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_GetHitInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGetHitInterface, UGetHitInterface::StaticClass, TEXT("UGetHitInterface"), &Z_Registration_Info_UClass_UGetHitInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGetHitInterface), 3176531238U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_GetHitInterface_h_608096228(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_GetHitInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_GetHitInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Weapon/Projectile/Bullet.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBullet() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PROJECTCP_API UClass* Z_Construct_UClass_ABullet();
PROJECTCP_API UClass* Z_Construct_UClass_ABullet_NoRegister();
PROJECTCP_API UEnum* Z_Construct_UEnum_ProjectCP_EBulletState();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class ABullet Function BulletExpire
struct Z_Construct_UFunction_ABullet_BulletExpire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Projectile/Bullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABullet_BulletExpire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABullet, nullptr, "BulletExpire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_BulletExpire_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABullet_BulletExpire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABullet_BulletExpire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABullet_BulletExpire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABullet::execBulletExpire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulletExpire();
	P_NATIVE_END;
}
// End Class ABullet Function BulletExpire

// Begin Class ABullet Function OnSphereOverlap
struct Z_Construct_UFunction_ABullet_OnSphereOverlap_Statics
{
	struct Bullet_eventOnSphereOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Projectile/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABullet_OnSphereOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventOnSphereOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABullet_OnSphereOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventOnSphereOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABullet_OnSphereOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventOnSphereOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABullet_OnSphereOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventOnSphereOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ABullet_OnSphereOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Bullet_eventOnSphereOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABullet_OnSphereOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Bullet_eventOnSphereOverlap_Parms), &Z_Construct_UFunction_ABullet_OnSphereOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABullet_OnSphereOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventOnSphereOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABullet_OnSphereOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OnSphereOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OnSphereOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OnSphereOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OnSphereOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OnSphereOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_OnSphereOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_OnSphereOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABullet_OnSphereOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABullet, nullptr, "OnSphereOverlap", nullptr, nullptr, Z_Construct_UFunction_ABullet_OnSphereOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_OnSphereOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABullet_OnSphereOverlap_Statics::Bullet_eventOnSphereOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_OnSphereOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABullet_OnSphereOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABullet_OnSphereOverlap_Statics::Bullet_eventOnSphereOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABullet_OnSphereOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABullet_OnSphereOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABullet::execOnSphereOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSphereOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ABullet Function OnSphereOverlap

// Begin Class ABullet
void ABullet::StaticRegisterNativesABullet()
{
	UClass* Class = ABullet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BulletExpire", &ABullet::execBulletExpire },
		{ "OnSphereOverlap", &ABullet::execOnSphereOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABullet);
UClass* Z_Construct_UClass_ABullet_NoRegister()
{
	return ABullet::StaticClass();
}
struct Z_Construct_UClass_ABullet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/Projectile/Bullet.h" },
		{ "ModuleRelativePath", "Public/Weapon/Projectile/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mSphere_MetaData[] = {
		{ "Category", "Bullet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Projectile/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Weapon/Projectile/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_projectileSpeed_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Weapon/Projectile/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bulletAliveDuration_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Weapon/Projectile/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_projectileMovementComponent_MetaData[] = {
		{ "Category", "Stats" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Projectile/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletMeshComponent_MetaData[] = {
		{ "Category", "Bullet Skin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Projectile/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentBulletState_MetaData[] = {
		{ "Category", "Bullet State" },
		{ "ModuleRelativePath", "Public/Weapon/Projectile/Bullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mSphere;
	static const UECodeGen_Private::FIntPropertyParams NewProp_damage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_projectileSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_bulletAliveDuration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_projectileMovementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletMeshComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_currentBulletState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_currentBulletState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABullet_BulletExpire, "BulletExpire" }, // 3335597923
		{ &Z_Construct_UFunction_ABullet_OnSphereOverlap, "OnSphereOverlap" }, // 4157268330
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABullet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_mSphere = { "mSphere", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullet, mSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mSphere_MetaData), NewProp_mSphere_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullet, damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_damage_MetaData), NewProp_damage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_projectileSpeed = { "projectileSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullet, projectileSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_projectileSpeed_MetaData), NewProp_projectileSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_bulletAliveDuration = { "bulletAliveDuration", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullet, bulletAliveDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bulletAliveDuration_MetaData), NewProp_bulletAliveDuration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_projectileMovementComponent = { "projectileMovementComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullet, projectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_projectileMovementComponent_MetaData), NewProp_projectileMovementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_BulletMeshComponent = { "BulletMeshComponent", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullet, BulletMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletMeshComponent_MetaData), NewProp_BulletMeshComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_currentBulletState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_currentBulletState = { "currentBulletState", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullet, currentBulletState), Z_Construct_UEnum_ProjectCP_EBulletState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentBulletState_MetaData), NewProp_currentBulletState_MetaData) }; // 3472759578
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABullet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_mSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_projectileSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_bulletAliveDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_projectileMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_BulletMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_currentBulletState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_currentBulletState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABullet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABullet_Statics::ClassParams = {
	&ABullet::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABullet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::Class_MetaDataParams), Z_Construct_UClass_ABullet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABullet()
{
	if (!Z_Registration_Info_UClass_ABullet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABullet.OuterSingleton, Z_Construct_UClass_ABullet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABullet.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<ABullet>()
{
	return ABullet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABullet);
ABullet::~ABullet() {}
// End Class ABullet

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Weapon_Projectile_Bullet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABullet, ABullet::StaticClass, TEXT("ABullet"), &Z_Registration_Info_UClass_ABullet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABullet), 1750728306U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Weapon_Projectile_Bullet_h_2115375275(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Weapon_Projectile_Bullet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Weapon_Projectile_Bullet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

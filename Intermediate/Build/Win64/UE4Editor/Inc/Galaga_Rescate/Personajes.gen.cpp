// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_Rescate/Personajes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonajes() {}
// Cross Module References
	GALAGA_RESCATE_API UClass* Z_Construct_UClass_APersonajes_NoRegister();
	GALAGA_RESCATE_API UClass* Z_Construct_UClass_APersonajes();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_Rescate();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APersonajes::StaticRegisterNativesAPersonajes()
	{
	}
	UClass* Z_Construct_UClass_APersonajes_NoRegister()
	{
		return APersonajes::StaticClass();
	}
	struct Z_Construct_UClass_APersonajes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mallaPersonajes_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mallaPersonajes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APersonajes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_Rescate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APersonajes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Personajes.h" },
		{ "ModuleRelativePath", "Personajes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APersonajes_Statics::NewProp_mallaPersonajes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Personajes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APersonajes_Statics::NewProp_mallaPersonajes = { "mallaPersonajes", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APersonajes, mallaPersonajes), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APersonajes_Statics::NewProp_mallaPersonajes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APersonajes_Statics::NewProp_mallaPersonajes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APersonajes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APersonajes_Statics::NewProp_mallaPersonajes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APersonajes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APersonajes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APersonajes_Statics::ClassParams = {
		&APersonajes::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APersonajes_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APersonajes_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_APersonajes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APersonajes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APersonajes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APersonajes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APersonajes, 2475784773);
	template<> GALAGA_RESCATE_API UClass* StaticClass<APersonajes>()
	{
		return APersonajes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APersonajes(Z_Construct_UClass_APersonajes, &APersonajes::StaticClass, TEXT("/Script/Galaga_Rescate"), TEXT("APersonajes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APersonajes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

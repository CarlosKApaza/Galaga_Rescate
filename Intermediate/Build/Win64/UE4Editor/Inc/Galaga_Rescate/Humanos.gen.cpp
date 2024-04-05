// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_Rescate/Humanos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHumanos() {}
// Cross Module References
	GALAGA_RESCATE_API UClass* Z_Construct_UClass_AHumanos_NoRegister();
	GALAGA_RESCATE_API UClass* Z_Construct_UClass_AHumanos();
	GALAGA_RESCATE_API UClass* Z_Construct_UClass_APersonajes();
	UPackage* Z_Construct_UPackage__Script_Galaga_Rescate();
// End Cross Module References
	void AHumanos::StaticRegisterNativesAHumanos()
	{
	}
	UClass* Z_Construct_UClass_AHumanos_NoRegister()
	{
		return AHumanos::StaticClass();
	}
	struct Z_Construct_UClass_AHumanos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHumanos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APersonajes,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_Rescate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanos_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Humanos.h" },
		{ "ModuleRelativePath", "Humanos.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHumanos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHumanos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHumanos_Statics::ClassParams = {
		&AHumanos::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHumanos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHumanos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHumanos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHumanos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHumanos, 182827268);
	template<> GALAGA_RESCATE_API UClass* StaticClass<AHumanos>()
	{
		return AHumanos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHumanos(Z_Construct_UClass_AHumanos, &AHumanos::StaticClass, TEXT("/Script/Galaga_Rescate"), TEXT("AHumanos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHumanos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

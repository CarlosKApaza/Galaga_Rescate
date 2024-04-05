// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_Rescate/InventarioActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventarioActor() {}
// Cross Module References
	GALAGA_RESCATE_API UClass* Z_Construct_UClass_AInventarioActor_NoRegister();
	GALAGA_RESCATE_API UClass* Z_Construct_UClass_AInventarioActor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_Rescate();
// End Cross Module References
	void AInventarioActor::StaticRegisterNativesAInventarioActor()
	{
	}
	UClass* Z_Construct_UClass_AInventarioActor_NoRegister()
	{
		return AInventarioActor::StaticClass();
	}
	struct Z_Construct_UClass_AInventarioActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInventarioActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_Rescate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventarioActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "InventarioActor.h" },
		{ "ModuleRelativePath", "InventarioActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInventarioActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventarioActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInventarioActor_Statics::ClassParams = {
		&AInventarioActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AInventarioActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInventarioActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInventarioActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInventarioActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInventarioActor, 1676567301);
	template<> GALAGA_RESCATE_API UClass* StaticClass<AInventarioActor>()
	{
		return AInventarioActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInventarioActor(Z_Construct_UClass_AInventarioActor, &AInventarioActor::StaticClass, TEXT("/Script/Galaga_Rescate"), TEXT("AInventarioActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInventarioActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

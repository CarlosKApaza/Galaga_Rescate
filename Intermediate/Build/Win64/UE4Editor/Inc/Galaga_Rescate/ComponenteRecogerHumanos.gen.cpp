// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_Rescate/ComponenteRecogerHumanos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponenteRecogerHumanos() {}
// Cross Module References
	GALAGA_RESCATE_API UClass* Z_Construct_UClass_UComponenteRecogerHumanos_NoRegister();
	GALAGA_RESCATE_API UClass* Z_Construct_UClass_UComponenteRecogerHumanos();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Galaga_Rescate();
	GALAGA_RESCATE_API UClass* Z_Construct_UClass_AHumanos_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UComponenteRecogerHumanos::execElminarHumanosInventario)
	{
		P_GET_OBJECT(AHumanos,Z_Param_HumanosaEliminar);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ElminarHumanosInventario(Z_Param_HumanosaEliminar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComponenteRecogerHumanos::execAgregarHumanosInventario)
	{
		P_GET_OBJECT(AHumanos,Z_Param_HumanosaAgregar);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AgregarHumanosInventario(Z_Param_HumanosaAgregar);
		P_NATIVE_END;
	}
	void UComponenteRecogerHumanos::StaticRegisterNativesUComponenteRecogerHumanos()
	{
		UClass* Class = UComponenteRecogerHumanos::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AgregarHumanosInventario", &UComponenteRecogerHumanos::execAgregarHumanosInventario },
			{ "ElminarHumanosInventario", &UComponenteRecogerHumanos::execElminarHumanosInventario },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComponenteRecogerHumanos_AgregarHumanosInventario_Statics
	{
		struct ComponenteRecogerHumanos_eventAgregarHumanosInventario_Parms
		{
			AHumanos* HumanosaAgregar;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HumanosaAgregar;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComponenteRecogerHumanos_AgregarHumanosInventario_Statics::NewProp_HumanosaAgregar = { "HumanosaAgregar", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponenteRecogerHumanos_eventAgregarHumanosInventario_Parms, HumanosaAgregar), Z_Construct_UClass_AHumanos_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UComponenteRecogerHumanos_AgregarHumanosInventario_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponenteRecogerHumanos_eventAgregarHumanosInventario_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponenteRecogerHumanos_AgregarHumanosInventario_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponenteRecogerHumanos_AgregarHumanosInventario_Statics::NewProp_HumanosaAgregar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponenteRecogerHumanos_AgregarHumanosInventario_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponenteRecogerHumanos_AgregarHumanosInventario_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ComponenteRecogerHumanos.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponenteRecogerHumanos_AgregarHumanosInventario_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponenteRecogerHumanos, nullptr, "AgregarHumanosInventario", nullptr, nullptr, sizeof(ComponenteRecogerHumanos_eventAgregarHumanosInventario_Parms), Z_Construct_UFunction_UComponenteRecogerHumanos_AgregarHumanosInventario_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteRecogerHumanos_AgregarHumanosInventario_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponenteRecogerHumanos_AgregarHumanosInventario_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteRecogerHumanos_AgregarHumanosInventario_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponenteRecogerHumanos_AgregarHumanosInventario()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponenteRecogerHumanos_AgregarHumanosInventario_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponenteRecogerHumanos_ElminarHumanosInventario_Statics
	{
		struct ComponenteRecogerHumanos_eventElminarHumanosInventario_Parms
		{
			AHumanos* HumanosaEliminar;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HumanosaEliminar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComponenteRecogerHumanos_ElminarHumanosInventario_Statics::NewProp_HumanosaEliminar = { "HumanosaEliminar", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponenteRecogerHumanos_eventElminarHumanosInventario_Parms, HumanosaEliminar), Z_Construct_UClass_AHumanos_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponenteRecogerHumanos_ElminarHumanosInventario_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponenteRecogerHumanos_ElminarHumanosInventario_Statics::NewProp_HumanosaEliminar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponenteRecogerHumanos_ElminarHumanosInventario_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ComponenteRecogerHumanos.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponenteRecogerHumanos_ElminarHumanosInventario_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponenteRecogerHumanos, nullptr, "ElminarHumanosInventario", nullptr, nullptr, sizeof(ComponenteRecogerHumanos_eventElminarHumanosInventario_Parms), Z_Construct_UFunction_UComponenteRecogerHumanos_ElminarHumanosInventario_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteRecogerHumanos_ElminarHumanosInventario_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponenteRecogerHumanos_ElminarHumanosInventario_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteRecogerHumanos_ElminarHumanosInventario_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponenteRecogerHumanos_ElminarHumanosInventario()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponenteRecogerHumanos_ElminarHumanosInventario_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UComponenteRecogerHumanos_NoRegister()
	{
		return UComponenteRecogerHumanos::StaticClass();
	}
	struct Z_Construct_UClass_UComponenteRecogerHumanos_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventarioHumanos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventarioHumanos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InventarioHumanos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponenteRecogerHumanos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_Rescate,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComponenteRecogerHumanos_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComponenteRecogerHumanos_AgregarHumanosInventario, "AgregarHumanosInventario" }, // 2622839474
		{ &Z_Construct_UFunction_UComponenteRecogerHumanos_ElminarHumanosInventario, "ElminarHumanosInventario" }, // 3077768540
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteRecogerHumanos_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ComponenteRecogerHumanos.h" },
		{ "ModuleRelativePath", "ComponenteRecogerHumanos.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UComponenteRecogerHumanos_Statics::NewProp_InventarioHumanos_Inner = { "InventarioHumanos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHumanos_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteRecogerHumanos_Statics::NewProp_InventarioHumanos_MetaData[] = {
		{ "ModuleRelativePath", "ComponenteRecogerHumanos.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComponenteRecogerHumanos_Statics::NewProp_InventarioHumanos = { "InventarioHumanos", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComponenteRecogerHumanos, InventarioHumanos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UComponenteRecogerHumanos_Statics::NewProp_InventarioHumanos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteRecogerHumanos_Statics::NewProp_InventarioHumanos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComponenteRecogerHumanos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponenteRecogerHumanos_Statics::NewProp_InventarioHumanos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponenteRecogerHumanos_Statics::NewProp_InventarioHumanos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponenteRecogerHumanos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponenteRecogerHumanos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComponenteRecogerHumanos_Statics::ClassParams = {
		&UComponenteRecogerHumanos::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComponenteRecogerHumanos_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteRecogerHumanos_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComponenteRecogerHumanos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteRecogerHumanos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponenteRecogerHumanos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComponenteRecogerHumanos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComponenteRecogerHumanos, 3362840732);
	template<> GALAGA_RESCATE_API UClass* StaticClass<UComponenteRecogerHumanos>()
	{
		return UComponenteRecogerHumanos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComponenteRecogerHumanos(Z_Construct_UClass_UComponenteRecogerHumanos, &UComponenteRecogerHumanos::StaticClass, TEXT("/Script/Galaga_Rescate"), TEXT("UComponenteRecogerHumanos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponenteRecogerHumanos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

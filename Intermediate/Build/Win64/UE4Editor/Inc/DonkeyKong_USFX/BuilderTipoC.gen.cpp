// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/BuilderTipoC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilderTipoC() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_ABuilderTipoC_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_ABuilderTipoC();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_UBuilderNiveles_NoRegister();
// End Cross Module References
	void ABuilderTipoC::StaticRegisterNativesABuilderTipoC()
	{
	}
	UClass* Z_Construct_UClass_ABuilderTipoC_NoRegister()
	{
		return ABuilderTipoC::StaticClass();
	}
	struct Z_Construct_UClass_ABuilderTipoC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuilderTipoC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilderTipoC_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuilderTipoC.h" },
		{ "ModuleRelativePath", "BuilderTipoC.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABuilderTipoC_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuilderNiveles_NoRegister, (int32)VTABLE_OFFSET(ABuilderTipoC, IBuilderNiveles), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuilderTipoC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilderTipoC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuilderTipoC_Statics::ClassParams = {
		&ABuilderTipoC::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuilderTipoC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderTipoC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuilderTipoC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuilderTipoC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuilderTipoC, 2928706283);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<ABuilderTipoC>()
	{
		return ABuilderTipoC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuilderTipoC(Z_Construct_UClass_ABuilderTipoC, &ABuilderTipoC::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("ABuilderTipoC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilderTipoC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/CieloNoche.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCieloNoche() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_ACieloNoche_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_ACieloNoche();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACieloNoche::StaticRegisterNativesACieloNoche()
	{
	}
	UClass* Z_Construct_UClass_ACieloNoche_NoRegister()
	{
		return ACieloNoche::StaticClass();
	}
	struct Z_Construct_UClass_ACieloNoche_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CieloNocheMallaComponente_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CieloNocheMallaComponente;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACieloNoche_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACieloNoche_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CieloNoche.h" },
		{ "ModuleRelativePath", "CieloNoche.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACieloNoche_Statics::NewProp_CieloNocheMallaComponente_MetaData[] = {
		{ "Category", "CieloNoche" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CieloNoche.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACieloNoche_Statics::NewProp_CieloNocheMallaComponente = { "CieloNocheMallaComponente", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACieloNoche, CieloNocheMallaComponente), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACieloNoche_Statics::NewProp_CieloNocheMallaComponente_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACieloNoche_Statics::NewProp_CieloNocheMallaComponente_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACieloNoche_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACieloNoche_Statics::NewProp_CieloNocheMallaComponente,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACieloNoche_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACieloNoche>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACieloNoche_Statics::ClassParams = {
		&ACieloNoche::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACieloNoche_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACieloNoche_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACieloNoche_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACieloNoche_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACieloNoche()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACieloNoche_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACieloNoche, 1318011732);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<ACieloNoche>()
	{
		return ACieloNoche::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACieloNoche(Z_Construct_UClass_ACieloNoche, &ACieloNoche::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("ACieloNoche"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACieloNoche);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/EstrategiaSenoidal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaSenoidal() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AEstrategiaSenoidal_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AEstrategiaSenoidal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_UIEstrategiaMovimiento_NoRegister();
// End Cross Module References
	void AEstrategiaSenoidal::StaticRegisterNativesAEstrategiaSenoidal()
	{
	}
	UClass* Z_Construct_UClass_AEstrategiaSenoidal_NoRegister()
	{
		return AEstrategiaSenoidal::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategiaSenoidal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategiaSenoidal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaSenoidal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstrategiaSenoidal.h" },
		{ "ModuleRelativePath", "EstrategiaSenoidal.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstrategiaSenoidal_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIEstrategiaMovimiento_NoRegister, (int32)VTABLE_OFFSET(AEstrategiaSenoidal, IIEstrategiaMovimiento), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategiaSenoidal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategiaSenoidal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategiaSenoidal_Statics::ClassParams = {
		&AEstrategiaSenoidal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstrategiaSenoidal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaSenoidal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategiaSenoidal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategiaSenoidal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategiaSenoidal, 426556279);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<AEstrategiaSenoidal>()
	{
		return AEstrategiaSenoidal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategiaSenoidal(Z_Construct_UClass_AEstrategiaSenoidal, &AEstrategiaSenoidal::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("AEstrategiaSenoidal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategiaSenoidal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

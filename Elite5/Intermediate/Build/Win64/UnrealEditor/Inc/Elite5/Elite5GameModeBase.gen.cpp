// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elite5/Elite5GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElite5GameModeBase() {}
// Cross Module References
	ELITE5_API UClass* Z_Construct_UClass_AElite5GameModeBase_NoRegister();
	ELITE5_API UClass* Z_Construct_UClass_AElite5GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Elite5();
// End Cross Module References
	void AElite5GameModeBase::StaticRegisterNativesAElite5GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AElite5GameModeBase);
	UClass* Z_Construct_UClass_AElite5GameModeBase_NoRegister()
	{
		return AElite5GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AElite5GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AElite5GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Elite5,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElite5GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Elite5GameModeBase.h" },
		{ "ModuleRelativePath", "Elite5GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AElite5GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElite5GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AElite5GameModeBase_Statics::ClassParams = {
		&AElite5GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AElite5GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AElite5GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AElite5GameModeBase()
	{
		if (!Z_Registration_Info_UClass_AElite5GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AElite5GameModeBase.OuterSingleton, Z_Construct_UClass_AElite5GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AElite5GameModeBase.OuterSingleton;
	}
	template<> ELITE5_API UClass* StaticClass<AElite5GameModeBase>()
	{
		return AElite5GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AElite5GameModeBase);
	struct Z_CompiledInDeferFile_FID_Elite5_Source_Elite5_Elite5GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Elite5_Source_Elite5_Elite5GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AElite5GameModeBase, AElite5GameModeBase::StaticClass, TEXT("AElite5GameModeBase"), &Z_Registration_Info_UClass_AElite5GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AElite5GameModeBase), 451550045U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Elite5_Source_Elite5_Elite5GameModeBase_h_353504509(TEXT("/Script/Elite5"),
		Z_CompiledInDeferFile_FID_Elite5_Source_Elite5_Elite5GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Elite5_Source_Elite5_Elite5GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

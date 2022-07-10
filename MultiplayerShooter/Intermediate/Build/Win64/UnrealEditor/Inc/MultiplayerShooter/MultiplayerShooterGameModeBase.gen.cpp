// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerShooter/MultiplayerShooterGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerShooterGameModeBase() {}
// Cross Module References
	MULTIPLAYERSHOOTER_API UClass* Z_Construct_UClass_AMultiplayerShooterGameModeBase_NoRegister();
	MULTIPLAYERSHOOTER_API UClass* Z_Construct_UClass_AMultiplayerShooterGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MultiplayerShooter();
// End Cross Module References
	void AMultiplayerShooterGameModeBase::StaticRegisterNativesAMultiplayerShooterGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiplayerShooterGameModeBase);
	UClass* Z_Construct_UClass_AMultiplayerShooterGameModeBase_NoRegister()
	{
		return AMultiplayerShooterGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMultiplayerShooterGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiplayerShooterGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerShooterGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MultiplayerShooterGameModeBase.h" },
		{ "ModuleRelativePath", "MultiplayerShooterGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiplayerShooterGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerShooterGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerShooterGameModeBase_Statics::ClassParams = {
		&AMultiplayerShooterGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMultiplayerShooterGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerShooterGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMultiplayerShooterGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AMultiplayerShooterGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiplayerShooterGameModeBase.OuterSingleton, Z_Construct_UClass_AMultiplayerShooterGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMultiplayerShooterGameModeBase.OuterSingleton;
	}
	template<> MULTIPLAYERSHOOTER_API UClass* StaticClass<AMultiplayerShooterGameModeBase>()
	{
		return AMultiplayerShooterGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerShooterGameModeBase);
	struct Z_CompiledInDeferFile_FID_MultiplayerShooter_Source_MultiplayerShooter_MultiplayerShooterGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerShooter_Source_MultiplayerShooter_MultiplayerShooterGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMultiplayerShooterGameModeBase, AMultiplayerShooterGameModeBase::StaticClass, TEXT("AMultiplayerShooterGameModeBase"), &Z_Registration_Info_UClass_AMultiplayerShooterGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayerShooterGameModeBase), 908130698U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerShooter_Source_MultiplayerShooter_MultiplayerShooterGameModeBase_h_433317393(TEXT("/Script/MultiplayerShooter"),
		Z_CompiledInDeferFile_FID_MultiplayerShooter_Source_MultiplayerShooter_MultiplayerShooterGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerShooter_Source_MultiplayerShooter_MultiplayerShooterGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

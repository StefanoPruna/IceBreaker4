// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IceBreaker5/Public/StefanoCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStefanoCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ICEBREAKER5_API UClass* Z_Construct_UClass_AStefanoCharacter();
ICEBREAKER5_API UClass* Z_Construct_UClass_AStefanoCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_IceBreaker5();
// End Cross Module References

// Begin Class AStefanoCharacter
void AStefanoCharacter::StaticRegisterNativesAStefanoCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStefanoCharacter);
UClass* Z_Construct_UClass_AStefanoCharacter_NoRegister()
{
	return AStefanoCharacter::StaticClass();
}
struct Z_Construct_UClass_AStefanoCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "StefanoCharacter.h" },
		{ "ModuleRelativePath", "Public/StefanoCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStefanoCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AStefanoCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_IceBreaker5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStefanoCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStefanoCharacter_Statics::ClassParams = {
	&AStefanoCharacter::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStefanoCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AStefanoCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStefanoCharacter()
{
	if (!Z_Registration_Info_UClass_AStefanoCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStefanoCharacter.OuterSingleton, Z_Construct_UClass_AStefanoCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStefanoCharacter.OuterSingleton;
}
template<> ICEBREAKER5_API UClass* StaticClass<AStefanoCharacter>()
{
	return AStefanoCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStefanoCharacter);
AStefanoCharacter::~AStefanoCharacter() {}
// End Class AStefanoCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_IceBreaker4_IceBreaker5_Source_IceBreaker5_Public_StefanoCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStefanoCharacter, AStefanoCharacter::StaticClass, TEXT("AStefanoCharacter"), &Z_Registration_Info_UClass_AStefanoCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStefanoCharacter), 2919688635U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_IceBreaker4_IceBreaker5_Source_IceBreaker5_Public_StefanoCharacter_h_4105974399(TEXT("/Script/IceBreaker5"),
	Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_IceBreaker4_IceBreaker5_Source_IceBreaker5_Public_StefanoCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_IceBreaker4_IceBreaker5_Source_IceBreaker5_Public_StefanoCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

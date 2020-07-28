// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EIG_Plugin/Public/EIGBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIGBlueprintFunctionLibrary() {}
// Cross Module References
	EIG_PLUGIN_API UClass* Z_Construct_UClass_UEIGBlueprintFunctionLibrary_NoRegister();
	EIG_PLUGIN_API UClass* Z_Construct_UClass_UEIGBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EIG_Plugin();
// End Cross Module References
	DEFINE_FUNCTION(UEIGBlueprintFunctionLibrary::execSaveArrayToTxt)
	{
		P_GET_TARRAY(FString,Z_Param_SaveText);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEIGBlueprintFunctionLibrary::SaveArrayToTxt(Z_Param_SaveText,Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIGBlueprintFunctionLibrary::execLoadTxtToArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_TARRAY_REF(FString,Z_Param_Out_SaveText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEIGBlueprintFunctionLibrary::LoadTxtToArray(Z_Param_FileName,Z_Param_Out_SaveText);
		P_NATIVE_END;
	}
	void UEIGBlueprintFunctionLibrary::StaticRegisterNativesUEIGBlueprintFunctionLibrary()
	{
		UClass* Class = UEIGBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadTxtToArray", &UEIGBlueprintFunctionLibrary::execLoadTxtToArray },
			{ "SaveArrayToTxt", &UEIGBlueprintFunctionLibrary::execSaveArrayToTxt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_LoadTxtToArray_Statics
	{
		struct EIGBlueprintFunctionLibrary_eventLoadTxtToArray_Parms
		{
			FString FileName;
			TArray<FString> SaveText;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SaveText;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveText_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_LoadTxtToArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EIGBlueprintFunctionLibrary_eventLoadTxtToArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_LoadTxtToArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EIGBlueprintFunctionLibrary_eventLoadTxtToArray_Parms), &Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_LoadTxtToArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_LoadTxtToArray_Statics::NewProp_SaveText = { "SaveText", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EIGBlueprintFunctionLibrary_eventLoadTxtToArray_Parms, SaveText), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_LoadTxtToArray_Statics::NewProp_SaveText_Inner = { "SaveText", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_LoadTxtToArray_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EIGBlueprintFunctionLibrary_eventLoadTxtToArray_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_LoadTxtToArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_LoadTxtToArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_LoadTxtToArray_Statics::NewProp_SaveText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_LoadTxtToArray_Statics::NewProp_SaveText_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_LoadTxtToArray_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_LoadTxtToArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EIGBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_LoadTxtToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIGBlueprintFunctionLibrary, nullptr, "LoadTxtToArray", nullptr, nullptr, sizeof(EIGBlueprintFunctionLibrary_eventLoadTxtToArray_Parms), Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_LoadTxtToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_LoadTxtToArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_LoadTxtToArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_LoadTxtToArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_LoadTxtToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_LoadTxtToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_SaveArrayToTxt_Statics
	{
		struct EIGBlueprintFunctionLibrary_eventSaveArrayToTxt_Parms
		{
			TArray<FString> SaveText;
			FString FileName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SaveText;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveText_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_SaveArrayToTxt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EIGBlueprintFunctionLibrary_eventSaveArrayToTxt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_SaveArrayToTxt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EIGBlueprintFunctionLibrary_eventSaveArrayToTxt_Parms), &Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_SaveArrayToTxt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_SaveArrayToTxt_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EIGBlueprintFunctionLibrary_eventSaveArrayToTxt_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_SaveArrayToTxt_Statics::NewProp_SaveText = { "SaveText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EIGBlueprintFunctionLibrary_eventSaveArrayToTxt_Parms, SaveText), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_SaveArrayToTxt_Statics::NewProp_SaveText_Inner = { "SaveText", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_SaveArrayToTxt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_SaveArrayToTxt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_SaveArrayToTxt_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_SaveArrayToTxt_Statics::NewProp_SaveText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_SaveArrayToTxt_Statics::NewProp_SaveText_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_SaveArrayToTxt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EIGBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_SaveArrayToTxt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIGBlueprintFunctionLibrary, nullptr, "SaveArrayToTxt", nullptr, nullptr, sizeof(EIGBlueprintFunctionLibrary_eventSaveArrayToTxt_Parms), Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_SaveArrayToTxt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_SaveArrayToTxt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_SaveArrayToTxt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_SaveArrayToTxt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_SaveArrayToTxt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_SaveArrayToTxt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEIGBlueprintFunctionLibrary_NoRegister()
	{
		return UEIGBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEIGBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEIGBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EIG_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEIGBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_LoadTxtToArray, "LoadTxtToArray" }, // 3771535087
		{ &Z_Construct_UFunction_UEIGBlueprintFunctionLibrary_SaveArrayToTxt, "SaveArrayToTxt" }, // 2194226684
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIGBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EIGBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/EIGBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEIGBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIGBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEIGBlueprintFunctionLibrary_Statics::ClassParams = {
		&UEIGBlueprintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEIGBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEIGBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEIGBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEIGBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEIGBlueprintFunctionLibrary, 2405058674);
	template<> EIG_PLUGIN_API UClass* StaticClass<UEIGBlueprintFunctionLibrary>()
	{
		return UEIGBlueprintFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEIGBlueprintFunctionLibrary(Z_Construct_UClass_UEIGBlueprintFunctionLibrary, &UEIGBlueprintFunctionLibrary::StaticClass, TEXT("/Script/EIG_Plugin"), TEXT("UEIGBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEIGBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

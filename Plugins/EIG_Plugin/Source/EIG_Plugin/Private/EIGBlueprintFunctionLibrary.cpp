// Fill out your copyright notice in the Description page of Project Settings.


#include "EIGBlueprintFunctionLibrary.h"

bool UEIGBlueprintFunctionLibrary::LoadTxtToArray(FString FileName, TArray<FString> & SaveText)
{
	if (!*(FPaths::ProjectSavedDir() + FileName))
	{
		return false;
	}

	return FFileHelper::LoadFileToStringArray(SaveText, *(FPaths::ProjectSavedDir() + FileName));
}


bool UEIGBlueprintFunctionLibrary::SaveArrayToTxt(TArray<FString> SaveText, FString FileName)
{
	return FFileHelper::SaveStringArrayToFile(SaveText, *(FPaths::ProjectSavedDir() + FileName));
}

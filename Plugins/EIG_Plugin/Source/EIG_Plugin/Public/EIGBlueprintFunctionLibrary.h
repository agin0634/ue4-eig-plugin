// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"
#include "EIGBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class EIG_PLUGIN_API UEIGBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static bool LoadTxtToArray(FString FileName, TArray<FString> & SaveText);

	UFUNCTION(BlueprintCallable)
	static bool SaveArrayToTxt(TArray<FString> SaveText, FString FileName);
	
};

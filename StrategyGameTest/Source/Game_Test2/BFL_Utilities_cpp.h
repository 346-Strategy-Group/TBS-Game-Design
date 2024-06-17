// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BFL_Utilities_cpp.generated.h"

/**
 * 
 */
UCLASS()
class GAME_TEST2_API UBFL_Utilities_cpp : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable,Category="UtilityLibrary")
	static bool Is_FNum_Even(float num);
};

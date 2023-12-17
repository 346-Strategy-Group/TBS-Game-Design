// Fill out your copyright notice in the Description page of Project Settings.


#include "BFL_Utilities_cpp.h"

bool UBFL_Utilities_cpp::Is_FNum_Even(float num)
{
	if (int(num + 0.5) % 2 == 0)
		return 1;
	else
		return 0;
}


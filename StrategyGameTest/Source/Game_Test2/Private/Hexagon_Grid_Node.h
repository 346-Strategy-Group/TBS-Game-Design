// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Grid_Node.h"
#include "Hexagon_Grid_Node.generated.h"

/**
 * 
 */
UCLASS()
class UHexagon_Grid_Node : public UGrid_Node
{
	GENERATED_BODY()
	
public:

	UHexagon_Grid_Node();

	/*毗邻棋格*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)//↗
		UHexagon_Grid_Node* RightUpNode;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)//→
		UHexagon_Grid_Node* RightNode;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)//↘
		UHexagon_Grid_Node* RightBottomNode;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)//↙
		UHexagon_Grid_Node* LeftBottomNode;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)//←
		UHexagon_Grid_Node* LeftNode;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)//↖
		UHexagon_Grid_Node* LeftUpNode;

	//获取相邻棋格
	virtual TArray<UGrid_Node*> Get_Neighbors() override;

	//获取真实的相邻地块的距离
	virtual float Get_RealNeiborDst() const override { /*补充*/return Size; }

	//
};

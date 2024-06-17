// Fill out your copyright notice in the Description page of Project Settings.


#include "Grid_Node.h"
#include "Grid_Map.h"

//初始化
void UGrid_Node::Init_Node(AGrid_Map* InMap, FVector InLocation, FGrid_Coord InCoord, float InSize)
{
	GridMap = InMap;
	Coord = InCoord;
	Location = InLocation;
	Size = InSize;
}

//获取相邻棋格
TArray<UGrid_Node*> UGrid_Node::Get_Neighbors()
{
	TArray<UGrid_Node*> A;
	return A;
}

//判断棋格是否可以通行
bool UGrid_Node::IsPassable(AActor* InActor) const {

	if (PassFlag == ENode_PassFlag::Block)
		return false;

	/*还要判断格子中有无单位*/

	return true;

}

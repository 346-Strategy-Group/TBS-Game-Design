// Fill out your copyright notice in the Description page of Project Settings.


#include "Grid_Node.h"
#include "Grid_Map.h"

//��ʼ��
void UGrid_Node::Init_Node(AGrid_Map* InMap, FVector InLocation, FGrid_Coord InCoord, float InSize)
{
	GridMap = InMap;
	Coord = InCoord;
	Location = InLocation;
	Size = InSize;
}

//��ȡ�������
TArray<UGrid_Node*> UGrid_Node::Get_Neighbors()
{
	TArray<UGrid_Node*> A;
	return A;
}

//�ж�����Ƿ����ͨ��
bool UGrid_Node::IsPassable(AActor* InActor) const {

	if (PassFlag == ENode_PassFlag::Block)
		return false;

	/*��Ҫ�жϸ��������޵�λ*/

	return true;

}

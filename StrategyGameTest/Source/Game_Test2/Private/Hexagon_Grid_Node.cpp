// Fill out your copyright notice in the Description page of Project Settings.


#include "Hexagon_Grid_Node.h"

UHexagon_Grid_Node::UHexagon_Grid_Node()//����
{
	NodeType = EGrid_Type::Hexagon;
}

//��ȡ���ڵ����
TArray<UGrid_Node*> UHexagon_Grid_Node::Get_Neighbors()
{
	TArray<UGrid_Node*> NNodes;
	if (RightUpNode)
		NNodes.Add(RightUpNode);
	if (RightNode)
		NNodes.Add(RightNode);
	if (RightBottomNode)
		NNodes.Add(RightBottomNode);
	if (LeftBottomNode)
		NNodes.Add(LeftBottomNode);
	if (LeftNode)
		NNodes.Add(LeftNode);
	if (LeftUpNode)
		NNodes.Add(LeftUpNode);
	return NNodes;
}
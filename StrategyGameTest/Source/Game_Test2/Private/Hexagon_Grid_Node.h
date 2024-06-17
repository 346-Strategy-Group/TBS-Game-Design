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

	/*�������*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)//�J
		UHexagon_Grid_Node* RightUpNode;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)//��
		UHexagon_Grid_Node* RightNode;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)//�K
		UHexagon_Grid_Node* RightBottomNode;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)//�L
		UHexagon_Grid_Node* LeftBottomNode;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)//��
		UHexagon_Grid_Node* LeftNode;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)//�I
		UHexagon_Grid_Node* LeftUpNode;

	//��ȡ�������
	virtual TArray<UGrid_Node*> Get_Neighbors() override;

	//��ȡ��ʵ�����ڵؿ�ľ���
	virtual float Get_RealNeiborDst() const override { /*����*/return Size; }

	//
};

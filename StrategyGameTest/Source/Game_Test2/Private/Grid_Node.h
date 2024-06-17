// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Grid_Node.generated.h"

class AGrid_Map;
class AActor;

USTRUCT(BlueprintType)
struct FGrid_Coord {

public:
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int X;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Y;

	FGrid_Coord() {}
	FGrid_Coord(int x, int y) :X(x), Y(y) {}

	//����������TMap�еĹ淶
	FORCEINLINE friend bool operator==(const FGrid_Coord& lhs, const FGrid_Coord& rhs) {
		return (lhs.X == rhs.X) && (lhs.Y == rhs.Y);
	}

	//���������+
	FGrid_Coord operator+ (const FGrid_Coord& C) {
		return FGrid_Coord(X + C.X, Y + C.Y);
	}
};

//GetTypeHash������TMap��Key�Ĺ淶
FORCEINLINE uint32 GetTypeHash(const FGrid_Coord& Key)
{
	return HashCombine(GetTypeHash(Key.X), GetTypeHash(Key.Y));
}

/*�����״*/
UENUM(BlueprintType)
enum class EGrid_Type : uint8
{
	None,
	Square,
	Hexagon,
	Triangle,
};

/*���״̬*/
UENUM(BlueprintType)
enum class ENode_PassFlag : uint8
{
	Pass,
	Block,
};


/**
 * 
 */
UCLASS()
class UGrid_Node : public UObject
{
	GENERATED_BODY()
	
public:
	//����ռ�����
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Location;

	//�����е�������
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGrid_Coord Coord;

	//����С
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Size;

	//�����״
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGrid_Type NodeType = EGrid_Type::None;

	//��������
	UPROPERTY(BlueprintReadWrite)
	AGrid_Map* GridMap;

	//��ʼ��
	UFUNCTION(BlueprintCallable)
	virtual void Init_Node(AGrid_Map* InMap, FVector InLocation, FGrid_Coord InCoord, float InSize);

	//����-��ȡ�������
	UFUNCTION(BlueprintCallable)
	virtual TArray<UGrid_Node*> Get_Neighbors();

	/*Ѱ·��س�Ա*/
	//��ǰ��㣨��������
	UGrid_Node* Pre;

	//ͨ��״̬
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Navigation")
	ENode_PassFlag PassFlag = ENode_PassFlag::Pass;

	//�ж�����Ƿ���ͨ��
	UFUNCTION(BlueprintCallable, Category = "Navigation")
	virtual bool IsPassable(AActor* InActor) const;

	//Ѱ·-��ȡ��������ʵ�ʾ���
	UFUNCTION(BlueprintCallable)
	virtual float Get_RealNeiborDst() const { return Size; }
};

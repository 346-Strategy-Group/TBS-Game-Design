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

	//用于适用于TMap中的规范
	FORCEINLINE friend bool operator==(const FGrid_Coord& lhs, const FGrid_Coord& rhs) {
		return (lhs.X == rhs.X) && (lhs.Y == rhs.Y);
	}

	//重载运算符+
	FGrid_Coord operator+ (const FGrid_Coord& C) {
		return FGrid_Coord(X + C.X, Y + C.Y);
	}
};

//GetTypeHash，满足TMap中Key的规范
FORCEINLINE uint32 GetTypeHash(const FGrid_Coord& Key)
{
	return HashCombine(GetTypeHash(Key.X), GetTypeHash(Key.Y));
}

/*棋格形状*/
UENUM(BlueprintType)
enum class EGrid_Type : uint8
{
	None,
	Square,
	Hexagon,
	Triangle,
};

/*棋格状态*/
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
	//世界空间坐标
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Location;

	//棋盘中的坐标编号
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGrid_Coord Coord;

	//棋格大小
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Size;

	//棋格形状
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGrid_Type NodeType = EGrid_Type::None;

	//所属棋盘
	UPROPERTY(BlueprintReadWrite)
	AGrid_Map* GridMap;

	//初始化
	UFUNCTION(BlueprintCallable)
	virtual void Init_Node(AGrid_Map* InMap, FVector InLocation, FGrid_Coord InCoord, float InSize);

	//基础-获取相邻棋格
	UFUNCTION(BlueprintCallable)
	virtual TArray<UGrid_Node*> Get_Neighbors();

	/*寻路相关成员*/
	//先前结点（可做链表）
	UGrid_Node* Pre;

	//通行状态
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Navigation")
	ENode_PassFlag PassFlag = ENode_PassFlag::Pass;

	//判断棋格是否能通行
	UFUNCTION(BlueprintCallable, Category = "Navigation")
	virtual bool IsPassable(AActor* InActor) const;

	//寻路-获取两两棋格的实际距离
	UFUNCTION(BlueprintCallable)
	virtual float Get_RealNeiborDst() const { return Size; }
};

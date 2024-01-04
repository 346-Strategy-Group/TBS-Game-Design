#include "NativizedAssets.h"
#include "E_Grid_Shape__pf3764965557.h"
FText E__E_Grid_Shape__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_Grid_Shape__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_Grid_Shape__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[E3552FF74C7AD95BB0F6CD8113C5520B]\", \"6AF93C1A40FA7438E95023B59FCD36F8\", \"None\")"), Text); break;
		case E__E_Grid_Shape__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[E3552FF74C7AD95BB0F6CD8113C5520B]\", \"221568FA4802B47C53F3E384EE70670D\", \"Square\")"), Text); break;
		case E__E_Grid_Shape__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[E3552FF74C7AD95BB0F6CD8113C5520B]\", \"8116A0BD438F1608535AEC9EB3A84704\", \"Hexagon\")"), Text); break;
		case E__E_Grid_Shape__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[E3552FF74C7AD95BB0F6CD8113C5520B]\", \"356782364877B04151F637803CEC719B\", \"Triangle\")"), Text); break;
		case E__E_Grid_Shape__pf::E__E_Grid_Shape__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E Grid MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};

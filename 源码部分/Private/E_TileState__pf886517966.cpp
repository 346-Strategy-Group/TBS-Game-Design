#include "NativizedAssets.h"
#include "E_TileState__pf886517966.h"
FText E__E_TileState__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_TileState__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_TileState__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[5DD7A5BC4CBE77DBC281028C193F29EC]\", \"6EE66E074FE251266060E1BD9A217FF2\", \"None\")"), Text); break;
		case E__E_TileState__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[5DD7A5BC4CBE77DBC281028C193F29EC]\", \"51749AA4433AFD909CADAC9577E9D50C\", \"Hovered\")"), Text); break;
		case E__E_TileState__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[5DD7A5BC4CBE77DBC281028C193F29EC]\", \"C776A64B4CAA3C8961080C8F4BFE2A53\", \"Selected\")"), Text); break;
		case E__E_TileState__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[5DD7A5BC4CBE77DBC281028C193F29EC]\", \"D77D40574C71310C920C09A390D0D5ED\", \"Path\")"), Text); break;
		case E__E_TileState__pf::E__E_TileState__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};

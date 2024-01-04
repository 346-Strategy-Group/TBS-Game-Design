#include "NativizedAssets.h"
#include "E_TileType__pf886517966.h"
FText E__E_TileType__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_TileType__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_TileType__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[0956B90F4A3CAE416F4BF1A05BFBBF35]\", \"7266373B42557F8EAEC6AF8899D1520E\", \"None\")"), Text); break;
		case E__E_TileType__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[0956B90F4A3CAE416F4BF1A05BFBBF35]\", \"3209875040E94043EF9AB59F674A1027\", \"Normal\")"), Text); break;
		case E__E_TileType__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[0956B90F4A3CAE416F4BF1A05BFBBF35]\", \"63615B0043FC4B936E7138922937A0C0\", \"Obstacle\")"), Text); break;
		case E__E_TileType__pf::E__E_TileType__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};

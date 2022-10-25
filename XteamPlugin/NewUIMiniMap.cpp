#include "StdAfx.h"
#include "Util.h"
#include "NewUIMiniMap.h"

CNewUIMiniMap g_pNewMiniMap;
POINT Coord;
POINT SendCoord;
POINT CurZone = { 0, 0 };
BYTE GRadius = 0;
bool Movement = 0;

CNewUIMiniMap::CNewUIMiniMap(void)
{
}

CNewUIMiniMap::~CNewUIMiniMap(void)
{
}

void MoveCoordSend(int px, int py)
{
	if (*(BYTE*)(Hero + 780))
	{
		TargetX = px;
		TargetY = py;
		int Wall;
		Wall = TW_NOGROUND;
		WORD* TerrainWall = (WORD*)0x82C6AA0;
		WORD CurrAtt = TerrainWall[TargetX + (TargetY << 8)];
		//OBJECT* o = (OBJECT*)Hero + 776;

		DontMove = (signed int)CurrAtt >= 8 && !(CurrAtt & 0x20) && !(CurrAtt & 0x40);

		if (((*(DWORD*)(Hero + 172)) != TargetX || (*(DWORD*)(Hero + 176)) != TargetY || !*(BYTE*)(Hero + 120)) &&
			PathFinding2(*(DWORD*)(Hero + 172), *(DWORD*)(Hero + 176), TargetX, TargetY, Hero + 628, 0.0, 2))
		{
			//--
			int o = Hero + 776;
			*(BYTE*)(Hero + 121) = MOVEMENT_MOVE;
			Movement = true;
			SendMove(Hero, o);
			//--
		}
	}
}

bool CNewUIMiniMap::UpdateMouseEvent(UIMiniMap* thisa)
{
	bool ret = true;

	if (pCheckInMouse(thisa->m_Pos.x, thisa->m_Pos.y, thisa->m_Width.x, thisa->m_Width.y))
	{
		int x = (MouseX - thisa->m_Pos.x) + 1;
		int y = (MouseY - thisa->m_Pos.y) + 1;

		Coord.x = x / 1.6796875f;
		Coord.y = 256.0 - (y / 1.6796875f);

		if (IsPress(VK_LBUTTON))
		{
			WORD* TerrainWall = (WORD*)0x82C6AA0;
			int iTerrainIndex = TERRAIN_INDEX(Coord.x, Coord.y);
			if (!(TerrainWall[iTerrainIndex] & TW_NOMOVE))
			{
				SendCoord = Coord;
				MoveCoordSend(Coord.x, Coord.y);
			}
		}
		return false;
	}

	return ret;
}

void CalcStopTime()
{
	if (*(BYTE*)(Hero + 36) == 0)
	{
		if (Movement && *(BYTE*)(Hero + 120) == 0)
		{
			if (PathFinding2(*(DWORD*)(Hero + 172), *(DWORD*)(Hero + 176), SendCoord.x, SendCoord.y, Hero + 628, 0.0f, 2))
			{
				*(BYTE*)(Hero + 121) = MOVEMENT_MOVE;
				SendMove(Hero, Hero + 776);
				Movement = true;
			}
			else
			{
				Movement = false;
			}
		}
	}
	else
	{
		Movement = false;
	}
	((void(__cdecl*)()) 0x00559290)();
}

void CNewUIMiniMap::Init()
{
	SetCompleteHook(0xE8, 0x0055B02B, &CalcStopTime); //ok
	SetCompleteHook(0xE9, 0x0082B6F0, &CNewUIMiniMap::UpdateMouseEvent); //ok
}
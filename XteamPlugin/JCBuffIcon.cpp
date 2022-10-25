#include "stdafx.h"
#include "JCBuffIcon.h"
#include "Offset.h"
#include "Util.h"
#include "Import.h"

JCBuff JCBufIcon;


float Return2X(float num)
{
	return (float)num / pWinWidthReal;
}

float TransForX(float num)
{
	return (float)(pWinWidthReal <= 1.25) ? num * pWinWidthReal : num * pWinHeightReal;
}

//----- (00777EB0) --------------------------------------------------------
void sub_777EB0(int IconBuff, float x, float y, float w, float h)
{
	float JCWidth;
	float JCHeight;
	float JCPageSkill;
	int v8; // ST3C_4@4
	float v9; // ST4C_4@4
	float v10; // ST50_4@4
	float v11; // ST34_4@4
	float v12; // ST30_4@4
	int v15; // [sp+10h] [bp-6Ch]@1

	v15 = *(DWORD*)(Instance() + 200);

	for (int v27 = 1; v27 < 8; v27++)
	{
		if (x == (double)*(signed int*)(v15 + 16) + (double)v27 * (20.0 + 5.0))
		{
			x -= v27 * 5.0f;
		}
	}

	for (int v33 = 1; v33 < 2; v33++)
	{
		if (y == (double)*(signed int*)(v15 + 20) + (double)v33 * (28.0 + 5.0))
		{
			y -= v33 * 9.0f;
		}
	}

	JCPageSkill = (double)((256.0f / 100) * 75.0f);
	JCHeight = 21;
	JCWidth = 15;

	if (*(DWORD*)IconBuff > 0 && *(DWORD*)IconBuff < 170)
	{
		v8 = (*(DWORD*)IconBuff - 1) % 80;
		v9 = (double)(v8 % 10) * JCWidth / JCPageSkill;
		v10 = (double)(v8 / 10) * JCHeight / JCPageSkill;
		v11 = JCHeight / JCPageSkill;
		v12 = JCWidth / JCPageSkill;

		RenderBitmap((*(DWORD*)IconBuff - 1) / 80 + 31725, x, y, Return2X(TransForX(JCWidth)), JCHeight, v9, v10, v12, v11, 1, 1, 0.0);
	}
}

bool pCheckIconBuff(int x, int y, int w, int h)
{
	int BuffPointer; // [sp+10h] [bp-6Ch]@1
	int v15; // [sp+10h] [bp-6Ch]@1
	int JCWidth;
	int JCHeight;

	JCHeight = 21;
	JCWidth = Return2X(TransForX(15));

	v15 = *(DWORD*)(Instance() + 200);

	for (int v27 = 1; v27 < 8; v27++)
	{
		if (x == *(signed int*)(v15 + 16) + (double)v27 * (20.0 + 5.0))
		{
			x -= v27 * 5.0f;
		}
	}

	for (int v33 = 1; v33 < 2; v33++)
	{
		if (y == *(signed int*)(v15 + 20) + (double)v33 * (28.0 + 5.0))
		{
			y -= v33 * 9.0f;
		}
	}

	return pCheckMouseOver(x, y, JCWidth, JCHeight);
}

void JCBuff::Load()
{
	SetCompleteHook(0xE8, 0x00777E06, &pCheckIconBuff); //-- BuffTooltip
	SetCompleteHook(0xE8, 0x00777A26, &pCheckIconBuff); //-- Disable Buff
	SetCompleteHook(0xE8, 0x00777DC8, &sub_777EB0); //-- IconBuff
}
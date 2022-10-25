#pragma once
#define Instance ((int(__cdecl*)()) 0x00861110)
#define pCheckMouseOver				((bool(__cdecl*)(int a1, int a2, int a3, int a4)) 0x00790B10)
#define RenderBitmap		((void(__cdecl*)(int a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, char a10, char a11, float a12)) 0x00637C60)


class JCBuff
{
public:
	void Load();
};

extern JCBuff JCBufIcon;
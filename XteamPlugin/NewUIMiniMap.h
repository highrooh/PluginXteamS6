#pragma once
#define MAX_MINI_MAP_DATA		100
typedef char MINI_MAP[116];

typedef struct
{
	char		byClass[12];	//-- +0
	char		m_TooltipText[28];	//-- +12
	DWORD		m_hToolTipFont;	//-- +40
	DWORD		m_TooltipTextColor;	//-- +44
	DWORD* m_pNewUIMng;	//-- +48
	POINT		m_Pos;			//-- +52
	POINT		m_Width;		//-- +60
	POINT		m_MiniWidth;	//-- +68
	POINT		m_Lenth[6];		//-- +76
	int			m_MiniPos;		//-- +124
	char		m_BtnExit[172];	//-- +128
	MINI_MAP	m_Mini_Map_Data[MAX_MINI_MAP_DATA]; //-- +300
	float		m_Btn_Loc[MAX_MINI_MAP_DATA][4]; //-- 11900
	bool		m_bSuccess; //-- 13500
}UIMiniMap;

#define MOVEMENT_MOVE    				0
#define MOVEMENT_GET     				1
#define MOVEMENT_TALK    				2
#define MOVEMENT_ATTACK  				3
#define MOVEMENT_OPERATE 				4
#define MOVEMENT_SKILL	 				5
#define TW_SAFEZONE						( 0x0001)
#define TW_SAFEZONE						( 0x0001)
#define TW_CHARACTER					( 0x0002)
#define TW_NOMOVE						( 0x0004)
#define TW_NOGROUND						( 0x0008)
#define TW_WATER						( 0x0010)
#define TW_ACTION						( 0x0020)
#define TW_HEIGHT						( 0x0040)
#define TW_CAMERA_UP					( 0x0080)
#define TW_NOATTACKZONE					( 0x0100)
#define TW_ATT1							( 0x0200)
#define TW_ATT2							( 0x0400)
#define TW_ATT3							( 0x0800)
#define TW_ATT4							( 0x1000)
#define TW_ATT5							( 0x2000)
#define TW_ATT6							( 0x4000)
#define TW_ATT7							( 0x8000)
#define TargetX							*(DWORD*)0x81C038C
#define TargetY							*(DWORD*)0x81C0388
#define DontMove						*(bool*)0x81C03AA
#define Hero							*(DWORD*)0x7BC4F04
#define MouseX							*(int*)0x879340C
#define MouseY							*(int*)0x8793410
#define SendMove						((bool(__cdecl*)(int c, int o)) 0x005A3C70)
#define PathFinding2					((bool(__cdecl*)(int sx,int sy,int tx,int ty, int a, float fDistance, int iDefaultWall)) 0x00542D20)
#define HeroKey							*(int*)0x87935A8
#define CRenderBitRotate				((void(__cdecl*)(int Texture,float x,float y,float Width,float Height,float Rotate)) 0x00638130)
#define BtnUpdateMouseEvent				((bool(__thiscall*)(BYTE *thisa)) 0x00779860)
#define Check_Mouse						((bool(__stdcall*)(int a1, int a2)) 0x0082B790)
#define EnableAlphaTest					((void(__cdecl*)(BYTE Mode)) 0x00635FD0)
#define EndRenderColor					((void(__cdecl*)())0x00637A30)
#define RenderColor						((void(__cdecl*)(float x,float y,float Width,float Height, float Alpha, int Flag)) 0x006378A0)
#define CRenderBitmaps					((void(__cdecl*)(int Texture,float x,float y,float Width,float Height,float u,float v,float uWidth,float vHeight,bool Scale,bool StartScale,float Alpha)) 0x00637C60)
#define pCheckInMouse					((bool(__cdecl*)(int x, int y, int w, int h)) 0x00790B10)
#define IsPress							((bool  (__cdecl*)(int iVirtKey))0x00791070)
#define TERRAIN_INDEX			((int(__cdecl*)(int x,int y)) 0x005D66F0)


class CNewUIMiniMap
{
public:
	CNewUIMiniMap(void);
	virtual ~CNewUIMiniMap(void);
	void Init();
	bool __thiscall Render(UIMiniMap* thisa);
	bool __thiscall UpdateMouseEvent(UIMiniMap* thisa);
};

extern CNewUIMiniMap g_pNewMiniMap;
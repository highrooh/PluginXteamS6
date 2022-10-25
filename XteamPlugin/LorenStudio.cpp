#include "stdafx.h"
#include "Defines.h"
#include "TMemory.h"
#include "Offset.h"
#include "Import.h"
#include "Util.h"
#include "User.h"
#include "SmokeEffect.h"
#include "AntiLag.h"
#include "LorenStudio.h"
#include "NewUIMiniMap.h"
#include "JCBuffIcon.h"
#include "Wing.h"
#include "CUIMng.h"
#include "HackCheck.h"
#include "Protect.h"
#include "SpeedHack.h"
#include "SpeedPerfomace.h"
#include "CRC_Arquvios.h"
#include "CRC.h"
#include "Interface.h"
#include "CustomMonster.h"
#include "CustomNpcName.h"
#include "Splash.h"
#include "UITextInputBox.h"

//void ReadFiles()
//{
//
//
//	HMODULE hModule = LoadLibraryA("logintheme.dll");
//
//	void (*EntryProc)(char*) = ((void(*)(char*))GetProcAddress(hModule, "ArkanBattle"));
//
//	if (EntryProc)
//	{
//		//choose one
//		//EntryProc("EX700");
//		//EntryProc("SS2");
//	}
//}


void MainThread() {    
	CSplash splash(TEXT(".\\ArkanCustom\\ArkanSplash.bmp"), RGB(128, 128, 128));    splash.ShowSplash( );    Sleep(2000); //  simulate using a 5 second delay
	splash.CloseSplash( );
}

void WINAPI ReduceConsumeProc() // Reduz o consumo de CPU main.exe
{
	while (true)
	{
		Sleep(5000);
		SetProcessWorkingSetSize(GetCurrentProcess(), 0xFFFFFFFF, 0xFFFFFFFF);
		SetThreadPriority(GetCurrentProcess(), THREAD_PRIORITY_LOWEST);
	}
}

void Load()
{
	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)ReduceConsumeProc, 0, 0, 0);
//
//
//
//	//CUITextInputBox* m_EditBox = new CUITextInputBox;
//	//m_EditBox->Init(g_hWnd, 70, 15, 10);
//	//m_EditBox->SetBackColor(255, 0, 0, 0);
//	//m_EditBox->SetTextColor(255, 255, 230, 210);
//	//m_EditBox->SetFont(g_hFont);
//	//m_EditBox->SetState(UISTATE_NORMAL);
//	//m_EditBox->SetOption(UIOPTION_NUMBERONLY);
//	//m_EditBox->SetPosition(Window_x + 60, Window_y + 100);
//
//	//  Close the splash screen    splash.CloseSplash( );
//	SetCompleteHook(0xE8, 0x005EDDC5, &RenderObjectVisual);
//	//InitAntiLag();
//	////FixEffectCitys();  // ARRUMA O CARV O NA CIDADE
//	SetCompleteHook(0xE9, 0x005880F0, 0x0058811F); //FIX ASA GM BC
//	SetDword(0x00588444 + 3, 4095);
//	////gWings.Load(); // FIX BRILHO ASAS
//	SetFloat((PVOID)(0x00D43220), 10);
//	SetFloat((PVOID)(0x00D43224), 14);
//	SetByte((PVOID)(0x00777E70), 0x16);
//	MemorySet(0x00D20170, 0x90, 0x1B);
//	//SetByte(0x004030D1 + 3, 6);
//	////DOWN S2
//	//SetByte(0x004030D1 + 3, 5);
//	//MemorySet(0x008193F0, 0x90, 0xC8);          //Remove Master Skill Tree Window(A Buttom)
//	//MemorySet(0x007C5AD2, 0x90, 0x05);			//-> Disable Gens (Key B)
//	//MemorySet(0x0085B6AC, 0x90, 0x05);			//-> Remove Helper Top Screen
//	//MemorySet(0x0085CC50, 0x90, 0x05);			//-> Disable Helper (Key Z)
//	//MemorySet(0x007D40A2, 0x90, 0x05);			//-> Disable Helper (Key Home)
//	//SetCompleteHook(0xE8, 0x0059AFFA, 0x0059B00E);
//	//CORREÇÃO
//	//SetFloat(0xD477AC, 0.0); //Fix ItemStack in Itemtoolip/Shop   
//	SetByte((0x0084D1AD + 2), 30); // nombre windows pet en Y
//	SetByte((0x0084A698 + 2), 30); // nombre windows party en Y
//	SetByte((0x007F6738 + 2), 30); // nombre windows helper en Y
//	SetByte((0x007CB8D0 + 2), 30); // nombre windows Guild en Y
//
//
//	if (gProtect.p_RoohInfo.CRCCHECK32 == 1) //habilita o crc32
//	{
//		_beginthread(MainThread, 0, NULL);
//	}
//
//
//	if (gProtect.p_RoohInfo.MHPClient == 1) //habilita o antispee(BETA, ISSO PODE BUGAR UM POUCO)
//	{
//		DetectSpeed();
//		//SPerformance();
//	}
//
//
//
//	if (gProtect.p_RoohInfo.FenrirSafeZone == 1) //Ativa fenrir na safezone
//	{
//		//Fenrir SafeZone (Struct +14)
//		SetByte(0x00501955 + 2, 0);
//		MemorySet(0x0054EAE1, 0x90, 0x06);//SetPlayerStop
//		MemorySet(0x0054FC92, 0x90, 0x06);//SetPlayerWalk
//
//	//Horse SafeZone (Struct +14)
//		SetByte(0x00502269 + 2, 0);
//		MemorySet(0x0054ECA3, 0x90, 0x6);
//		MemorySet(0x0054FCEC, 0x90, 0x6);
//
//		//Dinorant e Uniria (Struct +14)
//		SetByte(0x00502C4B + 2, 0);
//		MemorySet(0x0054ED6D, 0x90, 0x6);
//		MemorySet(0x0054FD5F, 0x90, 0x6);
//		MemorySet(0x0054FE3E, 0x90, 0x6);
//
//		//Raven (Struct +14)
//		MemorySet(0x0054FD23, 0x90, 0x6);
//	}
//
//
//	if (gProtect.p_RoohInfo.RemoveMuError == 1) //Remove o mu error
//	{
//		SetCompleteHook(0xE9, 0x00D20170, 0x00D2018B); //Remove MuError.LOG
//		SetCompleteHook(0xE9, 0x004D1CF0, 0x004D1DC2); //Remoce MuError.DMP
//	}
//
//
//	if (gProtect.p_RoohInfo.PostColor == 1)
//	{
//		SetCompleteHook(0xE9, 0x00788C59, &ChatTextColor); // NOVAS CORES PARA OS POSTS;
//	}
//	
//
//	if (gProtect.p_RoohInfo.FpsMax == 1)
//	{
//			gHackCheck.Load(); // AUMENTAR FPS
//	}
//
//	if (gProtect.p_RoohInfo.NovoLoading == 1)
//	{
//		gCUIMng.Load(); // NOVO LOADING
//	}
//
//	if (gProtect.p_RoohInfo.Effects == 1)
//	{
//		AttachNewEffect();  // EFEITO NOS SETS
//	}
//
//	if (gProtect.p_RoohInfo.MiniMapClick == 1)
//	{
//		g_pNewMiniMap.Init(); // MINI MAPA DO TAB
//	}

}

void Initialize()
{     
	Load();
	//InitAntiLagSystem();

}




__declspec(naked) void FixEffects()
{
	static DWORD Address1 = 0x0062F6CE;
	static DWORD Address2 = 0x0062F69F;

	if (pMapNumber == 0 || pMapNumber == 3)
	{
		_asm {jmp Address1}
	}
	else
	{
		_asm {jmp Address2}
	}
}
void FixEffectCitys()
{
	SetCompleteHook(0xE9, 0x0062F69A, &FixEffects);
}


void SetColorChat(int ChatType)
{
	if (ChatType == 1)
	{
		pSetBackgroundTextColor(pTextThis(), 0, 0, 0, 0x96u);
		pSetTextColor(pTextThis(),gProtect.p_RoohInfo.Rpost, gProtect.p_RoohInfo.Gpost, gProtect.p_RoohInfo.Bpost, 0xFFu);
	}
	else if (ChatType == 2)
	{
		pSetBackgroundTextColor(pTextThis(), 0xFFu, 0xC8u, 0x32u, 0x96u);
		pSetTextColor(pTextThis(), gProtect.p_RoohInfo.Rpost, gProtect.p_RoohInfo.Gpost, gProtect.p_RoohInfo.Bpost, 0xFFu);
	}
	else if (ChatType == 3)
	{
		pSetBackgroundTextColor(pTextThis(), 0, 0, 0, 0x96u);
		pSetTextColor(pTextThis(), gProtect.p_RoohInfo.Rpost, gProtect.p_RoohInfo.Gpost, gProtect.p_RoohInfo.Bpost, 0xFFu);
	}
	else if (ChatType == 4)
	{
		pSetBackgroundTextColor(pTextThis(), 0, 0, 0, 0x96u);
		pSetTextColor(pTextThis(), gProtect.p_RoohInfo.Rpost, gProtect.p_RoohInfo.Gpost, gProtect.p_RoohInfo.Bpost, 0xFFu);
	}
	else if (ChatType == 5) //-- Party
	{
		pSetBackgroundTextColor(pTextThis(), 0, 0, 0, 0x96u);
		pSetTextColor(pTextThis(), gProtect.p_RoohInfo.RParty, gProtect.p_RoohInfo.GParty, gProtect.p_RoohInfo.BParty, 0xFFu);
		pSetFont(pTextThis(), (int)*(HGDIOBJ*)0xE8C58C);
	}
	else if (ChatType == 6) //-- Guild
	{
		pSetBackgroundTextColor(pTextThis(), 0, 0, 0, 0x96u);
		pSetTextColor(pTextThis(), gProtect.p_RoohInfo.RGuild, gProtect.p_RoohInfo.GGuild, gProtect.p_RoohInfo.BGuild, 0xFFu);
		pSetFont(pTextThis(), (int)*(HGDIOBJ*)0xE8C58C);
	}
	else if (ChatType == 7) //-- Guild Alianza
	{
		pSetBackgroundTextColor(pTextThis(), 0, 0, 0, 0x96u);
		pSetTextColor(pTextThis(), gProtect.p_RoohInfo.RGuildA, gProtect.p_RoohInfo.GGuildA, gProtect.p_RoohInfo.BGuildA, 0xFFu);
		pSetFont(pTextThis(), (int)*(HGDIOBJ*)0xE8C58C);
	}
	else if (ChatType == 8) //-- Chat Game Master
	{
		pSetBackgroundTextColor(pTextThis(), 0x1Eu, 0x1Eu, 0x1Eu, 0xC8u);
		pSetTextColor(pTextThis(), gProtect.p_RoohInfo.RGM, gProtect.p_RoohInfo.GGM, gProtect.p_RoohInfo.BGM, 0xFFu);
		pSetFont(pTextThis(), (int)*(HGDIOBJ*)0xE8C58C);
	}
	else if (ChatType == 9) //-- Chat Gens
	{
		pSetBackgroundTextColor(pTextThis(), 0, 0, 0, 0x96u);
		pSetTextColor(pTextThis(), gProtect.p_RoohInfo.RGens, gProtect.p_RoohInfo.GGens, gProtect.p_RoohInfo.BGens, 0xFFu);
		pSetFont(pTextThis(), (int)*(HGDIOBJ*)0xE8C58C);
	}
}

__declspec (naked) void ChatTextColor()
{
	static DWORD main1_Addr = 0x00788F29;
	static DWORD main2_Addr = 0x00788F25;
	static DWORD main1_Call = 0x0078C050;
	static DWORD main_This;

	_asm
	{
		MOV ECX, DWORD PTR SS : [EBP - 0x2C]
		CALL main1_Call
		MOV main_This, EAX
	}

	if (main_This == 1 || main_This == 2
		|| main_This == 3 || main_This == 4
		|| main_This == 5 || main_This == 6
		|| main_This == 7 || main_This == 8
		|| main_This == 9)
	{
		SetColorChat(main_This);

		_asm
		{
			JMP[main1_Addr]
		}
	}
	else
	{
		_asm
		{
			JMP[main2_Addr]
		}
	}
}


void RenderObjectVisual(int a1, int a2)
{
vec3_t Bone;
vec3_t Color;
vec3_t WorldPos;

	if (pMapNumber == 94)
	{  
		switch ( *(DWORD *)(a1 + 48) )   
		{
			case 1:
			{
			BeginRender(1.0);
			*(DWORD *)(a1 + 60) = -2;
			*(BYTE*)(a2 + 136) = 0;
			float v552 = 4000;
			float v551 = ((int) (v552 - *(float*)0x5EF5A1C * 0.75f) % 4001) * 0.0002500000118743628;
			RenderMesh(a2,
			  0,
			  66,
			  *(float *)(a1 + 152),
			  *(DWORD *)(a1 + 68),
			  *(float *)(a1 + 100),
			  *(float *)(a1 + 104),
			  v551,
			  -1);
			*(BYTE*)(a2 + 136) = -1;
			EndRender();
			}
			break;

						case 5:
			{
			BeginRender(1.0);
			*(BYTE*)(a2 + 136) = 0;
            *(float *)(a2 + 72) = 0.44705882352;
            *(float *)(a2 + 76) = 0.44705882352;
            *(float *)(a2 + 80) = 0.22745098039;
			RenderMesh(a2,
			  0,
			  68,
			  *(float *)(a1 + 152),
			  *(DWORD *)(a1 + 68),
			  *(float *)(a1 + 100),
			  *(float *)(a1 + 104),
			  *(float *)(a1 + 108),
			  32042);
			RenderMesh(a2,
			  23,
			  68,
			  *(float *)(a1 + 152),
			  *(DWORD *)(a1 + 68),
			  *(float *)(a1 + 100),
			  *(float *)(a1 + 104),
			  *(float *)(a1 + 108),
			  32042);
			RenderMesh(a2,
			  23,
			  68,
			  *(float *)(a1 + 152),
			  *(DWORD *)(a1 + 68),
			  *(float *)(a1 + 100),
			  *(float *)(a1 + 104),
			  *(float *)(a1 + 108),
			  32042);
			RenderMesh(a2,
			  24,
			  68,
			  *(float *)(a1 + 152),
			  *(DWORD *)(a1 + 68),
			  *(float *)(a1 + 100),
			  *(float *)(a1 + 104),
			  *(float *)(a1 + 108),
			  32042);
			RenderMesh(a2,
			  25,
			  68,
			  *(float *)(a1 + 152),
			  *(DWORD *)(a1 + 68),
			  *(float *)(a1 + 100),
			  *(float *)(a1 + 104),
			  *(float *)(a1 + 108),
			  32042);
			RenderMesh(a2,
			  26,
			  68,
			  *(float *)(a1 + 152),
			  *(DWORD *)(a1 + 68),
			  *(float *)(a1 + 100),
			  *(float *)(a1 + 104),
			  *(float *)(a1 + 108),
			  32042);
			RenderMesh(a2,
			  27,
			  68,
			  *(float *)(a1 + 152),
			  *(DWORD *)(a1 + 68),
			  *(float *)(a1 + 100),
			  *(float *)(a1 + 104),
			  *(float *)(a1 + 108),
			  32042);
			RenderMesh(a2,
			  28,
			  68,
			  *(float *)(a1 + 152),
			  *(DWORD *)(a1 + 68),
			  *(float *)(a1 + 100),
			  *(float *)(a1 + 104),
			  *(float *)(a1 + 108),
			  32042);
			*(BYTE*)(a2 + 136) = -1;
			EndRender();
			float v409 = (double)(rand() % 10) / 20.0 + 1.399999976158142;
			float v19 = v409 - 0.300000011920929;
			Vector( 0.0, 0.0, 0.0, WorldPos);
			//TransformPosition(a2, (int)&BoneTransform + 0x5D0, WorldPos, Bone, 0);
			TransformPosition(a2, Joint(37), WorldPos, Bone, 0);
			Vector( 1.0, 0.30000001, 0.0, Color);		
			CreateSprite(32114, Bone, v409, Color, a1, 0.0, 0);
            CreateSprite(32114, Bone, v19, Color, a1, 0.0, 0);
			v409 = (double)(rand() % 10) / 20.0 + 1.0;
			float v20 = v409 + 0.300000011920929;
			CreateSprite(32002, Bone, v20, Color, a1, 0.0, 0);
			v409 = (double)(rand() % 8) / 20.0 + 0.4000000059604645;
			CreateSprite(32114, Bone, v409, Color, a1, 0.0, 0);
			float v21 = v409 - 0.2000000029802322;
            CreateSprite(32114, Bone, v21, Color, a1, 0.0, 0);
			}
			break;
			
			case 38:
			{
			*(DWORD *)(a1 + 60) = -2;
			Vector( 0.020, 0.020, 0.050, Color);
			CreateParticle(32146, a1 + 252, a1 + 264, Color, 1,*(float *)(a1 + 96), a2);
			}
			break;
			
			case 54:
			{
			*(DWORD *)(a1 + 60) = -2;
			if ( !(rand() % 2) )	
				{
				Vector( 1.0, 1.0, 1.0, Color);			
				CreateParticle(32287, a1 + 252, a1 + 264, Color, 2, *(float *)(a1 + 96), 0);
				}
			}
			break;
			}
		}
	RenderAidaObjectVisual(a1, a2);
}


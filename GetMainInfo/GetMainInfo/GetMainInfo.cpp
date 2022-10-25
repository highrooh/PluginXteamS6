#include "stdafx.h"
#include "..\..\Util\CCRC32.H"
#include "ThemidaSDK.h"
#include "CustomCloak.h"
#include "CustomNpcName.h"
#include "CustomMonster.h"


struct PROTECT_FILE_INFO
{

	char ServerName[32];
	char MHPR32CRC[32];
	//MHP VERIFC
	DWORD MHPClient;
	long MHPCRC32;
	long PlayerCRC32;
	DWORD PostColor;
	DWORD FpsMax;
	DWORD NovoLoading;
	DWORD Effects;
	DWORD MiniMapClick;
	DWORD LogHack;

	// CHECK 32
	long CRCCHECK32;
	char Check32Slot1[32];
	char Check32Slot2[32];

	//POST NEW
	long Rpost;
	long Gpost;
	long Bpost;
	long RParty;
	long GParty;
	long BParty;
	long RGuild;
	long GGuild;
	long BGuild;
	long RGuildA;
	long GGuildA;
	long BGuildA;
	long RGM;
	long GGM;
	long BGM;
	long RGens;
	long GGens;
	long BGens;

	//
	long RemoveMuError;


	//GG
	float InvisibleWings;
	float DisableShadow;


	//SPEED CONFIG
	long VeloSPeedHack;
	long TimeSleepCheck;
	long SpeedHack;
	long DebugHack;

	//FENRIR
	long FenrirSafeZone;


	//
	BYTE LauncherType;
	char LauncherName[32];
	char CustomerName[32];
	char IpAddress[32];
	WORD IpAddressPort;
	char ClientVersion[8];
	char ClientSerial[17];
	char WindowName[32];
	char ScreenShotPath[50];
	char ClientName[32];
	char PluginName[32];
	char CameraName[32];
	char EffectPlugin[32];
	DWORD ClientCRC32;
	DWORD PluginCRC32;
	DWORD CameraCRC32;
	DWORD EffectPluginCRC32;
	DWORD HelperActiveAlert;
	DWORD HelperActiveLevel;
	DWORD DWMaxAttackSpeed;
	DWORD DKMaxAttackSpeed;
	DWORD FEMaxAttackSpeed;
	DWORD MGMaxAttackSpeed;
	DWORD DLMaxAttackSpeed;
	DWORD SUMaxAttackSpeed;
	DWORD RFMaxAttackSpeed;
	DWORD ReconnectTime;
	DWORD ReduceMemory;
	DWORD CustomInterfaceType;
	DWORD LimitMainExec;
	DWORD LimitValueMain;
	DWORD CustomCoinMenu;
	DWORD CustomSize;
	char Coin1[32];
	char Coin2[32];
	char Coin3[32];
	char Coin1Inventory[9000];
	char Coin2Inventory[3266];
	char Coin3Inventory[323];


};


int _tmain(int argc,_TCHAR* argv[]) // OK
{
	CLEAR_START

	ENCODE_START

	PROTECT_FILE_INFO info;

	memset(&info,0,sizeof(info));


	GetPrivateProfileString("ArkanBattleInfo", " ServerName", "", info.ServerName, sizeof(info.ServerName), ".\\VerifyCode.ini");

	info.MHPClient = GetPrivateProfileInt("ArkanBattleCustom", "MHPClientActive", 0, ".\\VerifyCode.ini");

	info.MHPCRC32 = GetPrivateProfileInt("ArkanBattleCustom", "CRC32CODE", info.MHPCRC32, ".\\VerifyCode.ini");

	info.PlayerCRC32 = GetPrivateProfileInt("ArkanBattleCustom", "CRC32CODE", info.PlayerCRC32, ".\\VerifyCode.ini");

	info.PostColor = GetPrivateProfileInt("ArkanBattleCustom", "PostColorActive", 0, ".\\VerifyCode.ini");

	info.FpsMax = GetPrivateProfileInt("ArkanBattleCustom", "FpsMaxActive", 0, ".\\VerifyCode.ini");

	info.NovoLoading = GetPrivateProfileInt("ArkanBattleCustom", "NovoLoadingActive", 0, ".\\VerifyCode.ini");

	info.Effects = GetPrivateProfileInt("ArkanBattleCustom", "EffectsActive", 0, ".\\VerifyCode.ini");

	info.MiniMapClick = GetPrivateProfileInt("ArkanBattleCustom", "MiniMapClickActive", 0, ".\\VerifyCode.ini");

	info.LogHack = GetPrivateProfileInt("ArkanBattleCustom", "LogHackActive", 0, ".\\VerifyCode.ini");



	info.Rpost = GetPrivateProfileInt("ArkanBattleCustom", "RpostColor", info.Rpost, ".\\VerifyCode.ini");
	info.Gpost = GetPrivateProfileInt("ArkanBattleCustom", "GpostColor", info.Gpost, ".\\VerifyCode.ini");
	info.Bpost = GetPrivateProfileInt("ArkanBattleCustom", "BpostColor", info.Bpost, ".\\VerifyCode.ini");



	//PT

	info.RParty = GetPrivateProfileInt("ArkanBattleCustom", "RPartyColor", info.RParty, ".\\VerifyCode.ini");
	info.GParty = GetPrivateProfileInt("ArkanBattleCustom", "GPartyColor", info.GParty, ".\\VerifyCode.ini");
	info.BParty = GetPrivateProfileInt("ArkanBattleCustom", "BPartyColor", info.BParty, ".\\VerifyCode.ini");


	//GUILD NORMAL

	info.RGuild = GetPrivateProfileInt("ArkanBattleCustom", "RGuildColor", info.RGuild, ".\\VerifyCode.ini");
	info.GGuild = GetPrivateProfileInt("ArkanBattleCustom", "GGuildColor", info.GGuild, ".\\VerifyCode.ini");
	info.BGuild = GetPrivateProfileInt("ArkanBattleCustom", "BGuildColor", info.BGuild, ".\\VerifyCode.ini");

	//GUILD ALI
	info.RGuildA = GetPrivateProfileInt("ArkanBattleCustom", "RGuildAliColor", info.RGuildA, ".\\VerifyCode.ini");
	info.GGuildA = GetPrivateProfileInt("ArkanBattleCustom", "GGuildAliColor", info.GGuildA, ".\\VerifyCode.ini");
	info.BGuildA = GetPrivateProfileInt("ArkanBattleCustom", "BGuildAliColor", info.BGuildA, ".\\VerifyCode.ini");


	//GM POST

	info.RGM = GetPrivateProfileInt("ArkanBattleCustom", "RGMColor", info.RGM, ".\\VerifyCode.ini");
	info.GGM = GetPrivateProfileInt("ArkanBattleCustom", "GGMColor", info.GGM, ".\\VerifyCode.ini");
	info.BGM = GetPrivateProfileInt("ArkanBattleCustom", "BGMColor", info.BGM, ".\\VerifyCode.ini");

	//GENS COLOR

	info.RGens = GetPrivateProfileInt("ArkanBattleCustom", "RGensColor", info.RGens, ".\\VerifyCode.ini");
	info.GGens = GetPrivateProfileInt("ArkanBattleCustom", "GGensColor", info.GGens, ".\\VerifyCode.ini");
	info.BGens = GetPrivateProfileInt("ArkanBattleCustom", "BGensColor", info.BGens, ".\\VerifyCode.ini");



	// ANT SPEED
	info.SpeedHack = GetPrivateProfileInt("ArkanBattleCustom", "SpeedHack", info.SpeedHack, ".\\VerifyCode.ini");
	info.VeloSPeedHack = GetPrivateProfileInt("ArkanBattleCustom", "VeloSpeedHack", info.VeloSPeedHack, ".\\VerifyCode.ini");
	info.TimeSleepCheck = GetPrivateProfileInt("ArkanBattleCustom", "TimeSleepCheck", info.TimeSleepCheck, ".\\VerifyCode.ini");
	info.DebugHack = GetPrivateProfileInt("ArkanBattleCustom", "DebugHack", info.DebugHack, ".\\VerifyCode.ini");


	info.RemoveMuError = GetPrivateProfileInt("ArkanBattleCustom", "RemoveMuError", info.RemoveMuError, ".\\VerifyCode.ini");
	info.FenrirSafeZone = GetPrivateProfileInt("ArkanBattleCustom", "FenrirSafeZone", info.FenrirSafeZone, ".\\VerifyCode.ini");




	 // CRC32
	info.CRCCHECK32 = GetPrivateProfileInt("ArkanBattleCustom", "CRCCHECK32", info.CRCCHECK32, ".\\VerifyCode.ini");
	GetPrivateProfileString("ArkanBattleCustom", "Check32Slot1","", info.Check32Slot1, sizeof(info.Check32Slot1), ".\\VerifyCode.ini");
	GetPrivateProfileString("ArkanBattleCustom", "Check32Slot2","", info.Check32Slot2, sizeof(info.Check32Slot2), ".\\VerifyCode.ini");

//

	CCRC32 CRC32;


	for(int n=0;n < sizeof(PROTECT_FILE_INFO);n++)
	{
		((BYTE*)&info)[n] ^= (BYTE)(0xCB^LOBYTE(n));
		((BYTE*)&info)[n] -= (BYTE)(0x99^HIBYTE(n));
	}


	HANDLE file = CreateFile("Data\\Local\\ArkanBattle.bmd",GENERIC_WRITE,FILE_SHARE_READ,0,CREATE_ALWAYS,FILE_ATTRIBUTE_ARCHIVE,0);

	if(file == INVALID_HANDLE_VALUE)
	{
		return 0;
	}


	DWORD OutSize = 0;

	if(WriteFile(file,&info, sizeof(PROTECT_FILE_INFO),&OutSize,0) == 0)
	{
		CloseHandle(file);
		return 0;
	}


	CloseHandle(file);

	ENCODE_END

	CLEAR_END

	return 0;
}

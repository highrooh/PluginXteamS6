// Protect.h: interface for the CProtect class.
//
//////////////////////////////////////////////////////////////////////

#pragma once
#include "CustomMonster.h"
#include "CustomNpcName.h"

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

	//GG
	float InvisibleWings;
	float DisableShadow;
	

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



	//SPEED CONFIG
	long VeloSPeedHack;
	long TimeSleepCheck;
	long SpeedHack;
	long DebugHack;

	//FENRIR
	long FenrirSafeZone;
	

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

class CProtect
{
public:
	CProtect();
	virtual ~CProtect();
	bool ReadMainFile(char* name);

public:
	PROTECT_FILE_INFO p_RoohInfo;
	DWORD p_ClientFileCRC;
};

extern CProtect gProtect;

#pragma once
#include "zzzmathlib.h"
#include "StdAfx.h"


#define MAX_CHAT_TYPE1			10

#pragma pack(push, 1)
typedef struct  //-> Complete (size: 27)
{
	WORD	ObjectID;
	char	Name[25];
} NpcNameList, * lpNpcNameList;
#pragma pack(pop)


struct MUChatType	//-> 24
{
	DWORD a1;
	DWORD a2;
	DWORD a3;
/*+12*/	DWORD	Unknown12;
/*+16*/	DWORD	Unknown16;
/*+20*/	DWORD	Unknown20;
};
struct MUChat
{
			BYTE	Gap0[4];
	//DWORD Unknown0;
/*+4*/		DWORD	Unknown4;
/*+8*/		DWORD	Unknown8;
/*+12*/		DWORD	Unknown12;
/*+16*/		MUChatType ChatType[MAX_CHAT_TYPE1];
/*+256*/	bool	IsActiveChatType[MAX_CHAT_TYPE1];
BYTE gap266[26];
/*+268*/	//SomeType LPVOID;
/*+292*/	DWORD	WindowPosX;
/*+296*/	DWORD	WindowPosY;
/*+300*/	DWORD	ScrollX;
/*+304*/	DWORD	ScrollY;
/*+308*/	DWORD	WindowWidth;
/*+312*/	DWORD	WindowHeight;
/*+316*/	DWORD	WindowLineCount;
/*+320*/	DWORD	MessageType;
/*+324*/	DWORD	Unknown324;
/*+328*/	DWORD	WindowScrollPos;
/*+332*/	DWORD	Unknown332;
/*+336*/	float	AlphaColor;
/*+340*/	DWORD	Unknown340;
/*+344*/	BYTE	WindowsActivo;
/*+345*/	BYTE	Unknown345;
/*+345*/	BYTE	gap346[2];
/*+348*/	DWORD	Unknown348;
};


#pragma pack(push, 1)
typedef struct	//-> Complete (size: 107)
{
	/*+0*/		short	ItemID;
	/*+2*/		int		Level;
	/*+6*/		char	Unknown6;
	/*+7*/		char	Unknown7;
	/*+8*/		char	Unknown8;
	/*+9*/		WORD	DamageMin;
	/*+11*/		WORD	DamageMax;
	/*+13*/		char	Unknown13;
	/*+14*/		WORD	Defense;
	/*+16*/		WORD	MagicDefense;
	/*+18*/		char	MagicPower;
	/*+19*/		char	Unknown19;
	/*+20*/		short	Unknown20;
	/*+22*/		char	Durability;
	/*+23*/		char	ExcellentOption;
	/*+24*/		char	AncientOption;
	/*+25*/		short	ReqStrenght;
	/*+27*/		short	ReqDextirity;
	/*+29*/		short	ReqEnergy;
	/*+31*/		short	ReqVitality;
	/*+33*/		short	ReqCommand;
	/*+35*/		short	ReqLevel;
	/*+37*/		char	SpecialCount;
	/*+38*/		WORD	SpecialType[8];
	/*+54*/		BYTE	SpecialValue[8];
	/*+62*/		int		UniqueID;
	/*+66*/		char	Unknown66;
	/*+67*/		char	PosX;
	/*+68*/		char	PosY;
	/*+69*/		WORD	HarmonyType;
	/*+71*/		short	HarmonyValue;
	/*+73*/		char	Is380Item;
	/*+74*/		char	SocketOption[5];
	/*+79*/		char	Unknown79;
	/*+80*/		char	SocketSeedIndex[5];
	/*+85*/		char	SocketSphereLevel[5];
	/*+90*/		char	SocketSet;
	BYTE gap01[5];
	/*+96*/		char	DurabilityState;
	/*+97*/		char	PeriodItem;
	/*+98*/		char	ExpiredItem;
	/*+99*/		int		ExpireDateConvert;
	/*+103*/	int		Unknown103;
} ObjectItem, * lpItemObj;
#pragma pack(pop)





#pragma pack(push, 1)
typedef struct	//-> InDev (size: 1432)
{
	BYTE gap01[14];
	/*+14*/		bool	InSafeZone;
	/*+15*/		BYTE	Unknown15;
	/*+16*/		BYTE	Unknown16;
	/*+17*/		BYTE	IsLiveObject;
	/*+18*/		BYTE	Unknown18;
	/*+19*/		BYTE	Class;
	/*+20*/		BYTE	Unknown20;
	/*+21*/		BYTE	CtlCode;	//Bit decomposit (0x10)
	/*+22*/		BYTE	Unknown22;
	/*+23*/		BYTE	Unknown23;
	/*+24*/		BYTE	Unknown24;
	/*+25*/		BYTE	Unknown25;
	/*+26*/		BYTE	Unknown26;
	/*+27*/		BYTE	Unknown27;
	/*+28*/		BYTE	Unknown28;
	/*+29*/		BYTE	Unknown29;
	/*+30*/		BYTE	Unknown30;
	/*+31*/		BYTE	GensInfluence;	//0 - None, 1 - D, 2 - V
	/*+32*/		BYTE	Unknown32;
	/*+33*/		BYTE	Unknown33;
	/*+34*/		BYTE	Unknown34;
	/*+35*/		BYTE	Unknown35;
	/*+36*/		BYTE	Unknown36;	//Personal Shop
	/*+37*/		BYTE	Unknown37;
	/*+38*/		WORD	Unknown38;
	/*+40*/		BYTE	Unknown40;
	/*+41*/		BYTE	Unknown41;
	/*+42*/		BYTE	Unknown42;
	BYTE gap03[2];
	/*+45*/		BYTE	RespawnPosX;
	/*+46*/		BYTE	RespawnPosY;
	BYTE gap04[3];
	/*+50*/		BYTE	ActiveMagic;
	BYTE gap05[5];
	/*+56*/		char	Name[25];	//need check size
	BYTE gap06[39];
	/*+120*/	BYTE	Unknown120;
	/*+121*/	BYTE	Unknown121;
	BYTE gap07[2];
	/*+124*/	WORD	Unknown124;
	/*+126*/	WORD	aIndex;
	/*+128*/	WORD	Unknown128;
	/*+130*/	WORD	Unknown130;
	/*+132*/	WORD	ID;
	/*+134*/	WORD	Unknown134;
	/*+136*/	//maybe word
	BYTE gap09[36];
	/*+172*/	DWORD	MapPosX;
	/*+176*/	DWORD	MapPosY;
	BYTE gap10[8];
	/*+188*/	float	Unknown188;
	BYTE gap11[76];
	/*+268*/	short	HelmSlot;
	/*+270*/	BYTE	HelmLevel;
	/*+271*/	BYTE	HelmExcellent;
	/*+272*/	BYTE	HelmAncient;
	BYTE gap12[31];
	/*+304*/	short	ArmorSlot;
	/*+306*/	BYTE	ArmorLevel;
	/*+307*/	BYTE	ArmorExcellent;
	/*+308*/	BYTE	ArmorAncient;
	BYTE gap13[31];
	/*+340*/	short	PantsSlot;
	/*+342*/	BYTE	PantsLevel;
	/*+343*/	BYTE	PantsExcellent;
	/*+344*/	BYTE	PantsAncient;
	BYTE gap14[31];
	/*+376*/	short	GlovesSlot;
	/*+378*/	BYTE	GlovesLevel;
	/*+379*/	BYTE	GlovesExcellent;
	/*+380*/	BYTE	GlovesAncient;
	BYTE gap15[31];
	/*+412*/	short	BootsSlot;
	/*+414*/	BYTE	BootsLevel;
	/*+415*/	BYTE	BootsExcellent;
	/*+416*/	BYTE	BootsAncient;
	BYTE gap16[31];
	/*+448*/	short	WeaponFirstSlot;
	/*+450*/	BYTE	WeaponFirstLevel;
	/*+451*/	BYTE	WeaponFirstExcellent;
	/*+452*/	BYTE	WeaponFirstAncient;
	BYTE gap17[31];
	/*+484*/	short	WeaponSecondSlot;
	/*+486*/	BYTE	WeaponSecondLevel;
	/*+487*/	BYTE	WeaponSecondExcellent;
	/*+488*/	BYTE	WeaponSecondAncient;
	BYTE gap18[31];
	/*+520*/	short	WingsSlot;
	/*+522*/	BYTE	WingsLevel;
	/*+523*/	BYTE	WingsExcellent;
	/*+524*/	BYTE	WingsAncient;
	BYTE gap19[31];
	/*+556*/	short	PetSlot;
	/*+558*/	BYTE	PetLevel;
	/*+559*/	BYTE	PetExcellent;
	/*+560*/	BYTE	PetAncient;
	BYTE gap20[111];
	/*+672*/	DWORD	Unknown672;
	/*+676*/	DWORD	Unknown676;
	BYTE gap21[84];
	/*+764*/	DWORD	Unknown764;
	BYTE gap22[8];
	/*+1424*/	BYTE	Unknown1424;	//maybe gens rank
	BYTE gap23[3];
	/*+1428*/	DWORD	Unknown1428;	//-> end
} ObjectPreview, * lpViewObj;
#pragma pack(pop)

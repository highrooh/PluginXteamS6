#include "stdafx.h"
#include "Common.h"
#include "AntiLag.h"
#include "Util.h"
#include "SmokeEffect.h"
#include "Defines.h"


int IDisableDynamicEffect  = GetPrivateProfileIntA("AntiLag", "DisableDynamicEffect", 0, "./LorenStudio.ini");
int IDisableStaticEffect = GetPrivateProfileIntA("AntiLag", "DisableStaticEffect", 0, "./LorenStudio.ini");
int IDisableEffect15 = GetPrivateProfileIntA("AntiLag", "DisableEffect15", 0, "./LorenStudio.ini");


CAntiLag gAntiLag;

BOOL CAntiLag::CheckAntiLagGlow(int ItemIndex) // OK
{
	if(GetKeyState (VK_F7))
		{
			MemorySet(0x588661,0x90,0x5);
			  MemorySet(0x0074CD30,0x90,0x10C50);
			   MemorySet(0x00771310,0x90,0x11E);
	MemorySet(0x006097B0,0x90,0x69D);  // Remove +15 Effects
	MemorySet(0x0057BF78, 0x90, 0x05); // pin_lights eyes
	MemorySet(0x0057C125, 0x90, 0x05); // pin_lights eyes
	MemorySet(0x0057BE80, 0x90, 0x05); // JointLaser01 eyes
	MemorySet(0x0057C057, 0x90, 0x05); // JointLaser01 eyes
	MemorySet(0x0057BF0E, 0x90, 0x05); // shiny05 eyes
	MemorySet(0x0057C0BB, 0x90, 0x05); // shiny05 eyes
	MemorySet(0x0057ABA9, 0x90, 0x05); // flare01 Gloves
	MemorySet(0x0057ACBF, 0x90, 0x05); // flare01 Gloves
	MemorySet(0x0057AD03, 0x90, 0x05); // flare01 Gloves
	MemorySet(0x0057AD47, 0x90, 0x05); // flare01 Gloves

			return 1;
		}
	SetOp(0x00588661,(LPVOID)0x005655C0,ASM::CALL);
	return 0;
}

__declspec(naked) void WingDisableLevelGlow() // OK
{
	static DWORD WingDisableLevelGlowAddress1 = 0x0060A3B0;//0x0060A3B0
	static DWORD WingDisableLevelGlowAddress2 = 0x00609FE8;//0x00609FE8

	_asm
	{
		Mov Eax,Dword Ptr Ss:[Ebp+0x0C]
		Mov Dword Ptr Ss:[Ebp-0x4EC],Eax
		Sub Eax,ITEM_BASE_MODEL
		Push Eax
		Call [CAntiLag::CheckAntiLagGlow]
		Test Eax,Eax
		Je EXIT
		Mov Dword Ptr Ss:[Ebp-0x04],0x00
		Jmp [WingDisableLevelGlowAddress1]
		EXIT:
		Jmp [WingDisableLevelGlowAddress2]
	}
}

void InitAntiLagSystem()
{
	if(IDisableDynamicEffect == AntiLagOn)
	{
	MemorySet(0x0074CD30,0x90,0x10C50);
	}

	if(IDisableStaticEffect == AntiLagOn)
	{
	 MemorySet(0x00771310,0x90,0x11E);
	}

	if(IDisableEffect15 == AntiLagOn)
	{
	MemorySet(0x006097B0,0x90,0x69D);  // Remove +15 Effects
	MemorySet(0x0057BF78, 0x90, 0x05); // pin_lights eyes
	MemorySet(0x0057C125, 0x90, 0x05); // pin_lights eyes
	MemorySet(0x0057BE80, 0x90, 0x05); // JointLaser01 eyes
	MemorySet(0x0057C057, 0x90, 0x05); // JointLaser01 eyes
	MemorySet(0x0057BF0E, 0x90, 0x05); // shiny05 eyes
	MemorySet(0x0057C0BB, 0x90, 0x05); // shiny05 eyes
	MemorySet(0x0057ABA9, 0x90, 0x05); // flare01 Gloves
	MemorySet(0x0057ACBF, 0x90, 0x05); // flare01 Gloves
	MemorySet(0x0057AD03, 0x90, 0x05); // flare01 Gloves
	MemorySet(0x0057AD47, 0x90, 0x05); // flare01 Gloves
	}
}


void InitAntiLag() // OK
{
	SetCompleteHook(0xE9, 0x00609FDF, &WingDisableLevelGlow);
	InitAntiLagSystem();
}
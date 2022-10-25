#include "StdAfx.h"
#include "HackCheck.h"
#include "Import.h"
#include   "Util.h"


static DWORD FPS;

DWORD FrameValue = 0;
DWORD SpeedValue = 0;
DWORD MainTickCount = 0;
DWORD SyncTickCount = 0;
DWORD CountModifier = 0;
DWORD DelayModifier = 0;
DWORD HasteModifier = 0;
DWORD SleepModifier = 0;
DWORD SpeedModifier1 = 0;
DWORD SpeedModifier2 = 0;
DWORD ModelModifier1 = 0;
DWORD ModelModifier2 = 0;
DWORD ModelModifier3 = 0;

CHackCheck gHackCheck;

_declspec(naked) void CheckTickCount1() // OK
{
	static DWORD CheckTickCountAddress1 = 0x004DA29B;

	_asm
	{
		Mov Dword Ptr Ss : [Ebp - 0x68] , 0x00
		Mov Edx, MainTickCount
		Mov Dword Ptr Ss : [Ebp - 0x74] , Edx
		Call Dword Ptr Ds : [GetTickCount]
		Mov MainTickCount, Eax
		Mov SyncTickCount, Eax
		Jmp[CheckTickCountAddress1]
	}
}



_declspec(naked) void CheckTickCount2() // OK
{
	static DWORD CheckTickCountAddress1 = 0x004DA3F0;
	FPS = 34;
	_asm
	{
		Mov Ecx, Dword Ptr Ss : [Ebp - 0x6C]
		Mov CountModifier, Ecx
		Mov Edx, Dword Ptr Ss : [Ebp - 0x74]
		Mov DelayModifier, Edx
		Mov Ecx, Dword Ptr Ss : [Ebp - 0x178]
		Mov HasteModifier, Ecx
		Mov Edx, Dword Ptr Ds : [MAIN_VIEWPORT_STRUCT]
		Mov Ecx, Dword Ptr Ds : [Edx + 0x214]
		Mov SpeedModifier1, Ecx
		Mov Edx, Dword Ptr Ds : [MAIN_VIEWPORT_STRUCT]
		Mov Ecx, Dword Ptr Ds : [Edx + 0x218]
		Mov SpeedModifier2, Ecx
		Mov Edx, Dword Ptr Ds : [MAIN_VIEWPORT_STRUCT]
		Mov Ecx, Dword Ptr Ds : [Edx + 0x31A]
		Mov ModelModifier1, Ecx
		Mov Edx, Dword Ptr Ds : [MAIN_VIEWPORT_STRUCT]
		Mov Ecx, Dword Ptr Ds : [Edx + 0x394]
		Mov ModelModifier2, Ecx
		Mov Edx, Dword Ptr Ds : [MAIN_VIEWPORT_STRUCT]
		Mov Ecx, Dword Ptr Ds : [Edx + 0x398]
		Mov ModelModifier3, Ecx
		Mov Eax, MainTickCount
		Sub Eax, Dword Ptr Ss : [Ebp - 0x74]
		Mov Dword Ptr Ss : [Ebp - 0x68] , Eax
		Cmp Dword Ptr Ss : [Ebp - 0x68] , 0x28
		Jge CONTINUE
		Mov Ecx, FPS
		Sub Ecx, Dword Ptr Ss : [Ebp - 0x68]
		Mov Dword Ptr Ss : [Ebp - 0x18C] , Ecx
		Mov Edx, Dword Ptr Ss : [Ebp - 0x18C]
		Mov SleepModifier, Edx
		NEXT :
		Push 1
			Call Dword Ptr Ds : [Sleep]
			Call Dword Ptr Ds : [GetTickCount]
			Sub Eax, Dword Ptr Ss : [Ebp - 0x074]
			Cmp Eax, Dword Ptr Ss : [Ebp - 0x18C]
			Jl NEXT
			Mov Eax, MainTickCount
			Cmp SyncTickCount, Eax
			Jnz HACK
			Mov Ecx, Dword Ptr Ss : [Ebp - 0x6C]
			Cmp CountModifier, Ecx
			Jnz HACK
			Mov Edx, Dword Ptr Ss : [Ebp - 0x74]
			Cmp DelayModifier, Edx
			Jnz HACK
			Mov Ecx, Dword Ptr Ss : [Ebp - 0x178]
			Cmp HasteModifier, Ecx
			Jnz HACK
			Mov Edx, Dword Ptr Ss : [Ebp - 0x18C]
			Cmp SleepModifier, Edx
			Jnz HACK
			Mov Ecx, Dword Ptr Ds : [0x07BC4F04]
			Mov Edx, Dword Ptr Ds : [Ecx + 0x214]
			Cmp SpeedModifier1, Edx
			Jnz HACK
			Mov Ecx, Dword Ptr Ds : [0x07BC4F04]
			Mov Edx, Dword Ptr Ds : [Ecx + 0x218]
			Cmp SpeedModifier2, Edx
			Jnz HACK
			Mov Ecx, Dword Ptr Ds : [0x07BC4F04]
			Mov Edx, Dword Ptr Ds : [Ecx + 0x31A]
			Cmp ModelModifier1, Edx
			Jnz HACK
			Mov Ecx, Dword Ptr Ds : [0x07BC4F04]
			Mov Edx, Dword Ptr Ds : [Ecx + 0x394]
			Cmp ModelModifier2, Edx
			Jnz HACK
			Mov Ecx, Dword Ptr Ds : [0x07BC4F04]
			Mov Edx, Dword Ptr Ds : [Ecx + 0x398]
			Cmp ModelModifier3, Edx
			Jnz HACK
			Add Eax, Dword Ptr Ss : [Ebp - 0x18C]
			Mov MainTickCount, Eax
			Mov Dword Ptr Ss : [Ebp - 0x68] , 0x28
			CONTINUE :
			Mov Ecx, Dword Ptr Ss : [Ebp - 0x178]
			Add Ecx, Dword Ptr Ss : [Ebp - 0x68]
			Mov Dword Ptr Ss : [Ebp - 0x6C] , Ecx
			Jmp[CheckTickCountAddress1]
			HACK :
			Push 0
			Call Dword Ptr Ds : [ExitProcess]
	}
}

 void CHackCheck::Load()
{
	 SetDword(0x004D9D3B, (DWORD)&FrameValue);
	 SetDword(0x004DAC60, (DWORD)&FrameValue);
	 SetDword(0x7B55338, (DWORD)10);
	 SetDword(0x004D597B, (DWORD)&MainTickCount);
	 SetDword(0x004DA289, (DWORD)&MainTickCount);
	 SetDword(0x004DA297, (DWORD)&MainTickCount);
	 SetDword(0x004DA3A2, (DWORD)&MainTickCount);
	 SetDword(0x004DA3CE, (DWORD)&MainTickCount);
	 SetDword(0x004DA3D9, (DWORD)&MainTickCount);
	 SetDword(0x0063D326, (DWORD)&MainTickCount);
	 SetDword(0x00642112, (DWORD)&MainTickCount);


	 SetCompleteHook(0xE9, 0x004DA280, &CheckTickCount1);

	 SetCompleteHook(0xE9, 0x004DA3A1, &CheckTickCount2);
}
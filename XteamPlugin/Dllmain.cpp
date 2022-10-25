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
#include "resource.h"
#include "CUIMng.h"
#include "..\\Util\\CCRC32.H"
#include "Splash.h"

HINSTANCE hins;

void StartAddress(LPVOID lpThreadParameter)
{
HANDLE v1;
HANDLE v2;

	while ( TRUE )
	{
		Sleep(5000);

		v1 = GetCurrentProcess();
		SetProcessWorkingSetSize(v1, 0xFFFFFFFF, 0xFFFFFFFF);

		v2 = GetCurrentProcess();
		SetThreadPriority(v2, -2);
	}
}


void InitLoginTheme()
{
	HMODULE hModule = LoadLibraryA("logintheme.dll");

	void(*EntryProc)(char*) = ((void(*)(char*))GetProcAddress(hModule, "EntryProc"));

	if (EntryProc)
	{

		EntryProc("SS2");
	}


}




extern "C" __declspec(dllexport) void ArkanBattle()
{
	//if (gProtect.ReadMainFile("Data\\Local\\ArkanBattle.bmd") == 0) //verifica o .bmd para sistema de proteção
	//{
	//	ExitProcess(0);
	//}

	//gCUIMng.Load();
	//ReadFiles();
	Initialize();
	//CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)MainThread, NULL, NULL, NULL);
	CSplash splash(TEXT(".\\ArkanProtect\\ArkanSplash.bmp"), RGB(128, 128, 128)); //carrega splash 
	splash.ShowSplash();
	Sleep(2000); //  simulate using a 5 second delay


	//  Close the splash screen
	splash.CloseSplash();
	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)StartAddress, 0, 0, 0);
}



BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
	switch(dwReason)
	{
		case DLL_PROCESS_ATTACH:
			ArkanBattle();
			hins = (HINSTANCE)hModule;
			break;
		case DLL_PROCESS_DETACH:
			break;
		case DLL_THREAD_ATTACH:
			break;
		case DLL_THREAD_DETACH:
			break;
	}

	return 1;
}


#include "StdAfx.h"
#include "CRC.h"
#include "Protect.h"


void Msg_L_Br() {
	MessageBoxA(NULL, "CRC-Scan\n\nO arquivo  foi alterado ou corrompido!\n", gProtect.p_RoohInfo.ServerName, MB_SERVICE_NOTIFICATION | MB_ICONWARNING);
	ExitProcess(0);
}

void Msg_P_Br() {
	MessageBoxA(NULL, "CRC-Scan\n\nO arquivo foi alterado ou corrompido!", gProtect.p_RoohInfo.ServerName, MB_SERVICE_NOTIFICATION | MB_ICONWARNING);
	ExitProcess(0);
}



////////////////////////////////////////////////

CheckSum Check;
void CheckSum::Arquivos() {
	Check.Initialize();

	
		long Arquivo1 = Check.FileCRCC(gProtect.p_RoohInfo.Check32Slot1);
		if (Arquivo1 != gProtect.p_RoohInfo.MHPCRC32)
		{
			if (gProtect.p_RoohInfo.CRCCHECK32 == 1) {
				ofstream out("ArkanProtect/Log.txt", ios::app);
				out << "\nCRC-Scan:   ", out << gProtect.p_RoohInfo.Check32Slot1;
				out << "\nMSG:       ", out << Msg_L_Br;
				out.close();
			}
			CreateThread(NULL, NULL, LPTHREAD_START_ROUTINE(Msg_L_Br), NULL, 0, 0);
			Sleep(3000);
			ExitProcess(0);
		}
	


	///////////////////////////////////////////////
		long Player = Check.FileCRCC(gProtect.p_RoohInfo.Check32Slot2);
		if (Player != gProtect.p_RoohInfo.PlayerCRC32) {
			if (gProtect.p_RoohInfo.CRCCHECK32 == 1) {
				ofstream out("ArkanProtect/Log.txt", ios::app);
				out << "\nCRC-Scan:   ", out << gProtect.p_RoohInfo.Check32Slot2;
				out << "\nMSG:   ", out << Msg_P_Br;
				out.close();
			}
				CreateThread(NULL, NULL, LPTHREAD_START_ROUTINE(Msg_P_Br), NULL, 0, 0);
				Sleep(3000);
				ExitProcess(0);

	}
}

void MainThread(void* lpParam)
{
	//while(true){	 // Check all files every 1 sec
	//Sleep (1000);  // Check all files every 1 sec
	Check.Arquivos();
	//_endthread();  // Check files just one time and exit thread
}
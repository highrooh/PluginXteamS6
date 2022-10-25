#include "stdafx.h"
#include "Protect.h"
#include "SpeedPerfomace.h"

void Msg_Sf_Br() {
	MessageBoxA(NULL, "FS-Scan\n\nConteudo suspeito detectado!", gProtect.p_RoohInfo.ServerName, MB_SERVICE_NOTIFICATION | MB_ICONWARNING);
	ExitProcess(0);
}

void Msg_Sf_En() {
	MessageBoxA(NULL, "FS-Scan\n\nAn illegal choice haas been detected!", gProtect.p_RoohInfo.ServerName, MB_SERVICE_NOTIFICATION | MB_ICONWARNING);
	ExitProcess(0);
}

void Msg_Sf_Page() {
	Sleep(2000);	
}


void Speed_perf() {
	//cout << *(unsigned long*)QueryPerformanceCounter <<endl;
	if (*(unsigned long*)QueryPerformanceCounter != 2337669003) {
		if (gProtect.p_RoohInfo.LogHack == 1) {
			ofstream out("ArkanProtect/Log.txt", ios::app);
			out << "\nSP-Scan:     ", out << "Speed Hack detected!";
			out.close();
		}


		CreateThread(NULL, NULL, LPTHREAD_START_ROUTINE(Msg_Sf_Br), NULL, 0, 0);
		Sleep(3000);
		ExitProcess(0);


	}
}


void performance() {
	
		Speed_perf();
		Sleep(559);

}

void SPerformance() {
	CreateThread(NULL, NULL, LPTHREAD_START_ROUTINE(performance), NULL, 0, 0);
}
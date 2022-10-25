
#include "StdAfx.h"
#include "Protect.h"
#include "SpeedHack.h"

void Msg_S_Br() {
	MessageBoxA(NULL, "AK-Scan\n\nConteudo suspeito detectado!", gProtect.p_RoohInfo.ServerName, MB_SERVICE_NOTIFICATION | MB_ICONWARNING);
	ExitProcess(0);
}

void Msg_S_En() {
	MessageBoxA(NULL, "AK-Scan\n\nAn illegal choice haas been detected!", gProtect.p_RoohInfo.ServerName, MB_SERVICE_NOTIFICATION | MB_ICONWARNING);
	ExitProcess(0);
}

void Msg_S_Page() {
	Sleep(2000);
}

void tickplash(int detectedvalue) {
	if (gProtect.p_RoohInfo.LogHack == 1) {
		ofstream out("ArkanProtect/Log.txt", ios::app);
		out << "\nAK-Scan:    ", out << "Speed Hack or System Freeze detected!";
		if (gProtect.p_RoohInfo.DebugHack == 1)
		{
			out << "\nVELOSPEED:   ", out << gProtect.p_RoohInfo.VeloSPeedHack;
			out << "\nSPEED:   ", out << gProtect.p_RoohInfo.SpeedHack;
			out << "\nTIMESPEED:   ", out << gProtect.p_RoohInfo.TimeSleepCheck;
			out << "\nDetected Value:   ", out << detectedvalue;
		}
		
		out.close();
	}
	

		CreateThread(NULL, NULL, LPTHREAD_START_ROUTINE(Msg_S_Br), NULL, 0, 0);
		Sleep(3000);
		ExitProcess(0);


}




int ispidi = 0;
void Speed_Scanner() {
again2:
	int timer = ::GetTickCount();
again:
	Sleep(gProtect.p_RoohInfo.TimeSleepCheck);
	ispidi++;
	if (ispidi != gProtect.p_RoohInfo.SpeedHack) {
		goto again;
	}
	else
	{
		ispidi = 0;
		int timeElapsed = ::GetTickCount() - timer;
		if ("%d", timeElapsed > gProtect.p_RoohInfo.VeloSPeedHack) { // velocidade máxima (em milisegundos) que não deve ser ultrapassada
			tickplash(timeElapsed);
		}
		else
		{
			goto again2;
		}
	}
}

void DetectSpeed() {
	CreateThread(NULL, NULL, LPTHREAD_START_ROUTINE(Speed_Scanner), NULL, 0, 0);
}














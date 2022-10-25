#pragma once





typedef unsigned __int64 QWORD;

#define WIN32_LEAN_AND_MEAN

#define _WIN32_WINNT _WIN32_WINNT_WINXP

// System Include
#include <windows.h>
#include <iostream>
#include <map>
#include <math.h>
#include <stdlib.h>
#include <winsock2.h>
#include <Mmsystem.h>
#include <gl\GL.h>
#include <time.h>
//#include <atltime.h>
//#include "detours.h"
#include <sys\stat.h>
#pragma comment(lib,"ws2_32.lib")
#pragma comment(lib,"Winmm.lib")
#pragma comment(lib,"Opengl32.lib")
//#pragma comment(lib,"detours.lib")
#include <ShellAPI.h>
#include <WinUser.h>
#include <iphlpapi.h>               //to get mac address
#include <assert.h>                 //to get mac address 
#include <urlmon.h>                 //download da internet
#include <iterator>                 // for copy and past
#include <tlhelp32.h>
#include <process.h>
#include <fstream>
#include "winsock.h"
#include <string>
#include "windowsx.h"
#include <iostream>   // coat << <<
#include <tchar.h>    //to php POST
#include <map>        //compare words ban txt
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "LorenStudio.h"

#pragma warning (disable: 4996 4091 4101 4018 4309)


using namespace std;
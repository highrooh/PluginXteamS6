// Protect.cpp: implementation of the CProtect class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "..\\Util\\CCRC32.H"
#include "Protect.h"
#include "Util.h"

CProtect gProtect;
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CProtect::CProtect() // OK
{

}

CProtect::~CProtect() // OK
{

}

bool CProtect::ReadMainFile(char* name) // OK
{
	CCRC32 CRC32;

if (CRC32.FileCRC(name, &this->p_ClientFileCRC, 1024) == 0)
{
	return 0;
}

HANDLE file = CreateFile(name, GENERIC_READ, FILE_SHARE_READ, 0, OPEN_EXISTING, FILE_ATTRIBUTE_ARCHIVE, 0);

if (file == INVALID_HANDLE_VALUE)
{
	return 0;
}

if (GetFileSize(file, 0) != sizeof(PROTECT_FILE_INFO))
{
	CloseHandle(file);
	return 0;
}

DWORD OutSize = 0;

if (ReadFile(file, &this->p_RoohInfo, sizeof(PROTECT_FILE_INFO), &OutSize, 0) == 0)
{
	CloseHandle(file);
	return 0;
}

for (int n = 0; n < sizeof(PROTECT_FILE_INFO); n++)
{
	((BYTE*)&this->p_RoohInfo)[n] += (BYTE)(0x99^HIBYTE(n));
	((BYTE*)&this->p_RoohInfo)[n] ^= (BYTE)(0xCB^LOBYTE(n));
}

CloseHandle(file);
return 1;
}

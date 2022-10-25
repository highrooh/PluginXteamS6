#include "stdafx.h"
#include "Offset.h"
#include "User.h"
#include "TMemory.h"
//#include "array.h"
#include "Object.h"
#include "Import.h"
#include "Defines.h"
#include "Util.h"
#include "User.h"

User	gObjUser;

DWORD LastTime = 0;


void User::Load()
{
}

void User::Refresh()
{
	this->lpViewPlayer		= &*(ObjectPreview*)oUserPreviewStruct;


	

	}

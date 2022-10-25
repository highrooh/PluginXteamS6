#pragma once
#include "Object.h"
#pragma pack(push, 1)

class User
{
public:
	void		Load();
	void		Refresh();	
	bool		GetTarget();
	lpViewObj	lpViewPlayer;
};
extern User gObjUser;
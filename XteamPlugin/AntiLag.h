#pragma once

#define ITEM_BASE_MODEL 1171

enum eAntiLag
{
	AntiLagOn			= 1,
};

void InitAntiLag();
void InitAntiLagSystem();
class CAntiLag
{
public:
	BOOL CheckAntiLagGlow(int ItemIndex);
};

extern CAntiLag gAntiLag;
#pragma once
#include "stdafx.h"
#include "import.h"
#include "Protect.h"


class Interface
{
public:

public:
	Interface();
	virtual ~Interface();
	void RenderObjectSystem();
	static void LoadImages();

};

extern Interface gInterface;
#include "Interface.h"
#include "Util.h"
#include "Import.h"
#include "Defines.h"

Interface gInterface;

Interface::Interface()
{
}

Interface::~Interface()
{
}
void Interface::RenderObjectSystem()
{
	SetOp2((LPVOID)oLoadSomeForm_Call, this->LoadImages, ASM::CALL);
}

void Interface::LoadImages()
{

}

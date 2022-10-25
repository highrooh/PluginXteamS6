#pragma once

void ReadFiles();
	void Load();
	void Initialize();
	void RenderObjectVisual(int a1, int a2);
	void FixEffectCitys();
	void ChatTextColor();


	#define RenderAidaObjectVisual			((void(__cdecl*)(int a1, int a2)) 0x008C4C20)
#define BeginRender			((void(__thiscall*)(float a2)) 0x00546860)
#define EndRender				((void(__cdecl*)()) 0x00546880)
#define CreateParticle			((int(__cdecl*)(int a1, int a2, int a3, vec3_t color, int a5, float a6, int a7)) 0x0074CD30)
#define RenderMesh              ((int(__thiscall*)(int This, signed int a2, int a3, float a4, signed int a5, float a6, float a7, float a8, int a9)) 0x005468A0)
#define Joint(x)					((0x30 * x) + 0x7BC08A0)
#define TransformPosition         ((int(__thiscall*)(int This, int a2, vec3_t WorldPos, vec3_t Bone1, bool a5)) 0x00545030)
#define CreateSprite              ((int(__cdecl*)(int a1, vec3_t Bone1, float size, vec3_t color, int ObjPos, float, int)) 0x00771310)

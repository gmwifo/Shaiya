#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <array>

#include <include/main.h>
#include <include/util.h>

unsigned u0x504D7E = 0x504D7E;
__declspec(naked) void naked_0x504D65()
{
	__asm
	{
		push 0x00
		fstp dword ptr ss : [esp + 0x2C]
		push 0x00
		fild dword ptr ds :[0x022032E0]
		push 0xFF
		jmp u0x504D7E
	}
}

unsigned u0x505118 = 0x505118;
__declspec(naked) void naked_0x5050FF()
{
	__asm
	{
		push 0xCE
		fstp dword ptr ss : [esp + 0x2C]
		push 0x00
		fild dword ptr ds : [0x022032E0]
		push 0xFF
		jmp u0x505118
	}
}

unsigned u0x505498 = 0x505498;
__declspec(naked) void naked_0x50547F()
{
	__asm
	{
		push 0xFF
		fstp dword ptr ss : [esp + 0x2C]
		push 0x80
		fild dword ptr ds : [0x022032E0]
		push 0x80
		jmp u0x505498
	}
}

unsigned u0x505827 = 0x505827;
__declspec(naked) void naked_0x50580E()
{
	__asm
	{
		push 0x00
		fstp dword ptr ss : [esp + 0x2C]
		push 0xFF
		fild dword ptr ds : [0x022032E0]
		push 0x00
		jmp u0x505827
	}
}

unsigned u0x505BA8 = 0x505BA8;
__declspec(naked) void naked_0x505B8F()
{
	__asm
	{
		push 0x00
		fstp dword ptr ss : [esp + 0x2C]
		push 0x80
		fild dword ptr ds : [0x022032E0]
		push 0xFF
		jmp u0x505BA8
	}
}

unsigned u0x505F37 = 0x505F37;
__declspec(naked) void naked_0x505F1E()
{
	__asm
	{
		push 0xFF
		fstp dword ptr ss : [esp + 0x2C]
		push 0xFF
		fild dword ptr ds : [0x022032E0]
		push 0x00
		jmp u0x505F37
	}
}

void hook::stats_color()
{
	util::detour((void*)0x504D65, naked_0x504D65, 5);//strength
	util::detour((void*)0x5050FF, naked_0x5050FF, 5);//reaction
	util::detour((void*)0x50547F, naked_0x50547F, 5);//integent
	util::detour((void*)0x50580E, naked_0x50580E, 5);//wisdom
	util::detour((void*)0x505B8F, naked_0x505B8F, 5);//dexterity
	util::detour((void*)0x505F1E, naked_0x505F1E, 5);//lucky
}

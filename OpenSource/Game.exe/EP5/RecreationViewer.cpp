#include "pch.h"

unsigned u0x4AD709 = 0x4AD709;
unsigned u0x4AD694 = 0x4AD694;
__declspec(naked) void naked_0x4AD68F()
{
	__asm 
	{
		add eax, 0x92
		cmp edx, eax
		jg viewer
		jmp u0x4AD694
		viewer :
		jmp u0x4AD694
	}
}

void hook::recreationviewer()
{
	util::detour((void*)0x4AD68F, naked_0x4AD68F, 5);
}
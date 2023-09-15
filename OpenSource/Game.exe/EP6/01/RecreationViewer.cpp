#include "pch.h"

unsigned u0x4C42C6 = 0x4C42C6;
unsigned u0x4C4336 = 0x4C4336;
__declspec(naked) void naked_0x4C42BF()
{
	__asm
	{
		add eax, 0x88
		cmp edx, eax
		jg viewer
		jmp u0x4C42C6
		viewer :
		jmp u0x4C4336
	}
}

void hook::recreationviewer()
{
	util::detour((void*)0x4C42BF, naked_0x4C42BF, 7);
}
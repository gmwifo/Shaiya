#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <array>

#include <include/main.h>
#include <include/util.h>

unsigned u0x4C5926 = 0x4C5926;
unsigned u0x4C5996 = 0x4C5996;
__declspec(naked) void naked_0x4C591F()
{
	__asm
	{
		add eax, 0x88
		cmp edx, eax
		jg _u0x4C5996
		jmp u0x4C5926
		_u0x4C5996 :
		jmp u0x4C5996
	}
}

void hook::recreationviewer()
{
	util::detour((void*)0x4C591F, naked_0x4C591F, 7);
}

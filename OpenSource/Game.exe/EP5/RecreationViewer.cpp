#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <array>

#include <include/main.h>
#include <include/util.h>

unsigned u0x4AD709 = 0x4AD709;
unsigned u0x4AD694 = 0x4AD694;
__declspec(naked) void naked_0x4AD68F()
{
	__asm 
	{
		add eax, 0x88
		cmp edx, eax
		jg _u0x4AD709
		jmp u0x4AD694
		_u0x4AD709 :
		jmp u0x4AD709
	}
}

void hook::recreationviewer()
{
	util::detour((void*)0x4AD68F, naked_0x4AD68F, 5);
}

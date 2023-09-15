#include "pch.h"


unsigned u0x4AD674 = 0x4AD674;
__declspec(naked) void naked_0x4AD66F()
{
	_asm 
	{
		        add eax,0x45
				cmp ecx,eax
				jmp u0x4AD674

	}
}

unsigned u0x4AD694 = 0x4AD694;
__declspec(naked) void naked_0x4AD68F()
{
	__asm {
		    add eax, 0x92
			cmp edx, eax
			jmp u0x4AD694

	}
}

unsigned u0x4AD65E = 0x4AD65E;
__declspec(naked) void naked_0x4AD658()
{
	__asm {

		    mov eax, [esi + 0x000024C0]
			add eax,-0x10
			jmp u0x4AD65E

	}
}

void hook::recreationviewer()
{
	util::detour((void*)0x4AD66F, naked_0x4AD66F, 5);
	util::detour((void*)0x4AD68F, naked_0x4AD68F, 5);
	util::detour((void*)0x4AD658, naked_0x4AD658, 6);
}
#include "pch.h"

int Points[32]
{0,1,3,5,7,12,18,20,22,24,26,26,26,27,27,27,28,
28,28,28,28,28,29,29,29,29,29,30,30,30,30,30};

unsigned u0x542112 = 0x542112;

__declspec(naked) void naked_0x54210D() 
{
	__asm 
	{
		push edi
		movzx edi, byte ptr ds : [0x7C273C]
		mov eax, [Points+edi*4]
		pop edi
		mov dword ptr ds : [0x7C1930], eax
        jmp u0x542112
	}
}

void hook::vet_manager()
{
	util::detour((void*)0x54210D, naked_0x54210D, 5);
}

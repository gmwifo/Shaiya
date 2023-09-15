#include "pch.h"

unsigned u0x5038CC = 0x5038CC;

__declspec(naked) void naked_0x5038C3()
{
	__asm
	{
		cmp ecx, 0x14
		jb originalcode
		push eax
		push ecx
		push 0x10
		call GetAsyncKeyState
		test ah, ah
		pop ecx
		pop eax
		jge originalcode

		sub ecx, 0x14
		mov dword ptr ds : [esi + 0x48] , ecx
		add word ptr ds : [esi + eax * 2 + 0x3C] , 0x14
		jmp u0x5038CC

		originalcode :
		dec ecx
		mov dword ptr ds : [esi + 0x48] , ecx
		inc word ptr ds : [esi + eax * 2 + 0x3C]
		jmp u0x5038CC
	}
}

void hook::shiftstatspoint()
{
	util::detour((void*)0x5038C3, naked_0x5038C3, 9);
}
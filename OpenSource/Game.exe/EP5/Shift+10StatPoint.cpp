#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <array>

#include <include/main.h>
#include <include/util.h>

unsigned u0x5038CC = 0x5038CC;

__declspec(naked) void naked_0x5038C3()
{
	__asm
	{
		cmp ecx, 0x14
		jb _u0x5038CC
		push eax
		push ecx
		push 0x10
		call GetAsyncKeyState
		test ah, ah
		pop ecx
		pop eax
		jge _u0x5038CC

		sub ecx, 0x14
		mov dword ptr ds : [esi + 0x48] , ecx
		add word ptr ds : [esi + eax * 2 + 0x3C] , 0x14
		jmp u0x5038CC

		_u0x5038CC :
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

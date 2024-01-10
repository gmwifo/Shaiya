#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <array>

#include <include/main.h>
#include <include/util.h>

std::array<int, 32> points =
{
  1,
  3,
  5,
  7,
  12,
  18,
  20,
  22,
  24,
  26,
  26,
  26,
  27,
  27,
  27,
  28,
  28,
  28,
  28,
  28,
  28,
  29,
  29,
  29,
  29,
  29,
  30,
  30,
  30,
  30,
  30,
  30
};

unsigned u0x542AC2 = 0x542AC2;
__declspec(naked) void naked_0x542ABD()
{
	__asm 
	{
		push edi
		movzx edi, byte ptr ds : [0x7C273C]
		mov eax, [Points+edi*4]
		pop edi
		mov dword ptr ds : [0x7C1930], eax
        jmp u0x542AC2
	}
}

void hook::vet_manager()
{
	util::detour((void*)0x542ABD, naked_0x542ABD, 5);
}

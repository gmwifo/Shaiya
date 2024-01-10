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

unsigned u0x519DCC = 0x519DCC;

__declspec(naked) void naked_0x519DC7()
{
	__asm
	{
		push edi
		movzx edi, byte ptr ds : [0x71C1D8]
		mov eax, [Points + edi * 4]
		pop edi
		mov dword ptr ds : [0x719FB8] , eax
		jmp u0x519DCC
	}
}

void hook::vet_manager()
{
	util::detour((void*)0x519DC7, naked_0x519DC7, 5);
}

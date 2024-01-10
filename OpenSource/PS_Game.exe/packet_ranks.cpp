#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <array>

#include <include/main.h>
#include <include/util.h>

std::array<int, 32> kill_rank_table =

{
  1,
  50,
  300,
  1000,
  5000,
  10000,
  20000,
  30000,
  40000,
  50000,
  70000,
  90000,
  110000,
  130000,
  150000,
  200000,
  250000,
  300000,
  350000,
  400000,
  450000,
  500000,
  550000,
  600000,
  650000,
  700000,
  750000,
  800000,
  850000,
  900000,
  1000000
};

std::array<int, 32> points_table =

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

unsigned u0x49D018 = 0x49D018;
void __declspec(naked) naked_0x49D013()

{
	__asm
	{
		cmp ecx, [kill_rank_table]
		jl ranks

		ranks:
		mov ax, [points_table]
		mov[esp + 0x10],ax
                jmp u0x49D018
	}
}

void hook::packet_ranks()
{
	util::detour((void*)0x49D013, naked_0x49D013, 5);
}

#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <array>

#include <include/main.h>
#include <include/util.h>

auto choirock = "choirock.bmp";
unsigned u0x4345C1 = 0x4345C1;
void __declspec(naked) naked_0x4345BC()
{
	__asm
	{
		push choirock
		jmp u0x4345C1
	}
}

void hookInterface()
{
	//blackscreen
	std::array<std::uint8_t, 2> blackscreen{ 0x6A, 0x00 };
	std::memcpy((void*)0x434742, &blackscreen, 2);
	std::memcpy((void*)0x434880, &blackscreen, 2);
	std::memcpy((void*)0x434B42, &blackscreen, 2);
	std::memcpy((void*)0x434C31, &blackscreen, 2);
	//Choirock
	hook((void*)0x4345BC, naked_0x4345BC, 5);
}

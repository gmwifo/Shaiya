#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <array>

#include <include/main.h>
#include <include/util.h>

auto choirock = "choirock.bmp";
unsigned u0x434451 = 0x434451;
void __declspec(naked) naked_0x43444C()
{
	__asm
	{
		push choirock
		jmp u0x434451
	}
}

void hookInterface()
{
	//blackscreen
	std::array<std::uint8_t, 2> blackscreen{ 0x6A, 0x00 };
	std::memcpy((void*)0x4345D2, &blackscreen, 2);
	std::memcpy((void*)0x434710, &blackscreen, 2);
	std::memcpy((void*)0x4349D2, &blackscreen, 2);
	std::memcpy((void*)0x434AC1, &blackscreen, 2);
	//Choirock
	hook((void*)0x43444C, naked_0x43444C, 5);
}

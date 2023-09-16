#include "pch.h"


unsigned u0x52A1AA = 0x52A1AA;
__declspec(naked) void naked_0x52A195()
{
    __asm
    {
        push 0x00000000
        fild dword ptr ds : [0x22B1954]
        push 0x00000000
        push 0x000000FF
        jmp u0x52A1AA
    }
}

unsigned u0x52A56A = 0x52A56A;
__declspec(naked) void naked_0x52A555()
{
    __asm
    {
        push 0x000000CE
        fild dword ptr ds : [0x22B1954]
        push 0x00000000
        push 0x000000FF
        jmp u0x52A56A
    }
}

unsigned u0x52A92A = 0x52A92A;
__declspec(naked) void naked_0x52A915()
{
    __asm
    {
        push 0x000000FF
        fild dword ptr ds : [0x22B1954]
        push 0x00000080
        push 0x00000080
        jmp u0x52A92A
    }
}

unsigned u0x52ACEA = 0x52ACEA;
__declspec(naked) void naked_0x52ACD5()
{
    __asm
    {
        push 0x00000000
        fild dword ptr ds : [0x22B1954]
        push 0x000000FF
        push 0x00000000
        jmp u0x52ACEA
    }
}

unsigned u0x52B0AA = 0x52B0AA;
__declspec(naked) void naked_0x52B095()
{
    __asm
    {
        push 0x00000000
        fild dword ptr ds : [0x22B1954]
        push 0x00000080
        push 0x000000FF
        jmp u0x52B0AA
    }
}

unsigned u0x52B46A = 0x52B46A;
__declspec(naked) void naked_0x52B455()
{
    __asm
    {
        push 0x000000FF
        fild dword ptr ds : [0x22B1954]
        push 0x000000FF
        push 0x00000000
        jmp u0x52B46A
    }
}

void hook::stats_color()
{
	util::detour((void*)0x52A195, naked_0x52A195, 5);//strength
	util::detour((void*)0x52A555, naked_0x52A555, 5);//reaction
	util::detour((void*)0x52A915, naked_0x52A915, 5);//integent
	util::detour((void*)0x52ACD5, naked_0x52ACD5, 5);//wisdom
	util::detour((void*)0x52B095, naked_0x52B095, 5);//dexterity
	util::detour((void*)0x52B455, naked_0x52B455, 5);//lucky
}
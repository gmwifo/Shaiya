#include "pch.h"


unsigned u0x52AC9A = 0x52AC9A;
__declspec(naked) void naked_0x52AC85()
{
    __asm
    {
        push 0x00000000
        fild dword ptr ds : [0x22B1944]
        push 0x00000000
        push 0x000000FF
        jmp u0x52AC9A
    }
}

unsigned u0x52B05A = 0x52B05A;
__declspec(naked) void naked_0x52B045()
{
    __asm
    {
        push 0x000000CE
        fild dword ptr ds : [0x22B1944]
        push 0x00000000
        push 0x000000FF
        jmp u0x52B05A
    }
}

unsigned u0x52B41A = 0x52B41A;
__declspec(naked) void naked_0x52B405()
{
    __asm
    {
        push 0x000000FF
        fild dword ptr ds : [0x22B1944]
        push 0x00000080
        push 0x00000080
        jmp u0x52B41A
    }
}

unsigned u0x52B7DA = 0x52B7DA;
__declspec(naked) void naked_0x52B7C5()
{
    __asm
    {
        push 0x00000000
        fild dword ptr ds : [0x22B1944]
        push 0x000000FF
        push 0x00000000
        jmp u0x52B7DA
    }
}

unsigned u0x52BB9A = 0x52BB9A;
__declspec(naked) void naked_0x52BB85()
{
    __asm
    {
        push 0x00000000
        fild dword ptr ds : [0x22B1944]
        push 0x00000080
        push 0x000000FF
        jmp u0x52BB9A
    }
}

unsigned u0x52BF5A = 0x52BF5A;
__declspec(naked) void naked_0x52BF45()
{
    __asm
    {
        push 0x000000FF
        fild dword ptr ds : [0x22B1944]
        push 0x000000FF
        push 0x00000000
        jmp u0x52BF5A
    }
}

void hook::stats_color()
{
    util::detour((void*)0x52AC85, naked_0x52AC85, 5);//strength
    util::detour((void*)0x52B045, naked_0x52B045, 5);//reaction
    util::detour((void*)0x52B405, naked_0x52B405, 5);//integent
    util::detour((void*)0x52B7C5, naked_0x52B7C5, 5);//wisdom
    util::detour((void*)0x52BB85, naked_0x52BB85, 5);//dexterity
    util::detour((void*)0x52BF45, naked_0x52BF45, 5);//lucky
}
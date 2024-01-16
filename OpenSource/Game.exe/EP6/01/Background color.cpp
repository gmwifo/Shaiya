#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <array>

#include <include/main.h>
#include <include/util.h>

unsigned u0x43474A = 0x43474A;
void __declspec(naked) naked_0x43473C()
{
    __asm
    {
        push 0x00
        push ecx
        fstp dword ptr[esp]
        push 0x00
        push 0x03
        push 0x00
        push 0x00
        jmp u0x43474A
    }
}

unsigned u0x434888 = 0x434888;
void __declspec(naked) naked_0x43487A()
{
    __asm 
    {
        push 0x00
        push ecx
        fstp dword ptr[esp]
        push 0x00
        push 0x03
        push 0x00
        push 0x00
        jmp u0x434888
    }
}

unsigned u0x434B4A = 0x434B4A;
void __declspec(naked) naked_0x434B3C()
{
    __asm
    {
        push 0x00
        push ecx
        fstp dword ptr[esp]
        push 0x00
        push 0x03
        push 0x00
        push 0x00
        jmp u0x434B4A
    }
}

unsigned u0x434C39 = 0x434C39;
void __declspec(naked) naked_0x434C2B()
{
    __asm
    {
        push 0x00
        push ecx
        fstp dword ptr[esp]
        push 0x00
        push 0x03
        push 0x00
        push 0x00
        jmp u0x434C39
    }
}

void hook::background_color()
{
    util::detour((void*)0x43473C, naked_0x43473C, 6);
    util::detour((void*)0x43487A, naked_0x43487A, 6);
    util::detour((void*)0x434B3C, naked_0x434B3C, 6);
    util::detour((void*)0x434C2B, naked_0x434C2B, 6);
}
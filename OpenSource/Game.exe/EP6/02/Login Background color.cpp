#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <array>

#include <include/main.h>
#include <include/util.h>

unsigned u0x4345DA = 0x4345DA;
void __declspec(naked) naked_0x4345CC()
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
        jmp u0x4345DA
    }
}

unsigned u0x434718 = 0x434718;
void __declspec(naked) naked_0x43470A()
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
        jmp u0x434718
    }
}

unsigned u0x4349DA = 0x4349DA;
void __declspec(naked) naked_0x4349CC()
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
        jmp u0x4349DA
    }
}

unsigned u0x434AC9 = 0x434AC9;
void __declspec(naked) naked_0x434ABB()
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
        jmp u0x434AC9
    }
}

void hook::Login_background_color()
{
    util::detour((void*)0x4345CC, naked_0x4345CC, 6);
    util::detour((void*)0x43470A, naked_0x43470A, 6);
    util::detour((void*)0x4349CC, naked_0x4349CC, 6);
    util::detour((void*)0x434ABB, naked_0x434ABB, 6);
}

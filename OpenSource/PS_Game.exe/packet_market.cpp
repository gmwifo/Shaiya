unsigned u0x440EC5 = 0x440EC5;
unsigned u0x440ED3 = 0x440ED3;
void __declspec(naked) naked_0x440EBD()
{
	__asm
	{
		// fix search for spear in auction house board
		cmp al,0x4
		jne decrements
		cmp byte ptr[edx+0x24],0x34
		je originals
		cmp byte ptr[edx+0x24],0x33
		je originals
		cmp byte ptr[edx+0x24],0x6
		je originals
		jne decrements

		originals :
		jmp u0x440ED3

		decrements :
		cmp[edx+0xA4],al
		je originals
		jmp u0x440EC5
	}
}

void hook::packet_market()
{
    util::detour((void*)0x440EBD, naked_0x440EBD, 8);
}
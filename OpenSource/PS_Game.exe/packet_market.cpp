unsigned u0x440EC3 = 0x440EC3;
unsigned u0x440ED3 = 0x440ED3;
void __declspec(naked) naked_0x440EBD()
{
	__asm
	{
		// fix search for spear in auction house board
		cmp al,0x4
		jne _u0x440EC3
		cmp byte ptr[edx+0x24],0x34
		je _u0x440ED3
		cmp byte ptr[edx+0x24],0x33
		je _u0x440ED3
		cmp byte ptr[edx+0x24],0x6
		je _u0x440ED3

		_u0x440EC3 :
		cmp[edx+0xA4],al
		jmp u0x440EC3

		_u0x440ED3 :
		jmp u0x440ED3
	}
}

void hook::packet_market()
{
    util::detour((void*)0x440EBD, naked_0x440EBD, 6);
}

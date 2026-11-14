/* LEVEL_22:0x08EFD0 -- placement copy of LEVEL_01_0A0950.c: tests one bit of the global mask word. */
extern unsigned int D_001F4550;

int func_08EFD0(int bit)
{
    return (D_001F4550 >> bit) & 1;
}

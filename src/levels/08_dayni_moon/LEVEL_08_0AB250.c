/* LEVEL_08:0x0AB250 -- placement copy of LEVEL_01_0A0950.c: tests one bit of the global mask word. */
extern unsigned int D_002EDC10;

int func_0AB250(int bit)
{
    return (D_002EDC10 >> bit) & 1;
}

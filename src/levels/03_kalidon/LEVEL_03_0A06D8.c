/* LEVEL_03:0x0A06D8 -- placement copy of LEVEL_01_0A0950.c: tests one bit of the global mask word. */
extern unsigned int D_002B9810;

int func_0A06D8(int bit)
{
    return (D_002B9810 >> bit) & 1;
}

/* LEVEL_15:0x0812B8 -- placement copy of LEVEL_01_0A0950.c: tests one bit of the global mask word. */
extern unsigned int D_001B69D0;

int func_0812B8(int bit)
{
    return (D_001B69D0 >> bit) & 1;
}

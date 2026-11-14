/* LEVEL_17:0x08F108 -- placement copy of LEVEL_01_0A0950.c: tests one bit of the global mask word. */
extern unsigned int D_002477E0;

int func_08F108(int bit)
{
    return (D_002477E0 >> bit) & 1;
}

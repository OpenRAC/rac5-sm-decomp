/* LEVEL_24:0x09A1D0 -- placement copy of LEVEL_01_0A0950.c: tests one bit of the global mask word. */
extern unsigned int D_0026A850;

int func_09A1D0(int bit)
{
    return (D_0026A850 >> bit) & 1;
}

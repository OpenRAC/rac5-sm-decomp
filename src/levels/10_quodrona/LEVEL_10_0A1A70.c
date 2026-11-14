/* LEVEL_10:0x0A1A70 -- placement copy of LEVEL_01_0A0950.c: tests one bit of the global mask word. */
extern unsigned int D_002A7D90;

int func_0A1A70(int bit)
{
    return (D_002A7D90 >> bit) & 1;
}

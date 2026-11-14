/* LEVEL_02:0x0A7268 -- placement copy of LEVEL_01_0A0950.c: tests one bit of the global mask word. */
extern unsigned int D_002B5E90;

int func_0A7268(int bit)
{
    return (D_002B5E90 >> bit) & 1;
}

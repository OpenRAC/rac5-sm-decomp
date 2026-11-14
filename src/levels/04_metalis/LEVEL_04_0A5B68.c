/* LEVEL_04:0x0A5B68 -- placement copy of LEVEL_01_0A0950.c: tests one bit of the global mask word. */
extern unsigned int D_002B9190;

int func_0A5B68(int bit)
{
    return (D_002B9190 >> bit) & 1;
}

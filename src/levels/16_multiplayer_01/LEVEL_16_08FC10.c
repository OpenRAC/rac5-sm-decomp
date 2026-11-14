/* LEVEL_16:0x08FC10 -- placement copy of LEVEL_01_0A0950.c: tests one bit of the global mask word. */
extern unsigned int D_002564E0;

int func_08FC10(int bit)
{
    return (D_002564E0 >> bit) & 1;
}

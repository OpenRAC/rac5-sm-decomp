/* LEVEL_23:0x097698 -- placement copy of LEVEL_01_0A0950.c: tests one bit of the global mask word. */
extern unsigned int D_0026FDD0;

int func_097698(int bit)
{
    return (D_0026FDD0 >> bit) & 1;
}

/* LEVEL_05:0x09EF08 -- placement copy of LEVEL_01_0A0950.c: tests one bit of the global mask word. */
extern unsigned int D_0028A850;

int func_09EF08(int bit)
{
    return (D_0028A850 >> bit) & 1;
}

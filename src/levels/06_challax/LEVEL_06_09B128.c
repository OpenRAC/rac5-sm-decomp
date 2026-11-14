/* LEVEL_06:0x09B128 -- placement copy of LEVEL_01_0A0950.c: tests one bit of the global mask word. */
extern unsigned int D_0028B710;

int func_09B128(int bit)
{
    return (D_0028B710 >> bit) & 1;
}

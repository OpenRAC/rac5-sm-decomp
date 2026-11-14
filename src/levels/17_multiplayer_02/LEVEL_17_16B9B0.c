/* LEVEL_17:0x16B9B0 -- placement copy of LEVEL_01_1B0940.c: merges a field into the top bits of a global word; always returns 1. */
extern unsigned int D_001B1870;
extern unsigned int D_0023F624;

int func_16B9B0(void)
{
    D_001B1870 = (D_001B1870 & 0xF800FFFF) | (D_0023F624 << 16);
    return 1;
}

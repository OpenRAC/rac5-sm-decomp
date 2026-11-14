/* LEVEL_18:0x17B2F0 -- placement copy of LEVEL_01_1B0940.c: merges a field into the top bits of a global word; always returns 1. */
extern unsigned int D_001BF8C0;
extern unsigned int D_0024E6A4;

int func_17B2F0(void)
{
    D_001BF8C0 = (D_001BF8C0 & 0xF800FFFF) | (D_0024E6A4 << 16);
    return 1;
}

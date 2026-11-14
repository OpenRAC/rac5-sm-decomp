/* LEVEL_05:0x1AAAB0 -- placement copy of LEVEL_01_1B0940.c: merges a field into the top bits of a global word; always returns 1. */
extern unsigned int D_001F7E28;
extern unsigned int D_00283D64;

int func_1AAAB0(void)
{
    D_001F7E28 = (D_001F7E28 & 0xF800FFFF) | (D_00283D64 << 16);
    return 1;
}

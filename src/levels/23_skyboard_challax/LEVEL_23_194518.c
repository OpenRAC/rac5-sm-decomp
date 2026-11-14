/* LEVEL_23:0x194518 -- placement copy of LEVEL_01_1B0940.c: merges a field into the top bits of a global word; always returns 1. */
extern unsigned int D_001DC1C0;
extern unsigned int D_002692E4;

int func_194518(void)
{
    D_001DC1C0 = (D_001DC1C0 & 0xF800FFFF) | (D_002692E4 << 16);
    return 1;
}

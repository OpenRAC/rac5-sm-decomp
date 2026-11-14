/* LEVEL_04:0x1BD940 -- placement copy of LEVEL_01_1B0940.c: merges a field into the top bits of a global word; always returns 1. */
extern unsigned int D_00222498;
extern unsigned int D_002B26A4;

int func_1BD940(void)
{
    D_00222498 = (D_00222498 & 0xF800FFFF) | (D_002B26A4 << 16);
    return 1;
}

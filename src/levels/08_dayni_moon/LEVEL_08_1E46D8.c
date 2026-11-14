/* LEVEL_08:0x1E46D8 -- placement copy of LEVEL_01_1B0940.c: merges a field into the top bits of a global word; always returns 1. */
extern unsigned int D_00252510;
extern unsigned int D_002E7124;

int func_1E46D8(void)
{
    D_00252510 = (D_00252510 & 0xF800FFFF) | (D_002E7124 << 16);
    return 1;
}

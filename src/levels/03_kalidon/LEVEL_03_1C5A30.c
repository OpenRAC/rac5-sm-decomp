/* LEVEL_03:0x1C5A30 -- placement copy of LEVEL_01_1B0940.c: merges a field into the top bits of a global word; always returns 1. */
extern unsigned int D_00221D58;
extern unsigned int D_002B2D24;

int func_1C5A30(void)
{
    D_00221D58 = (D_00221D58 & 0xF800FFFF) | (D_002B2D24 << 16);
    return 1;
}

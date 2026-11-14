/* LEVEL_10:0x1BE1C8 -- placement copy of LEVEL_01_1B0940.c: merges a field into the top bits of a global word; always returns 1. */
extern unsigned int D_00211BF0;
extern unsigned int D_002A12A4;

int func_1BE1C8(void)
{
    D_00211BF0 = (D_00211BF0 & 0xF800FFFF) | (D_002A12A4 << 16);
    return 1;
}

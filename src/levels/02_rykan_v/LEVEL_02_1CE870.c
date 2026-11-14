/* LEVEL_02:0x1CE870 -- placement copy of LEVEL_01_1B0940.c: merges a field into the top bits of a global word; always returns 1. */
extern unsigned int D_0021DDE8;
extern unsigned int D_002AF3A4;

int func_1CE870(void)
{
    D_0021DDE8 = (D_0021DDE8 & 0xF800FFFF) | (D_002AF3A4 << 16);
    return 1;
}

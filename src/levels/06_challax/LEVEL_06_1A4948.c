/* LEVEL_06:0x1A4948 -- placement copy of LEVEL_01_1B0940.c: merges a field into the top bits of a global word; always returns 1. */
extern unsigned int D_001F7D48;
extern unsigned int D_00284C24;

int func_1A4948(void)
{
    D_001F7D48 = (D_001F7D48 & 0xF800FFFF) | (D_00284C24 << 16);
    return 1;
}

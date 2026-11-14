/* LEVEL_01:0x1B0940 -- merges a field into the top bits of a global word; always returns 1. */
extern unsigned int D_00208D98;
extern unsigned int D_00297EA4;

int func_1B0940(void)
{
    D_00208D98 = (D_00208D98 & 0xF800FFFF) | (D_00297EA4 << 16);
    return 1;
}

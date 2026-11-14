/* LEVEL_07:0x1C5DA0 -- placement copy of LEVEL_01_1B0940.c: merges a field into the top bits of a global word; always returns 1. */
extern unsigned int D_0021DA38;
extern unsigned int D_002AD7A4;

int func_1C5DA0(void)
{
    D_0021DA38 = (D_0021DA38 & 0xF800FFFF) | (D_002AD7A4 << 16);
    return 1;
}

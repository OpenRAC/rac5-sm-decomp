/* LEVEL_19:0x1734F0 -- placement copy of LEVEL_01_1B0940.c: merges a field into the top bits of a global word; always returns 1. */
extern unsigned int D_001BF538;
extern unsigned int D_0024E4A4;

int func_1734F0(void)
{
    D_001BF538 = (D_001BF538 & 0xF800FFFF) | (D_0024E4A4 << 16);
    return 1;
}

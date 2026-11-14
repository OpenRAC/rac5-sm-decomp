/* LEVEL_09:0x1A3708 -- placement copy of LEVEL_01_1B0940.c: merges a field into the top bits of a global word; always returns 1. */
extern unsigned int D_001F2AA0;
extern unsigned int D_0027F624;

int func_1A3708(void)
{
    D_001F2AA0 = (D_001F2AA0 & 0xF800FFFF) | (D_0027F624 << 16);
    return 1;
}

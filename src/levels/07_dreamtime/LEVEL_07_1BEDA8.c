/* LEVEL_07:0x1BEDA8 -- placement copy of LEVEL_01_1ABDE0.c: merges one global value into the 11-bit field at bit 16 of two control words, then stores a hash lookup. */
extern unsigned int D_0021D9A0;
extern unsigned int D_0021D9A4;
extern int D_0021D99C;
extern int D_002AD740;
extern int func_12D068(unsigned int value);

void func_1BEDA8(void)
{
    D_0021D9A0 = (D_0021D9A0 & 0xF800FFFF) | (D_002AD740 << 16);
    D_0021D9A4 = (D_0021D9A4 & 0xF800FFFF) | (D_002AD740 << 16);
    D_0021D99C = func_12D068(0x9D12A611u);
}

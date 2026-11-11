/* LEVEL_18:0x176C28 -- placement copy of LEVEL_01_1ABDE0.c: merges one global value into the 11-bit field at bit 16 of two control words, then stores a hash lookup. */
extern unsigned int D_001BF860;
extern unsigned int D_001BF864;
extern int D_001BF85C;
extern int D_0024E640;
extern int func_105B48(unsigned int value);

void func_176C28(void)
{
    D_001BF860 = (D_001BF860 & 0xF800FFFF) | (D_0024E640 << 16);
    D_001BF864 = (D_001BF864 & 0xF800FFFF) | (D_0024E640 << 16);
    D_001BF85C = func_105B48(0x9D12A611u);
}

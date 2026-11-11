/* LEVEL_05:0x1A63E0 -- placement copy of LEVEL_01_1ABDE0.c: merges one global value into the 11-bit field at bit 16 of two control words, then stores a hash lookup. */
extern unsigned int D_001F7DA0;
extern unsigned int D_001F7DA4;
extern int D_001F7D9C;
extern int D_00283D00;
extern int func_1259E0(unsigned int value);

void func_1A63E0(void)
{
    D_001F7DA0 = (D_001F7DA0 & 0xF800FFFF) | (D_00283D00 << 16);
    D_001F7DA4 = (D_001F7DA4 & 0xF800FFFF) | (D_00283D00 << 16);
    D_001F7D9C = func_1259E0(0x9D12A611u);
}

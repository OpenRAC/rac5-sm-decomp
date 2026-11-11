/* LEVEL_24:0x1888B8 -- placement copy of LEVEL_01_1ABDE0.c: merges one global value into the 11-bit field at bit 16 of two control words, then stores a hash lookup. */
extern unsigned int D_001D9BB0;
extern unsigned int D_001D9BB4;
extern int D_001D9BAC;
extern int D_00263D00;
extern int func_11FB68(unsigned int value);

void func_1888B8(void)
{
    D_001D9BB0 = (D_001D9BB0 & 0xF800FFFF) | (D_00263D00 << 16);
    D_001D9BB4 = (D_001D9BB4 & 0xF800FFFF) | (D_00263D00 << 16);
    D_001D9BAC = func_11FB68(0x9D12A611u);
}

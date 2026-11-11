/* LEVEL_17:0x167EB8 -- placement copy of LEVEL_01_1ABDE0.c: merges one global value into the 11-bit field at bit 16 of two control words, then stores a hash lookup. */
extern unsigned int D_001B1808;
extern unsigned int D_001B180C;
extern int D_001B1804;
extern int D_0023F5C0;
extern int func_106410(unsigned int value);

void func_167EB8(void)
{
    D_001B1808 = (D_001B1808 & 0xF800FFFF) | (D_0023F5C0 << 16);
    D_001B180C = (D_001B180C & 0xF800FFFF) | (D_0023F5C0 << 16);
    D_001B1804 = func_106410(0x9D12A611u);
}

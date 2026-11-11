/* LEVEL_09:0x19C5B8 -- placement copy of LEVEL_01_1ABDE0.c: merges one global value into the 11-bit field at bit 16 of two control words, then stores a hash lookup. */
extern unsigned int D_001F29F8;
extern unsigned int D_001F29FC;
extern int D_001F29F4;
extern int D_0027F5C0;
extern int func_123000(unsigned int value);

void func_19C5B8(void)
{
    D_001F29F8 = (D_001F29F8 & 0xF800FFFF) | (D_0027F5C0 << 16);
    D_001F29FC = (D_001F29FC & 0xF800FFFF) | (D_0027F5C0 << 16);
    D_001F29F4 = func_123000(0x9D12A611u);
}

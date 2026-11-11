/* LEVEL_02:0x1C9DC8 -- placement copy of LEVEL_01_1ABDE0.c: merges one global value into the 11-bit field at bit 16 of two control words, then stores a hash lookup. */
extern unsigned int D_0021DD58;
extern unsigned int D_0021DD5C;
extern int D_0021DD54;
extern int D_002AF340;
extern int func_130418(unsigned int value);

void func_1C9DC8(void)
{
    D_0021DD58 = (D_0021DD58 & 0xF800FFFF) | (D_002AF340 << 16);
    D_0021DD5C = (D_0021DD5C & 0xF800FFFF) | (D_002AF340 << 16);
    D_0021DD54 = func_130418(0x9D12A611u);
}

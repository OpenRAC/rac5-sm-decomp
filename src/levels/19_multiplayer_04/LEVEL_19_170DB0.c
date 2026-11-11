/* LEVEL_19:0x170DB0 -- placement copy of LEVEL_01_1ABDE0.c: merges one global value into the 11-bit field at bit 16 of two control words, then stores a hash lookup. */
extern unsigned int D_001BF4E8;
extern unsigned int D_001BF4EC;
extern int D_001BF4E4;
extern int D_0024E440;
extern int func_107538(unsigned int value);

void func_170DB0(void)
{
    D_001BF4E8 = (D_001BF4E8 & 0xF800FFFF) | (D_0024E440 << 16);
    D_001BF4EC = (D_001BF4EC & 0xF800FFFF) | (D_0024E440 << 16);
    D_001BF4E4 = func_107538(0x9D12A611u);
}

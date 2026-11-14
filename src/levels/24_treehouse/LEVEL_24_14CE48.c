/* LEVEL_24:0x14CE48 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_001D83D4;
extern unsigned int D_00263EF8;

void func_14CE48(void)
{
    D_001D83D4 = (D_001D83D4 & 0xF800FFFFU) | (D_00263EF8 << 16);
}

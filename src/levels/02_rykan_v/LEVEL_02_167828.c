/* LEVEL_02:0x167828 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_0021C50C;
extern unsigned int D_002AF538;

void func_167828(void)
{
    D_0021C50C = (D_0021C50C & 0xF800FFFFU) | (D_002AF538 << 16);
}

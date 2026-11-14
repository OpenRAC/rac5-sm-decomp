/* LEVEL_09:0x150570 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_001F0F3C;
extern unsigned int D_0027F7B8;

void func_150570(void)
{
    D_001F0F3C = (D_001F0F3C & 0xF800FFFFU) | (D_0027F7B8 << 16);
}

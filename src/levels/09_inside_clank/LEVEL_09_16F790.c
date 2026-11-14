/* LEVEL_09:0x16F790 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_001F1794;
extern unsigned int D_0027F55C;

void func_16F790(void)
{
    D_001F1794 = (D_001F1794 & 0xF800FFFFU) | (D_0027F55C << 16);
}

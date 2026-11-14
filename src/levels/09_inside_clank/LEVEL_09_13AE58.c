/* LEVEL_09:0x13AE58 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_001F0C8C;
extern unsigned int D_0027F55C;

void func_13AE58(void)
{
    D_001F0C8C = (D_001F0C8C & 0xF800FFFFU) | (D_0027F55C << 16);
}

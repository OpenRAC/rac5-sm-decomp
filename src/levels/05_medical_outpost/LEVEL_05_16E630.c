/* LEVEL_05:0x16E630 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_001F6B1C;
extern unsigned int D_00283C9C;

void func_16E630(void)
{
    D_001F6B1C = (D_001F6B1C & 0xF800FFFFU) | (D_00283C9C << 16);
}

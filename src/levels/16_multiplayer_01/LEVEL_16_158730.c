/* LEVEL_16:0x158730 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_001BDBF4;
extern unsigned int D_0024E25C;

void func_158730(void)
{
    D_001BDBF4 = (D_001BDBF4 & 0xF800FFFFU) | (D_0024E25C << 16);
}

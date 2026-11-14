/* LEVEL_05:0x13D7E0 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_001F620C;
extern unsigned int D_00283C9C;

void func_13D7E0(void)
{
    D_001F620C = (D_001F620C & 0xF800FFFFU) | (D_00283C9C << 16);
}

/* LEVEL_03:0x140288 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_0021F80C;
extern unsigned int D_002B2C5C;

void func_140288(void)
{
    D_0021F80C = (D_0021F80C & 0xF800FFFFU) | (D_002B2C5C << 16);
}

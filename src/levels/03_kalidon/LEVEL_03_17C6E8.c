/* LEVEL_03:0x17C6E8 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_0022036C;
extern unsigned int D_002B2C5C;

void func_17C6E8(void)
{
    D_0022036C = (D_0022036C & 0xF800FFFFU) | (D_002B2C5C << 16);
}

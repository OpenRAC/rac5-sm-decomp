/* LEVEL_06:0x138570 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_001F5D8C;
extern unsigned int D_00284B5C;

void func_138570(void)
{
    D_001F5D8C = (D_001F5D8C & 0xF800FFFFU) | (D_00284B5C << 16);
}

/* LEVEL_23:0x1335C0 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_001DA58C;
extern unsigned int D_0026921C;

void func_1335C0(void)
{
    D_001DA58C = (D_001DA58C & 0xF800FFFFU) | (D_0026921C << 16);
}

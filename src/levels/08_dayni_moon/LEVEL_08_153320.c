/* LEVEL_08:0x153320 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_0025004C;
extern unsigned int D_002E705C;

void func_153320(void)
{
    D_0025004C = (D_0025004C & 0xF800FFFFU) | (D_002E705C << 16);
}

/* LEVEL_23:0x155110 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_001DABF4;
extern unsigned int D_00269478;

void func_155110(void)
{
    D_001DABF4 = (D_001DABF4 & 0xF800FFFFU) | (D_00269478 << 16);
}

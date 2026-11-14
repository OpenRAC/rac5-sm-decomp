/* LEVEL_02:0x1481F0 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_0021C14C;
extern unsigned int D_002AF2DC;

void func_1481F0(void)
{
    D_0021C14C = (D_0021C14C & 0xF800FFFFU) | (D_002AF2DC << 16);
}

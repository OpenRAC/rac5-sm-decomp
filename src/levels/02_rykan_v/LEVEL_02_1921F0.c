/* LEVEL_02:0x1921F0 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_0021CBBC;
extern unsigned int D_002AF2DC;

void func_1921F0(void)
{
    D_0021CBBC = (D_0021CBBC & 0xF800FFFFU) | (D_002AF2DC << 16);
}

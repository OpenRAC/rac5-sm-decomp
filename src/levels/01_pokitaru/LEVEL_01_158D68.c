/* LEVEL_01:0x158D68 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_0020744C;
extern unsigned int D_00298038;

void func_158D68(void)
{
    D_0020744C = (D_0020744C & 0xF800FFFFU) | (D_00298038 << 16);
}

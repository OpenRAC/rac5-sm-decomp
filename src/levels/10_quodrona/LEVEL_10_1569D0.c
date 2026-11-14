/* LEVEL_10:0x1569D0 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_002100AC;
extern unsigned int D_002A1438;

void func_1569D0(void)
{
    D_002100AC = (D_002100AC & 0xF800FFFFU) | (D_002A1438 << 16);
}

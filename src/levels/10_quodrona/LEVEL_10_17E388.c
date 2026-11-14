/* LEVEL_10:0x17E388 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_00210904;
extern unsigned int D_002A11DC;

void func_17E388(void)
{
    D_00210904 = (D_00210904 & 0xF800FFFFU) | (D_002A11DC << 16);
}

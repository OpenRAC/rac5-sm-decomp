/* LEVEL_10:0x13FD00 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_0020FDEC;
extern unsigned int D_002A11DC;

void func_13FD00(void)
{
    D_0020FDEC = (D_0020FDEC & 0xF800FFFFU) | (D_002A11DC << 16);
}

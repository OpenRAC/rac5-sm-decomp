/* LEVEL_02:0x1D84C0 -- placement copy of LEVEL_01_1B5FD0.c: clears the four-entry slot table. */
extern int D_0021DEB0[4];
void func_1D84C0(void)
{
    int i;
    for (i = 0; i != 4; i++) {
        D_0021DEB0[i] = 0;
    }
}

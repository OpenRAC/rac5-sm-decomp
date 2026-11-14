/* LEVEL_03:0x1CB0C0 -- placement copy of LEVEL_01_1B5FD0.c: clears the four-entry slot table. */
extern int D_00221DF8[4];
void func_1CB0C0(void)
{
    int i;
    for (i = 0; i != 4; i++) {
        D_00221DF8[i] = 0;
    }
}

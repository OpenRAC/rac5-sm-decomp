/* LEVEL_08:0x1F2010 -- placement copy of LEVEL_01_1B5FD0.c: clears the four-entry slot table. */
extern int D_00252718[4];
void func_1F2010(void)
{
    int i;
    for (i = 0; i != 4; i++) {
        D_00252718[i] = 0;
    }
}

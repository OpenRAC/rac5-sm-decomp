/* LEVEL_07:0x1CD818 -- placement copy of LEVEL_01_1B5FD0.c: clears the four-entry slot table. */
extern int D_0021DAE8[4];
void func_1CD818(void)
{
    int i;
    for (i = 0; i != 4; i++) {
        D_0021DAE8[i] = 0;
    }
}

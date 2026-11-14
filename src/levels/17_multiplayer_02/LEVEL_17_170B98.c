/* LEVEL_17:0x170B98 -- placement copy of LEVEL_01_1B5FD0.c: clears the four-entry slot table. */
extern int D_001B18A0[4];
void func_170B98(void)
{
    int i;
    for (i = 0; i != 4; i++) {
        D_001B18A0[i] = 0;
    }
}

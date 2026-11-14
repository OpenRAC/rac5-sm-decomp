/* LEVEL_24:0x197AB8 -- placement copy of LEVEL_01_1B5FD0.c: clears the four-entry slot table. */
extern int D_001D9E10[4];
void func_197AB8(void)
{
    int i;
    for (i = 0; i != 4; i++) {
        D_001D9E10[i] = 0;
    }
}

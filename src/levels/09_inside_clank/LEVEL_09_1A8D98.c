/* LEVEL_09:0x1A8D98 -- placement copy of LEVEL_01_1B5FD0.c: clears the four-entry slot table. */
extern int D_001F2B40[4];
void func_1A8D98(void)
{
    int i;
    for (i = 0; i != 4; i++) {
        D_001F2B40[i] = 0;
    }
}

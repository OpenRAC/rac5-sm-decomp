/* LEVEL_06:0x1A9FD8 -- placement copy of LEVEL_01_1B5FD0.c: clears the four-entry slot table. */
extern int D_001F7DE8[4];
void func_1A9FD8(void)
{
    int i;
    for (i = 0; i != 4; i++) {
        D_001F7DE8[i] = 0;
    }
}

/* LEVEL_05:0x1B2C30 -- placement copy of LEVEL_01_1B5FD0.c: clears the four-entry slot table. */
extern int D_001F7EE0[4];
void func_1B2C30(void)
{
    int i;
    for (i = 0; i != 4; i++) {
        D_001F7EE0[i] = 0;
    }
}

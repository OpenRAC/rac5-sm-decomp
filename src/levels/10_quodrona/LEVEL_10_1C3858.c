/* LEVEL_10:0x1C3858 -- placement copy of LEVEL_01_1B5FD0.c: clears the four-entry slot table. */
extern int D_00211C90[4];
void func_1C3858(void)
{
    int i;
    for (i = 0; i != 4; i++) {
        D_00211C90[i] = 0;
    }
}

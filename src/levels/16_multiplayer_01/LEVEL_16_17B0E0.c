/* LEVEL_16:0x17B0E0 -- placement copy of LEVEL_01_1B5FD0.c: clears the four-entry slot table. */
extern int D_001BE380[4];
void func_17B0E0(void)
{
    int i;
    for (i = 0; i != 4; i++) {
        D_001BE380[i] = 0;
    }
}

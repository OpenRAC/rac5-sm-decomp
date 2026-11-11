/* LEVEL_10:0x065120 -- placement copy of LEVEL_01_0662F0.c: creates two ordinary handles (slot 1 and slot 0, mode 10) and stores them in globals. */
extern int func_0DE4C0(int a, int b, int c, int d);
extern int D_001FDA34;
extern int D_001FDA30;

void func_065120(void)
{
    D_001FDA34 = func_0DE4C0(1, 10, 1, 0);
    D_001FDA30 = func_0DE4C0(0, 10, 1, 0);
}

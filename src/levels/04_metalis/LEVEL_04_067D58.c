/* LEVEL_04:0x067D58 -- placement copy of LEVEL_01_0662F0.c: creates two ordinary handles (slot 1 and slot 0, mode 10) and stores them in globals. */
extern int func_0E2940(int a, int b, int c, int d);
extern int D_0020DEF4;
extern int D_0020DEF0;

void func_067D58(void)
{
    D_0020DEF4 = func_0E2940(1, 10, 1, 0);
    D_0020DEF0 = func_0E2940(0, 10, 1, 0);
}

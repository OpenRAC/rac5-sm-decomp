/* LEVEL_17:0x058728 -- placement copy of LEVEL_01_0662F0.c: creates two ordinary handles (slot 1 and slot 0, mode 10) and stores them in globals. */
extern int func_0CB990(int a, int b, int c, int d);
extern int D_00195A84;
extern int D_00195A80;

void func_058728(void)
{
    D_00195A84 = func_0CB990(1, 10, 1, 0);
    D_00195A80 = func_0CB990(0, 10, 1, 0);
}

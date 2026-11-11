/* LEVEL_07:0x066FF8 -- placement copy of LEVEL_01_0662F0.c: creates two ordinary handles (slot 1 and slot 0, mode 10) and stores them in globals. */
extern int func_0DEE70(int a, int b, int c, int d);
extern int D_00208D34;
extern int D_00208D30;

void func_066FF8(void)
{
    D_00208D34 = func_0DEE70(1, 10, 1, 0);
    D_00208D30 = func_0DEE70(0, 10, 1, 0);
}

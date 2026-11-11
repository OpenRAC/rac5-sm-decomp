/* LEVEL_20:0x052320 -- placement copy of LEVEL_01_0662F0.c: creates two ordinary handles (slot 1 and slot 0, mode 10) and stores them in globals. */
extern int func_0B5E70(int a, int b, int c, int d);
extern int D_00104B64;
extern int D_00104B60;

void func_052320(void)
{
    D_00104B64 = func_0B5E70(1, 10, 1, 0);
    D_00104B60 = func_0B5E70(0, 10, 1, 0);
}

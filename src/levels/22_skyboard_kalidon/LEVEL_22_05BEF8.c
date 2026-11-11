/* LEVEL_22:0x05BEF8 -- placement copy of LEVEL_01_0662F0.c: creates two ordinary handles (slot 1 and slot 0, mode 10) and stores them in globals. */
extern int func_0CAE28(int a, int b, int c, int d);
extern int D_00153DB4;
extern int D_00153DB0;

void func_05BEF8(void)
{
    D_00153DB4 = func_0CAE28(1, 10, 1, 0);
    D_00153DB0 = func_0CAE28(0, 10, 1, 0);
}

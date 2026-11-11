/* LEVEL_05:0x063F58 -- placement copy of LEVEL_01_0662F0.c: creates two ordinary handles (slot 1 and slot 0, mode 10) and stores them in globals. */
extern int func_0DB3B8(int a, int b, int c, int d);
extern int D_001E3DB4;
extern int D_001E3DB0;

void func_063F58(void)
{
    D_001E3DB4 = func_0DB3B8(1, 10, 1, 0);
    D_001E3DB0 = func_0DB3B8(0, 10, 1, 0);
}

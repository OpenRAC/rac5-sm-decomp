/* LEVEL_10:0x146FE0 -- creates three handles with fixed parameters and stores them into globals. */
extern int D_0020FE74;
extern int D_0020FE78;
extern int D_0020FE7C;
extern int func_0DE4C0(int a, int b, int c, int d);

void func_146FE0(void)
{
    D_0020FE78 = func_0DE4C0(0, 7, 1, 0);
    D_0020FE74 = func_0DE4C0(1, 0xE, 3, 0);
    D_0020FE7C = func_0DE4C0(0, 9, 1, 0);
}

/* LEVEL_16:0x0130F0 -- placement copy of LEVEL_01_013708.c: calls a setup helper, then forwards its integer result as the fourth argument to a second helper. */

extern int func_018740(int a0, int a1, int a2, int a3);
extern float func_013150(int a0, int a1, int a2, int a3, int a4);

float func_0130F0(int a0, int a1, int a2, int a3)
{
    int r;

    r = func_018740(a0, a1, a2, a3);
    return func_013150(a0, a1, a2, r, a3);
}

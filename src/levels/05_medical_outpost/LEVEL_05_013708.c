/* LEVEL_05:0x013708 -- placement copy of LEVEL_01_013708.c: calls a setup helper, then forwards its integer result as the fourth argument to a second helper. */

extern int func_0198F0(int a0, int a1, int a2, int a3);
extern float func_013768(int a0, int a1, int a2, int a3, int a4);

float func_013708(int a0, int a1, int a2, int a3)
{
    int r;

    r = func_0198F0(a0, a1, a2, a3);
    return func_013768(a0, a1, a2, r, a3);
}

/* LEVEL_04:0x013520 -- placement copy of LEVEL_01_013708.c: calls a setup helper, then forwards its integer result as the fourth argument to a second helper. */

extern int func_019FA8(int a0, int a1, int a2, int a3);
extern float func_013580(int a0, int a1, int a2, int a3, int a4);

float func_013520(int a0, int a1, int a2, int a3)
{
    int r;

    r = func_019FA8(a0, a1, a2, a3);
    return func_013580(a0, a1, a2, r, a3);
}

/* LEVEL_10:0x0134B0 -- placement copy of LEVEL_01_013708.c: calls a setup helper, then forwards its integer result as the fourth argument to a second helper. */

extern char *func_019968(void);
extern float func_013510(int a0, int a1, int a2, int a3, int a4);

float func_0134B0(int a0, int a1, int a2, int a3)
{
    int r;

    r = (int)func_019968();
    return func_013510(a0, a1, a2, r, a3);
}

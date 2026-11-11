/* LEVEL_02:0x0136F0 -- placement copy of LEVEL_01_013708.c: calls a setup helper, then forwards its integer result as the fourth argument to a second helper. */

extern char *func_01ACB0(void);
extern float func_013750(int a0, int a1, int a2, int a3, int a4);

float func_0136F0(int a0, int a1, int a2, int a3)
{
    int r;

    r = (int)func_01ACB0();
    return func_013750(a0, a1, a2, r, a3);
}

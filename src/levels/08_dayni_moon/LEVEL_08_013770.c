/* LEVEL_08:0x013770 -- placement copy of LEVEL_01_013708.c: calls a setup helper, then forwards its integer result as the fourth argument to a second helper. */

extern char *func_01ACA0(void);
extern float func_0137D0(int a0, int a1, int a2, int a3, int a4);

float func_013770(int a0, int a1, int a2, int a3)
{
    int r;

    r = (int)func_01ACA0();
    return func_0137D0(a0, a1, a2, r, a3);
}

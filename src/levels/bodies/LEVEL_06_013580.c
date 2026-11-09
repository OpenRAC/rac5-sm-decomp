/* LEVEL_06:0x013580 -- placement copy of LEVEL_01_013708.c: calls a setup helper, then forwards its integer result as the fourth argument to a second helper. */

extern int func_018B60(int a0, int a1, int a2, int a3);
extern float func_0135E0(int a0, int a1, int a2, int a3, int a4);

float func_013580(int a0, int a1, int a2, int a3)
{
    int r;

    r = func_018B60(a0, a1, a2, a3);
    return func_0135E0(a0, a1, a2, r, a3);
}

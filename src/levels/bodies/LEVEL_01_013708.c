/* LEVEL_01:0x013708 -- calls a setup helper, then forwards its integer result as the fourth argument to a second helper. */

extern char *func_01A2D0(void);
extern float func_013768(int a0, int a1, int a2, int a3, int a4);

float func_013708(int a0, int a1, int a2, int a3)
{
    int r;

    r = (int)func_01A2D0();
    return func_013768(a0, a1, a2, r, a3);
}

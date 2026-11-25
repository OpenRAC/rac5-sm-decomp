/* LEVEL_04:0x013520 -- placement copy of LEVEL_01_013708.c: calls a setup helper, then forwards its result as the fourth argument to a second helper. */

extern void *func_019FA8(void);
extern float func_013580(int a0, int a1, int a2, void *a3, int a4);

float func_013520(int a0, int a1, int a2, int a3)
{
    void *r;

    r = func_019FA8();
    return func_013580(a0, a1, a2, r, a3);
}

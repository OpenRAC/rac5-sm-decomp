/* LEVEL_07:0x1AF710 -- placement copy of LEVEL_01_19D568.c: forwards five arguments to a handler when the key matches the current one, otherwise reports 1. */
extern int D_0024AFDC;
extern void func_03C170(long long first, long long second, long long third, long long fourth, long long fifth);

int func_1AF710(int key, int a, int b, int c, int d, int e)
{
    if (key != D_0024AFDC) {
        return 1;
    }
    func_03C170(a, b, c, d, e);
}

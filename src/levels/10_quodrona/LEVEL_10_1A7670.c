/* LEVEL_10:0x1A7670 -- placement copy of LEVEL_01_19D568.c: forwards five arguments to a handler when the key matches the current one, otherwise reports 1. */
extern int D_0023EADC;
extern void func_03A378(long long first, long long second, long long third, long long fourth, long long fifth);

int func_1A7670(int key, int a, int b, int c, int d, int e)
{
    if (key != D_0023EADC) {
        return 1;
    }
    func_03A378(a, b, c, d, e);
}

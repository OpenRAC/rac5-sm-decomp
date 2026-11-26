/* LEVEL_04:0x1A9118 -- placement copy of LEVEL_01_19D568.c: forwards five arguments to a handler when the key matches the current one, otherwise reports 1. */
extern int D_0024FEEC;
extern void func_03D690(long long first, long long second, long long third, long long fourth, long long fifth);

int func_1A9118(int key, int a, int b, int c, int d, int e)
{
    if (key != D_0024FEEC) {
        return 1;
    }
    func_03D690(a, b, c, d, e);
}

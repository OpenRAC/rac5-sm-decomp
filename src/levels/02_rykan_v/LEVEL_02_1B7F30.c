/* LEVEL_02:0x1B7F30 -- placement copy of LEVEL_01_19D568.c: forwards five arguments to a handler when the key matches the current one, otherwise reports 1. */
extern int D_0024CBEC;
extern void func_040AF8(long long first, long long second, long long third, long long fourth, long long fifth);

int func_1B7F30(int key, int a, int b, int c, int d, int e)
{
    if (key != D_0024CBEC) {
        return 1;
    }
    func_040AF8(a, b, c, d, e);
}

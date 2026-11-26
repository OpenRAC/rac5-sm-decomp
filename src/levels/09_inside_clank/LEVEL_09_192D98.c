/* LEVEL_09:0x192D98 -- placement copy of LEVEL_01_19D568.c: forwards five arguments to a handler when the key matches the current one, otherwise reports 1. */
extern int D_0021CE5C;
extern void func_038170(long long first, long long second, long long third, long long fourth, long long fifth);

int func_192D98(int key, int a, int b, int c, int d, int e)
{
    if (key != D_0021CE5C) {
        return 1;
    }
    func_038170(a, b, c, d, e);
}

/* LEVEL_04:0x166598 -- placement copy of LEVEL_02_171C18.c: when the first argument equals the current global handle, forwards the other five to the helper and returns 2; otherwise returns 1. */
extern int D_0024FEEC;
extern void func_03D690(long long first, long long second, long long third, long long fourth, long long fifth);
int func_166598(int handle, long long a, long long b, long long c, long long d, long long e)
{
    if (handle == D_0024FEEC) {
        func_03D690(a, b, c, d, e);
        return 2;
    }
    return 1;
}

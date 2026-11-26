/* LEVEL_02:0x171C18 -- when the first argument equals the current global handle, forwards the other five to the helper and returns 2; otherwise returns 1. */
extern int D_0024CBEC;
extern void func_040AF8(long long first, long long second, long long third, long long fourth, long long fifth);
int func_171C18(int handle, long long a, long long b, long long c, long long d, long long e)
{
    if (handle == D_0024CBEC) {
        func_040AF8(a, b, c, d, e);
        return 2;
    }
    return 1;
}

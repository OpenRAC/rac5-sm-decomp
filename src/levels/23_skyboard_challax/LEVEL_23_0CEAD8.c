/* LEVEL_23:0x0CEAD8 -- placement copy of LEVEL_01_0D7CA8.c: returns 1 when the helper is nonzero and the global equals value. */
extern int func_0CE750(void);
extern int D_001D9B3C;

long long func_0CEAD8(int value)
{
    long long r;
    int t;

    r = 0;
    if (func_0CE750() != 0) {
        t = D_001D9B3C == value;
        r = t;
    }
    return r;
}

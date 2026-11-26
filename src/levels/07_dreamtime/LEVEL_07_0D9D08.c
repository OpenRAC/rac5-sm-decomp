/* LEVEL_07:0x0D9D08 -- placement copy of LEVEL_01_0D7CA8.c: returns 1 when the helper is nonzero and the global equals value. */
extern int func_0D9980(void);
extern int D_0021AA3C;

long long func_0D9D08(int value)
{
    long long r;
    int t;

    r = 0;
    if (func_0D9980() != 0) {
        t = D_0021AA3C == value;
        r = t;
    }
    return r;
}

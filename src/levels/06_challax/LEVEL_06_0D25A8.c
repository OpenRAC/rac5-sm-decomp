/* LEVEL_06:0x0D25A8 -- placement copy of LEVEL_01_0D7CA8.c: returns 1 when the helper is nonzero and the global equals value. */
extern int func_0D2220(void);
extern int D_001F563C;

long long func_0D25A8(int value)
{
    long long r;
    int t;

    r = 0;
    if (func_0D2220() != 0) {
        t = D_001F563C == value;
        r = t;
    }
    return r;
}

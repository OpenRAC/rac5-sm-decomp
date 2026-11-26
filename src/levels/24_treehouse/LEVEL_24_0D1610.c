/* LEVEL_24:0x0D1610 -- placement copy of LEVEL_01_0D7CA8.c: returns 1 when the helper is nonzero and the global equals value. */
extern int func_0D1288(void);
extern int D_001D73BC;

long long func_0D1610(int value)
{
    long long r;
    int t;

    r = 0;
    if (func_0D1288() != 0) {
        t = D_001D73BC == value;
        r = t;
    }
    return r;
}

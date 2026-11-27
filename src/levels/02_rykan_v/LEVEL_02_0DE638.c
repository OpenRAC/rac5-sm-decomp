/* LEVEL_02:0x0DE638 -- placement copy of LEVEL_01_0D7CA8.c: returns 1 when the helper is nonzero and the global equals value. */
extern int func_0DE2B0(void);
extern int D_0021B6FC;

long long func_0DE638(int value)
{
    long long r;
    int t;

    r = 0;
    if (func_0DE2B0() != 0) {
        t = D_0021B6FC == value;
        r = t;
    }
    return r;
}

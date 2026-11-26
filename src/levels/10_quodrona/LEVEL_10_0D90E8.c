/* LEVEL_10:0x0D90E8 -- placement copy of LEVEL_01_0D7CA8.c: returns 1 when the helper is nonzero and the global equals value. */
extern int func_0D8D60(void);
extern int D_0020F73C;

long long func_0D90E8(int value)
{
    long long r;
    int t;

    r = 0;
    if (func_0D8D60() != 0) {
        t = D_0020F73C == value;
        r = t;
    }
    return r;
}

/* LEVEL_21:0x0B82E8 -- placement copy of LEVEL_01_0D7CA8.c: returns 1 when the helper is nonzero and the global equals value. */
extern int func_0B7F60(void);
extern int D_0015B3BC;

long long func_0B82E8(int value)
{
    long long r;
    int t;

    r = 0;
    if (func_0B7F60() != 0) {
        t = D_0015B3BC == value;
        r = t;
    }
    return r;
}

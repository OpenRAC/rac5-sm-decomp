/* LEVEL_09:0x0D4F58 -- placement copy of LEVEL_01_0D7CA8.c: returns 1 when the helper is nonzero and the global equals value. */
extern int func_0D4BD0(void);
extern int D_001F053C;

long long func_0D4F58(int value)
{
    long long r;
    int t;

    r = 0;
    if (func_0D4BD0() != 0) {
        t = D_001F053C == value;
        r = t;
    }
    return r;
}

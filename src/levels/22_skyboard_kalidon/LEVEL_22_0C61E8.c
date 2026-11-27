/* LEVEL_22:0x0C61E8 -- placement copy of LEVEL_01_0D7CA8.c: returns 1 when the helper is nonzero and the global equals value. */
extern int func_0C5E60(void);
extern int D_00165ABC;

long long func_0C61E8(int value)
{
    long long r;
    int t;

    r = 0;
    if (func_0C5E60() != 0) {
        t = D_00165ABC == value;
        r = t;
    }
    return r;
}

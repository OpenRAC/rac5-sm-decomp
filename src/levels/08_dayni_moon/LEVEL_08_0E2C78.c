/* LEVEL_08:0x0E2C78 -- placement copy of LEVEL_01_0D7CA8.c: returns 1 when the helper is nonzero and the global equals value. */
extern int func_0E28F0(void);
extern int D_0024F5FC;

long long func_0E2C78(int value)
{
    long long r;
    int t;

    r = 0;
    if (func_0E28F0() != 0) {
        t = D_0024F5FC == value;
        r = t;
    }
    return r;
}

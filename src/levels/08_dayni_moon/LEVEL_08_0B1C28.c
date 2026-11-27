/* LEVEL_08:0x0B1C28 -- placement copy of LEVEL_01_0A7330.c: tells whether both handle words are set (not -1). */
extern int D_00240028;
extern int D_0024002C;

long long func_0B1C28(void)
{
    long long r;
    int t;

    r = 0;
    if (D_00240028 != -1) {
        t = D_0024002C != -1;
        r = t;
    }
    return r;
}

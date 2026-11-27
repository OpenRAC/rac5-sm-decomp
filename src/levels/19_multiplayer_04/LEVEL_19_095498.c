/* LEVEL_19:0x095498 -- placement copy of LEVEL_01_0A7330.c: tells whether both handle words are set (not -1). */
extern int D_001A62B8;
extern int D_001A62BC;

long long func_095498(void)
{
    long long r;
    int t;

    r = 0;
    if (D_001A62B8 != -1) {
        t = D_001A62BC != -1;
        r = t;
    }
    return r;
}

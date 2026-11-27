/* LEVEL_07:0x0A9330 -- placement copy of LEVEL_01_0A7330.c: tells whether both handle words are set (not -1). */
extern int D_0020B468;
extern int D_0020B46C;

long long func_0A9330(void)
{
    long long r;
    int t;

    r = 0;
    if (D_0020B468 != -1) {
        t = D_0020B46C != -1;
        r = t;
    }
    return r;
}

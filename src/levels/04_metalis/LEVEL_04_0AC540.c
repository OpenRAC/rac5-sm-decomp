/* LEVEL_04:0x0AC540 -- placement copy of LEVEL_01_0A7330.c: tells whether both handle words are set (not -1). */
extern int D_00210628;
extern int D_0021062C;

long long func_0AC540(void)
{
    long long r;
    int t;

    r = 0;
    if (D_00210628 != -1) {
        t = D_0021062C != -1;
        r = t;
    }
    return r;
}

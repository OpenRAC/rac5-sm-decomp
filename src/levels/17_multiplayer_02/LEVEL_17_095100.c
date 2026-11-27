/* LEVEL_17:0x095100 -- placement copy of LEVEL_01_0A7330.c: tells whether both handle words are set (not -1). */
extern int D_00198738;
extern int D_0019873C;

long long func_095100(void)
{
    long long r;
    int t;

    r = 0;
    if (D_00198738 != -1) {
        t = D_0019873C != -1;
        r = t;
    }
    return r;
}

/* LEVEL_03:0x0A70B0 -- placement copy of LEVEL_01_0A7330.c: tells whether both handle words are set (not -1). */
extern int D_0020F7E8;
extern int D_0020F7EC;

long long func_0A70B0(void)
{
    long long r;
    int t;

    r = 0;
    if (D_0020F7E8 != -1) {
        t = D_0020F7EC != -1;
        r = t;
    }
    return r;
}

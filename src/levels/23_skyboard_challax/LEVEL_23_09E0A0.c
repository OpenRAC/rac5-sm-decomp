/* LEVEL_23:0x09E0A0 -- placement copy of LEVEL_01_0A7330.c: tells whether both handle words are set (not -1). */
extern int D_001CA568;
extern int D_001CA56C;

long long func_09E0A0(void)
{
    long long r;
    int t;

    r = 0;
    if (D_001CA568 != -1) {
        t = D_001CA56C != -1;
        r = t;
    }
    return r;
}

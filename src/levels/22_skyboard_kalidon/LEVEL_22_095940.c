/* LEVEL_22:0x095940 -- placement copy of LEVEL_01_0A7330.c: tells whether both handle words are set (not -1). */
extern int D_001564E8;
extern int D_001564EC;

long long func_095940(void)
{
    long long r;
    int t;

    r = 0;
    if (D_001564E8 != -1) {
        t = D_001564EC != -1;
        r = t;
    }
    return r;
}

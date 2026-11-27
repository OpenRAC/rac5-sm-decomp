/* LEVEL_05:0x0A58F0 -- placement copy of LEVEL_01_0A7330.c: tells whether both handle words are set (not -1). */
extern int D_001E64E8;
extern int D_001E64EC;

long long func_0A58F0(void)
{
    long long r;
    int t;

    r = 0;
    if (D_001E64E8 != -1) {
        t = D_001E64EC != -1;
        r = t;
    }
    return r;
}

/* LEVEL_18:0x094C18 -- placement copy of LEVEL_01_0A7330.c: tells whether both handle words are set (not -1). */
extern int D_001A65B8;
extern int D_001A65BC;

long long func_094C18(void)
{
    long long r;
    int t;

    r = 0;
    if (D_001A65B8 != -1) {
        t = D_001A65BC != -1;
        r = t;
    }
    return r;
}

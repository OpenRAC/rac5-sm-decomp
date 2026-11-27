/* LEVEL_16:0x095C08 -- placement copy of LEVEL_01_0A7330.c: tells whether both handle words are set (not -1). */
extern int D_001A5138;
extern int D_001A513C;

long long func_095C08(void)
{
    long long r;
    int t;

    r = 0;
    if (D_001A5138 != -1) {
        t = D_001A513C != -1;
        r = t;
    }
    return r;
}

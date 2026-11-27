/* LEVEL_20:0x080300 -- placement copy of LEVEL_01_0A7330.c: tells whether both handle words are set (not -1). */
extern int D_00107818;
extern int D_0010781C;

long long func_080300(void)
{
    long long r;
    int t;

    r = 0;
    if (D_00107818 != -1) {
        t = D_0010781C != -1;
        r = t;
    }
    return r;
}

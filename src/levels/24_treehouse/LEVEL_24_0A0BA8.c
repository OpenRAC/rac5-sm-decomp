/* LEVEL_24:0x0A0BA8 -- placement copy of LEVEL_01_0A7330.c: tells whether both handle words are set (not -1). */
extern int D_001C7DE8;
extern int D_001C7DEC;

long long func_0A0BA8(void)
{
    long long r;
    int t;

    r = 0;
    if (D_001C7DE8 != -1) {
        t = D_001C7DEC != -1;
        r = t;
    }
    return r;
}

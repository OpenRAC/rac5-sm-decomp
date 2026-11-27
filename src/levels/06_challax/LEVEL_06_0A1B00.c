/* LEVEL_06:0x0A1B00 -- placement copy of LEVEL_01_0A7330.c: tells whether both handle words are set (not -1). */
extern int D_001E6068;
extern int D_001E606C;

long long func_0A1B00(void)
{
    long long r;
    int t;

    r = 0;
    if (D_001E6068 != -1) {
        t = D_001E606C != -1;
        r = t;
    }
    return r;
}

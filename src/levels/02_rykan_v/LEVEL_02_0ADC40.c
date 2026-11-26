/* LEVEL_02:0x0ADC40 -- placement copy of LEVEL_01_0A7330.c: tells whether both handle words are set (not -1). */
extern int D_0020C128;
extern int D_0020C12C;

long long func_0ADC40(void)
{
    long long r;
    int t;

    r = 0;
    if (D_0020C128 != -1) {
        t = D_0020C12C != -1;
        r = t;
    }
    return r;
}

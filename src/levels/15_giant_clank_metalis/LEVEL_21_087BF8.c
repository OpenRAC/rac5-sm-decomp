/* LEVEL_21:0x087BF8 -- placement copy of LEVEL_01_0A7330.c: tells whether both handle words are set (not -1). */
extern int D_0014BDE8;
extern int D_0014BDEC;

long long func_087BF8(void)
{
    long long r;
    int t;

    r = 0;
    if (D_0014BDE8 != -1) {
        t = D_0014BDEC != -1;
        r = t;
    }
    return r;
}

/* LEVEL_10:0x0A8448 -- placement copy of LEVEL_01_0A7330.c: tells whether both handle words are set (not -1). */
extern int D_00200168;
extern int D_0020016C;

long long func_0A8448(void)
{
    long long r;
    int t;

    r = 0;
    if (D_00200168 != -1) {
        t = D_0020016C != -1;
        r = t;
    }
    return r;
}

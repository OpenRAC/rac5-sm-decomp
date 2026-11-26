/* LEVEL_09:0x0A45E0 -- placement copy of LEVEL_01_0A7330.c: tells whether both handle words are set (not -1). */
extern int D_001E0F68;
extern int D_001E0F6C;

long long func_0A45E0(void)
{
    long long r;
    int t;

    r = 0;
    if (D_001E0F68 != -1) {
        t = D_001E0F6C != -1;
        r = t;
    }
    return r;
}

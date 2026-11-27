/* LEVEL_01:0x0A7330 -- tells whether both handle words are set (not -1). */
extern int D_001F7168;
extern int D_001F716C;

long long func_0A7330(void)
{
    long long r;
    int t;

    r = 0;
    if (D_001F7168 != -1) {
        t = D_001F716C != -1;
        r = t;
    }
    return r;
}

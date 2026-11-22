/* LEVEL_17:0x0794A8 -- placement copy of LEVEL_16_078A30.c: true when both flag bytes of the global block are set. */
extern unsigned char D_001E2AC0[];

long long func_0794A8(void)
{
    long long r;
    int t;

    r = 0;
    if (D_001E2AC0[0x144] != 0) {
        t = D_001E2AC0[0x384] != 0;
        r = t;
    }
    return r;
}

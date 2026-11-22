/* LEVEL_18:0x0783B0 -- placement copy of LEVEL_16_078A30.c: true when both flag bytes of the global block are set. */
extern unsigned char D_001F1B40[];

long long func_0783B0(void)
{
    long long r;
    int t;

    r = 0;
    if (D_001F1B40[0x144] != 0) {
        t = D_001F1B40[0x384] != 0;
        r = t;
    }
    return r;
}

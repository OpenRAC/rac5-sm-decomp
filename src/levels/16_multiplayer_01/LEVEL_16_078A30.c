/* LEVEL_16:0x078A30 -- true when both flag bytes of the global block are set. */
extern unsigned char D_001F17C0[];

long long func_078A30(void)
{
    long long r;
    int t;

    r = 0;
    if (D_001F17C0[0x144] != 0) {
        t = D_001F17C0[0x384] != 0;
        r = t;
    }
    return r;
}

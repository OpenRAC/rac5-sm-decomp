/* LEVEL_20:0x0666A0 -- placement copy of LEVEL_16_078A30.c: true when both flag bytes of the global block are set. */
extern unsigned char D_00145040[];

long long func_0666A0(void)
{
    long long r;
    int t;

    r = 0;
    if (D_00145040[0x144] != 0) {
        t = D_00145040[0x384] != 0;
        r = t;
    }
    return r;
}

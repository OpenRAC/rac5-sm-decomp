/* LEVEL_02:0x097AA0 -- placement copy of LEVEL_01_0913D0.c: clears four ranges of a per-slot table and resets the range bounds. */
extern void *memset(void *p, int c, unsigned int n);
extern char D_0020B344;
extern unsigned short D_002AC290;
extern unsigned short D_002AC292;
extern unsigned short D_002AC294;
extern unsigned short D_002AC298[4];
extern unsigned short D_002AC2A0[4];
extern int D_002AC2A8[4][0x300];

void func_097AA0(void)
{
    unsigned int i;
    D_0020B344 = 0;
    D_002AC294 = 0;
    D_002AC290 = 0;
    D_002AC292 = 0;
    for (i = 0; i < 4; i++) {
        unsigned short lo = D_002AC298[i];
        unsigned short hi = D_002AC2A0[i] + 1;
        if (lo < hi) {
            memset(&D_002AC2A8[i][lo], 0, (hi - lo) * 4);
        }
        D_002AC298[i] = 0xFFFF;
        D_002AC2A0[i] = 0;
    }
}

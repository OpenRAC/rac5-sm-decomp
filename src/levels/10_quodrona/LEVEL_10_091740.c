/* LEVEL_10:0x091740 -- placement copy of LEVEL_01_0913D0.c: clears four ranges of a per-slot table and resets the range bounds. */
extern void *memset(void *p, int c, unsigned int n);
extern char D_001FF384;
extern unsigned short D_0029E190;
extern unsigned short D_0029E192;
extern unsigned short D_0029E194;
extern unsigned short D_0029E198[4];
extern unsigned short D_0029E1A0[4];
extern int D_0029E1A8[4][0x300];

void func_091740(void)
{
    unsigned int i;
    D_001FF384 = 0;
    D_0029E194 = 0;
    D_0029E190 = 0;
    D_0029E192 = 0;
    for (i = 0; i < 4; i++) {
        unsigned short lo = D_0029E198[i];
        unsigned short hi = D_0029E1A0[i] + 1;
        if (lo < hi) {
            memset(&D_0029E1A8[i][lo], 0, (hi - lo) * 4);
        }
        D_0029E198[i] = 0xFFFF;
        D_0029E1A0[i] = 0;
    }
}

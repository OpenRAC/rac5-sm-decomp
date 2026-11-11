/* LEVEL_21:0x075290 -- placement copy of LEVEL_01_0913D0.c: clears four ranges of a per-slot table and resets the range bounds. */
extern void *memset(void *p, int c, unsigned int n);
extern char D_0014B004;
extern unsigned short D_001ACDD0;
extern unsigned short D_001ACDD2;
extern unsigned short D_001ACDD4;
extern unsigned short D_001ACDD8[4];
extern unsigned short D_001ACDE0[4];
extern int D_001ACDE8[4][0x300];

void func_075290(void)
{
    unsigned int i;
    D_0014B004 = 0;
    D_001ACDD4 = 0;
    D_001ACDD0 = 0;
    D_001ACDD2 = 0;
    for (i = 0; i < 4; i++) {
        unsigned short lo = D_001ACDD8[i];
        unsigned short hi = D_001ACDE0[i] + 1;
        if (lo < hi) {
            memset(&D_001ACDE8[i][lo], 0, (hi - lo) * 4);
        }
        D_001ACDD8[i] = 0xFFFF;
        D_001ACDE0[i] = 0;
    }
}

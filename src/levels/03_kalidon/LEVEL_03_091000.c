/* LEVEL_03:0x091000 -- placement copy of LEVEL_01_0913D0.c: clears four ranges of a per-slot table and resets the range bounds. */
extern void *memset(void *p, int c, unsigned int n);
extern char D_0020EA04;
extern unsigned short D_002AFC10;
extern unsigned short D_002AFC12;
extern unsigned short D_002AFC14;
extern unsigned short D_002AFC18[4];
extern unsigned short D_002AFC20[4];
extern int D_002AFC28[4][0x300];

void func_091000(void)
{
    unsigned int i;
    D_0020EA04 = 0;
    D_002AFC14 = 0;
    D_002AFC10 = 0;
    D_002AFC12 = 0;
    for (i = 0; i < 4; i++) {
        unsigned short lo = D_002AFC18[i];
        unsigned short hi = D_002AFC20[i] + 1;
        if (lo < hi) {
            memset(&D_002AFC28[i][lo], 0, (hi - lo) * 4);
        }
        D_002AFC18[i] = 0xFFFF;
        D_002AFC20[i] = 0;
    }
}

/* LEVEL_23:0x086DF0 -- placement copy of LEVEL_01_0913D0.c: clears four ranges of a per-slot table and resets the range bounds. */
extern void *memset(void *p, int c, unsigned int n);
extern char D_001C9784;
extern unsigned short D_002661D0;
extern unsigned short D_002661D2;
extern unsigned short D_002661D4;
extern unsigned short D_002661D8[4];
extern unsigned short D_002661E0[4];
extern int D_002661E8[4][0x300];

void func_086DF0(void)
{
    unsigned int i;
    D_001C9784 = 0;
    D_002661D4 = 0;
    D_002661D0 = 0;
    D_002661D2 = 0;
    for (i = 0; i < 4; i++) {
        unsigned short lo = D_002661D8[i];
        unsigned short hi = D_002661E0[i] + 1;
        if (lo < hi) {
            memset(&D_002661E8[i][lo], 0, (hi - lo) * 4);
        }
        D_002661D8[i] = 0xFFFF;
        D_002661E0[i] = 0;
    }
}

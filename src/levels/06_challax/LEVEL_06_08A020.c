/* LEVEL_06:0x08A020 -- placement copy of LEVEL_01_0913D0.c: clears four ranges of a per-slot table and resets the range bounds. */
extern void *memset(void *p, int c, unsigned int n);
extern char D_001E5284;
extern unsigned short D_00281B10;
extern unsigned short D_00281B12;
extern unsigned short D_00281B14;
extern unsigned short D_00281B18[4];
extern unsigned short D_00281B20[4];
extern int D_00281B28[4][0x300];

void func_08A020(void)
{
    unsigned int i;
    D_001E5284 = 0;
    D_00281B14 = 0;
    D_00281B10 = 0;
    D_00281B12 = 0;
    for (i = 0; i < 4; i++) {
        unsigned short lo = D_00281B18[i];
        unsigned short hi = D_00281B20[i] + 1;
        if (lo < hi) {
            memset(&D_00281B28[i][lo], 0, (hi - lo) * 4);
        }
        D_00281B18[i] = 0xFFFF;
        D_00281B20[i] = 0;
    }
}

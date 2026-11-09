/* LEVEL_16:0x082628 -- placement copy of LEVEL_01_0913D0.c: clears four ranges of a per-slot table and resets the range bounds. */
extern void *memset(void *p, int c, unsigned int n);
extern char D_001A43B4;
extern unsigned short D_0024B210;
extern unsigned short D_0024B212;
extern unsigned short D_0024B214;
extern unsigned short D_0024B218[4];
extern unsigned short D_0024B220[4];
extern int D_0024B228[4][0x300];

void func_082628(void)
{
    unsigned int i;
    D_001A43B4 = 0;
    D_0024B214 = 0;
    D_0024B210 = 0;
    D_0024B212 = 0;
    for (i = 0; i < 4; i++) {
        unsigned short lo = D_0024B218[i];
        unsigned short hi = D_0024B220[i] + 1;
        if (lo < hi) {
            memset(&D_0024B228[i][lo], 0, (hi - lo) * 4);
        }
        D_0024B218[i] = 0xFFFF;
        D_0024B220[i] = 0;
    }
}

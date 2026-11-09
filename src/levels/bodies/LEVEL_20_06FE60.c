/* LEVEL_20:0x06FE60 -- placement copy of LEVEL_01_0913D0.c: clears four ranges of a per-slot table and resets the range bounds. */
extern void *memset(void *p, int c, unsigned int n);
extern char D_00106A94;
extern unsigned short D_0016EA50;
extern unsigned short D_0016EA52;
extern unsigned short D_0016EA54;
extern unsigned short D_0016EA58[4];
extern unsigned short D_0016EA60[4];
extern int D_0016EA68[4][0x300];

void func_06FE60(void)
{
    unsigned int i;
    D_00106A94 = 0;
    D_0016EA54 = 0;
    D_0016EA50 = 0;
    D_0016EA52 = 0;
    for (i = 0; i < 4; i++) {
        unsigned short lo = D_0016EA58[i];
        unsigned short hi = D_0016EA60[i] + 1;
        if (lo < hi) {
            memset(&D_0016EA68[i][lo], 0, (hi - lo) * 4);
        }
        D_0016EA58[i] = 0xFFFF;
        D_0016EA60[i] = 0;
    }
}

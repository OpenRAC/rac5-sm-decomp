/* LEVEL_09:0x08DB28 -- placement copy of LEVEL_01_0913D0.c: clears four ranges of a per-slot table and resets the range bounds. */
extern void *memset(void *p, int c, unsigned int n);
extern char D_001E0184;
extern unsigned short D_0027C510;
extern unsigned short D_0027C512;
extern unsigned short D_0027C514;
extern unsigned short D_0027C518[4];
extern unsigned short D_0027C520[4];
extern int D_0027C528[4][0x300];

void func_08DB28(void)
{
    unsigned int i;
    D_001E0184 = 0;
    D_0027C514 = 0;
    D_0027C510 = 0;
    D_0027C512 = 0;
    for (i = 0; i < 4; i++) {
        unsigned short lo = D_0027C518[i];
        unsigned short hi = D_0027C520[i] + 1;
        if (lo < hi) {
            memset(&D_0027C528[i][lo], 0, (hi - lo) * 4);
        }
        D_0027C518[i] = 0xFFFF;
        D_0027C520[i] = 0;
    }
}

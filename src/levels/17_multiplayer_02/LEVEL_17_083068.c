/* LEVEL_17:0x083068 -- placement copy of LEVEL_01_0913D0.c: clears four ranges of a per-slot table and resets the range bounds. */
extern void *memset(void *p, int c, unsigned int n);
extern char D_001979B4;
extern unsigned short D_0023C510;
extern unsigned short D_0023C512;
extern unsigned short D_0023C514;
extern unsigned short D_0023C518[4];
extern unsigned short D_0023C520[4];
extern int D_0023C528[4][0x300];

void func_083068(void)
{
    unsigned int i;
    D_001979B4 = 0;
    D_0023C514 = 0;
    D_0023C510 = 0;
    D_0023C512 = 0;
    for (i = 0; i < 4; i++) {
        unsigned short lo = D_0023C518[i];
        unsigned short hi = D_0023C520[i] + 1;
        if (lo < hi) {
            memset(&D_0023C528[i][lo], 0, (hi - lo) * 4);
        }
        D_0023C518[i] = 0xFFFF;
        D_0023C520[i] = 0;
    }
}

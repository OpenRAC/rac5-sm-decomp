/* LEVEL_07:0x093258 -- placement copy of LEVEL_01_0913D0.c: clears four ranges of a per-slot table and resets the range bounds. */
extern void *memset(void *p, int c, unsigned int n);
extern char D_0020A684;
extern unsigned short D_002AA690;
extern unsigned short D_002AA692;
extern unsigned short D_002AA694;
extern unsigned short D_002AA698[4];
extern unsigned short D_002AA6A0[4];
extern int D_002AA6A8[4][0x300];

void func_093258(void)
{
    unsigned int i;
    D_0020A684 = 0;
    D_002AA694 = 0;
    D_002AA690 = 0;
    D_002AA692 = 0;
    for (i = 0; i < 4; i++) {
        unsigned short lo = D_002AA698[i];
        unsigned short hi = D_002AA6A0[i] + 1;
        if (lo < hi) {
            memset(&D_002AA6A8[i][lo], 0, (hi - lo) * 4);
        }
        D_002AA698[i] = 0xFFFF;
        D_002AA6A0[i] = 0;
    }
}

/* LEVEL_04:0x0944C8 -- placement copy of LEVEL_01_0913D0.c: clears four ranges of a per-slot table and resets the range bounds. */
extern void *memset(void *p, int c, unsigned int n);
extern char D_0020F844;
extern unsigned short D_002AF590;
extern unsigned short D_002AF592;
extern unsigned short D_002AF594;
extern unsigned short D_002AF598[4];
extern unsigned short D_002AF5A0[4];
extern int D_002AF5A8[4][0x300];

void func_0944C8(void)
{
    unsigned int i;
    D_0020F844 = 0;
    D_002AF594 = 0;
    D_002AF590 = 0;
    D_002AF592 = 0;
    for (i = 0; i < 4; i++) {
        unsigned short lo = D_002AF598[i];
        unsigned short hi = D_002AF5A0[i] + 1;
        if (lo < hi) {
            memset(&D_002AF5A8[i][lo], 0, (hi - lo) * 4);
        }
        D_002AF598[i] = 0xFFFF;
        D_002AF5A0[i] = 0;
    }
}

/* LEVEL_22:0x0821A0 -- placement copy of LEVEL_01_0913D0.c: clears four ranges of a per-slot table and resets the range bounds. */
extern void *memset(void *p, int c, unsigned int n);
extern char D_00155704;
extern unsigned short D_001EA950;
extern unsigned short D_001EA952;
extern unsigned short D_001EA954;
extern unsigned short D_001EA958[4];
extern unsigned short D_001EA960[4];
extern int D_001EA968[4][0x300];

void func_0821A0(void)
{
    unsigned int i;
    D_00155704 = 0;
    D_001EA954 = 0;
    D_001EA950 = 0;
    D_001EA952 = 0;
    for (i = 0; i < 4; i++) {
        unsigned short lo = D_001EA958[i];
        unsigned short hi = D_001EA960[i] + 1;
        if (lo < hi) {
            memset(&D_001EA968[i][lo], 0, (hi - lo) * 4);
        }
        D_001EA958[i] = 0xFFFF;
        D_001EA960[i] = 0;
    }
}

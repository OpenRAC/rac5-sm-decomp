/* LEVEL_18:0x081F70 -- placement copy of LEVEL_01_0913D0.c: clears four ranges of a per-slot table and resets the range bounds. */
extern void *memset(void *p, int c, unsigned int n);
extern char D_001A5834;
extern unsigned short D_0024B590;
extern unsigned short D_0024B592;
extern unsigned short D_0024B594;
extern unsigned short D_0024B598[4];
extern unsigned short D_0024B5A0[4];
extern int D_0024B5A8[4][0x300];

void func_081F70(void)
{
    unsigned int i;
    D_001A5834 = 0;
    D_0024B594 = 0;
    D_0024B590 = 0;
    D_0024B592 = 0;
    for (i = 0; i < 4; i++) {
        unsigned short lo = D_0024B598[i];
        unsigned short hi = D_0024B5A0[i] + 1;
        if (lo < hi) {
            memset(&D_0024B5A8[i][lo], 0, (hi - lo) * 4);
        }
        D_0024B598[i] = 0xFFFF;
        D_0024B5A0[i] = 0;
    }
}

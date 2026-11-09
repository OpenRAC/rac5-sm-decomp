/* LEVEL_19:0x082AD8 -- placement copy of LEVEL_01_0913D0.c: clears four ranges of a per-slot table and resets the range bounds. */
extern void *memset(void *p, int c, unsigned int n);
extern char D_001A5534;
extern unsigned short D_0024B390;
extern unsigned short D_0024B392;
extern unsigned short D_0024B394;
extern unsigned short D_0024B398[4];
extern unsigned short D_0024B3A0[4];
extern int D_0024B3A8[4][0x300];

void func_082AD8(void)
{
    unsigned int i;
    D_001A5534 = 0;
    D_0024B394 = 0;
    D_0024B390 = 0;
    D_0024B392 = 0;
    for (i = 0; i < 4; i++) {
        unsigned short lo = D_0024B398[i];
        unsigned short hi = D_0024B3A0[i] + 1;
        if (lo < hi) {
            memset(&D_0024B3A8[i][lo], 0, (hi - lo) * 4);
        }
        D_0024B398[i] = 0xFFFF;
        D_0024B3A0[i] = 0;
    }
}

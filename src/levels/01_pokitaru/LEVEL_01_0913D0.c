/* LEVEL_01:0x0913D0 -- clears four ranges of a per-slot table and resets the range bounds. */
extern void *memset(void *p, int c, unsigned int n);
extern char D_001F6384;
extern unsigned short D_00294D90;
extern unsigned short D_00294D92;
extern unsigned short D_00294D94;
extern unsigned short D_00294D98[4];
extern unsigned short D_00294DA0[4];
extern int D_00294DA8[4][0x300];

void func_0913D0(void)
{
    unsigned int i;
    D_001F6384 = 0;
    D_00294D94 = 0;
    D_00294D90 = 0;
    D_00294D92 = 0;
    for (i = 0; i < 4; i++) {
        unsigned short lo = D_00294D98[i];
        unsigned short hi = D_00294DA0[i] + 1;
        if (lo < hi) {
            memset(&D_00294DA8[i][lo], 0, (hi - lo) * 4);
        }
        D_00294D98[i] = 0xFFFF;
        D_00294DA0[i] = 0;
    }
}

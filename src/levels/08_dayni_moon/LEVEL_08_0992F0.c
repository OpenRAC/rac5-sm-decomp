/* LEVEL_08:0x0992F0 -- placement copy of LEVEL_01_0913D0.c: clears four ranges of a per-slot table and resets the range bounds. */
extern void *memset(void *p, int c, unsigned int n);
extern char D_0023F244;
extern unsigned short D_002E4010;
extern unsigned short D_002E4012;
extern unsigned short D_002E4014;
extern unsigned short D_002E4018[4];
extern unsigned short D_002E4020[4];
extern int D_002E4028[4][0x300];

void func_0992F0(void)
{
    unsigned int i;
    D_0023F244 = 0;
    D_002E4014 = 0;
    D_002E4010 = 0;
    D_002E4012 = 0;
    for (i = 0; i < 4; i++) {
        unsigned short lo = D_002E4018[i];
        unsigned short hi = D_002E4020[i] + 1;
        if (lo < hi) {
            memset(&D_002E4028[i][lo], 0, (hi - lo) * 4);
        }
        D_002E4018[i] = 0xFFFF;
        D_002E4020[i] = 0;
    }
}

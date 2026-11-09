/* LEVEL_05:0x08EAC8 -- placement copy of LEVEL_01_0913D0.c: clears four ranges of a per-slot table and resets the range bounds. */
extern void *memset(void *p, int c, unsigned int n);
extern char D_001E5704;
extern unsigned short D_00280C50;
extern unsigned short D_00280C52;
extern unsigned short D_00280C54;
extern unsigned short D_00280C58[4];
extern unsigned short D_00280C60[4];
extern int D_00280C68[4][0x300];

void func_08EAC8(void)
{
    unsigned int i;
    D_001E5704 = 0;
    D_00280C54 = 0;
    D_00280C50 = 0;
    D_00280C52 = 0;
    for (i = 0; i < 4; i++) {
        unsigned short lo = D_00280C58[i];
        unsigned short hi = D_00280C60[i] + 1;
        if (lo < hi) {
            memset(&D_00280C68[i][lo], 0, (hi - lo) * 4);
        }
        D_00280C58[i] = 0xFFFF;
        D_00280C60[i] = 0;
    }
}

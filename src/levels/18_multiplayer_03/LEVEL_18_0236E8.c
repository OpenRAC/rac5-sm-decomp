/* LEVEL_18:0x0236E8 -- placement copy of LEVEL_01_026540.c: shuts down the video player and resets related state, then runs a callback. */
extern int func_022968(void *b);
extern void BinkClose(void *b);
extern void func_024598(int a, int b, int c);
extern void *D_001A2F10;
extern int D_001A2F14;
extern int D_001A2E04;
extern int D_001A2E08;
extern unsigned char D_001A2E6F;
extern int D_001A2E60;
extern char D_001A2E58;
extern char D_001A2E59;
extern unsigned char D_001A2E5D;
extern int D_001D1A20;
extern int D_001A2E64;
extern void (*D_001A2EF0)(int);
extern int D_001A2EF8;

int func_0236E8(void)
{
    int r = func_022968(D_001A2F10);
    int s;
    int m;
    BinkClose(D_001A2F10);
    D_001A2F10 = 0;
    D_001A2F14 = 0;
    D_001A2E04 = 0;
    if (D_001A2E6F == 0) {
        D_001A2E08 = 0;
    }
    s = D_001A2E60;
    D_001A2E58 = 0;
    D_001A2E59 = 0;
    if (s >= 0 && D_001A2E5D != 0) {
        m = D_001D1A20;
        if (m == 0x16) {
            m = 3;
        } else if (m == 0x17) {
            m = 6;
        }
        m = m - 1;
        m = m * 2;
        s &= 0xFF;
        func_024598(m + 4, 1, s);
        func_024598(m + 0xA2, 1, s);
    }
    D_001A2E60 = -1;
    D_001A2E64 = -1;
    if (D_001A2EF0 != 0) {
        D_001A2EF0(D_001A2EF8);
    }
    return r;
}

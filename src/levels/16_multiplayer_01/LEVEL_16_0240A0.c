/* LEVEL_16:0x0240A0 -- placement copy of LEVEL_01_026540.c: shuts down the video player and resets related state, then runs a callback. */
extern int func_023320(void *b);
extern void BinkClose(void *b);
extern void func_024FE8(int a, int b, int c);
extern void *D_001A1A90;
extern int D_001A1A94;
extern int D_001A1984;
extern int D_001A1988;
extern unsigned char D_001A19EF;
extern int D_001A19E0;
extern char D_001A19D8;
extern char D_001A19D9;
extern unsigned char D_001A19DD;
extern int D_001D04A0;
extern int D_001A19E4;
extern void (*D_001A1A70)(int);
extern int D_001A1A78;

int func_0240A0(void)
{
    int r = func_023320(D_001A1A90);
    int s;
    int m;
    BinkClose(D_001A1A90);
    D_001A1A90 = 0;
    D_001A1A94 = 0;
    D_001A1984 = 0;
    if (D_001A19EF == 0) {
        D_001A1988 = 0;
    }
    s = D_001A19E0;
    D_001A19D8 = 0;
    D_001A19D9 = 0;
    if (s >= 0 && D_001A19DD != 0) {
        m = D_001D04A0;
        if (m == 0x16) {
            m = 3;
        } else if (m == 0x17) {
            m = 6;
        }
        m = m - 1;
        m = m * 2;
        s &= 0xFF;
        func_024FE8(m + 4, 1, s);
        func_024FE8(m + 0xA2, 1, s);
    }
    D_001A19E0 = -1;
    D_001A19E4 = -1;
    if (D_001A1A70 != 0) {
        D_001A1A70(D_001A1A78);
    }
    return r;
}

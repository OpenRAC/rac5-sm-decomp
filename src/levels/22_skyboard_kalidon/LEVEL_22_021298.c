/* LEVEL_22:0x021298 -- placement copy of LEVEL_01_026540.c: shuts down the video player and resets related state, then runs a callback. */
extern int func_020518(void *b);
extern void BinkClose(void *b);
extern void func_021ED8(int a, int b, int c);
extern void *D_00153308;
extern int D_0015330C;
extern int D_001531FC;
extern int D_00153200;
extern unsigned char D_00153267;
extern int D_00153258;
extern char D_00153250;
extern char D_00153251;
extern unsigned char D_00153255;
extern int D_00177C70;
extern int D_0015325C;
extern void (*D_001532E8)(int);
extern int D_001532F0;

int func_021298(void)
{
    int r = func_020518(D_00153308);
    int s;
    int m;
    BinkClose(D_00153308);
    D_00153308 = 0;
    D_0015330C = 0;
    D_001531FC = 0;
    if (D_00153267 == 0) {
        D_00153200 = 0;
    }
    s = D_00153258;
    D_00153250 = 0;
    D_00153251 = 0;
    if (s >= 0 && D_00153255 != 0) {
        m = D_00177C70;
        if (m == 0x16) {
            m = 3;
        } else if (m == 0x17) {
            m = 6;
        }
        m = m - 1;
        m = m * 2;
        s &= 0xFF;
        func_021ED8(m + 4, 1, s);
        func_021ED8(m + 0xA2, 1, s);
    }
    D_00153258 = -1;
    D_0015325C = -1;
    if (D_001532E8 != 0) {
        D_001532E8(D_001532F0);
    }
    return r;
}

/* LEVEL_05:0x025450 -- placement copy of LEVEL_01_026540.c: shuts down the video player and resets related state, then runs a callback. */
extern int func_0246D0(void *b);
extern void BinkClose(void *b);
extern void func_026288(int a, int b, int c);
extern void *D_001E3308;
extern int D_001E330C;
extern int D_001E31FC;
extern int D_001E3200;
extern unsigned char D_001E3267;
extern int D_001E3258;
extern char D_001E3250;
extern char D_001E3251;
extern unsigned char D_001E3255;
extern int D_002096F0;
extern int D_001E325C;
extern void (*D_001E32E8)(int);
extern int D_001E32F0;

int func_025450(void)
{
    int r = func_0246D0(D_001E3308);
    int s;
    int m;
    BinkClose(D_001E3308);
    D_001E3308 = 0;
    D_001E330C = 0;
    D_001E31FC = 0;
    if (D_001E3267 == 0) {
        D_001E3200 = 0;
    }
    s = D_001E3258;
    D_001E3250 = 0;
    D_001E3251 = 0;
    if (s >= 0 && D_001E3255 != 0) {
        m = D_002096F0;
        if (m == 0x16) {
            m = 3;
        } else if (m == 0x17) {
            m = 6;
        }
        m = m - 1;
        m = m * 2;
        s &= 0xFF;
        func_026288(m + 4, 1, s);
        func_026288(m + 0xA2, 1, s);
    }
    D_001E3258 = -1;
    D_001E325C = -1;
    if (D_001E32E8 != 0) {
        D_001E32E8(D_001E32F0);
    }
    return r;
}

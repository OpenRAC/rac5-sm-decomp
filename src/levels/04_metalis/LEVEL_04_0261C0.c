/* LEVEL_04:0x0261C0 -- placement copy of LEVEL_01_026540.c: shuts down the video player and resets related state, then runs a callback. */
extern int func_025440(void *b);
extern void BinkClose(void *b);
extern void func_0271D8(int a, int b, int c);
extern void *D_0020D108;
extern int D_0020D10C;
extern int D_0020CFFC;
extern int D_0020D000;
extern unsigned char D_0020D067;
extern int D_0020D058;
extern char D_0020D050;
extern char D_0020D051;
extern unsigned char D_0020D055;
extern int D_00234170;
extern int D_0020D05C;
extern void (*D_0020D0E8)(int);
extern int D_0020D0F0;

int func_0261C0(void)
{
    int r = func_025440(D_0020D108);
    int s;
    int m;
    BinkClose(D_0020D108);
    D_0020D108 = 0;
    D_0020D10C = 0;
    D_0020CFFC = 0;
    if (D_0020D067 == 0) {
        D_0020D000 = 0;
    }
    s = D_0020D058;
    D_0020D050 = 0;
    D_0020D051 = 0;
    if (s >= 0 && D_0020D055 != 0) {
        m = D_00234170;
        if (m == 0x16) {
            m = 3;
        } else if (m == 0x17) {
            m = 6;
        }
        m = m - 1;
        m = m * 2;
        s &= 0xFF;
        func_0271D8(m + 4, 1, s);
        func_0271D8(m + 0xA2, 1, s);
    }
    D_0020D058 = -1;
    D_0020D05C = -1;
    if (D_0020D0E8 != 0) {
        D_0020D0E8(D_0020D0F0);
    }
    return r;
}

/* LEVEL_06:0x024BC0 -- placement copy of LEVEL_01_026540.c: shuts down the video player and resets related state, then runs a callback. */
extern int func_023E40(void *b);
extern void BinkClose(void *b);
extern void func_0259F8(int a, int b, int c);
extern void *D_001E2E88;
extern int D_001E2E8C;
extern int D_001E2D7C;
extern int D_001E2D80;
extern unsigned char D_001E2DE7;
extern int D_001E2DD8;
extern char D_001E2DD0;
extern char D_001E2DD1;
extern unsigned char D_001E2DD5;
extern int D_00209670;
extern int D_001E2DDC;
extern void (*D_001E2E68)(int);
extern int D_001E2E70;

int func_024BC0(void)
{
    int r = func_023E40(D_001E2E88);
    int s;
    int m;
    BinkClose(D_001E2E88);
    D_001E2E88 = 0;
    D_001E2E8C = 0;
    D_001E2D7C = 0;
    if (D_001E2DE7 == 0) {
        D_001E2D80 = 0;
    }
    s = D_001E2DD8;
    D_001E2DD0 = 0;
    D_001E2DD1 = 0;
    if (s >= 0 && D_001E2DD5 != 0) {
        m = D_00209670;
        if (m == 0x16) {
            m = 3;
        } else if (m == 0x17) {
            m = 6;
        }
        m = m - 1;
        m = m * 2;
        s &= 0xFF;
        func_0259F8(m + 4, 1, s);
        func_0259F8(m + 0xA2, 1, s);
    }
    D_001E2DD8 = -1;
    D_001E2DDC = -1;
    if (D_001E2E68 != 0) {
        D_001E2E68(D_001E2E70);
    }
    return r;
}

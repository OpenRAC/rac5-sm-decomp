/* LEVEL_08:0x026DC0 -- placement copy of LEVEL_01_026540.c: shuts down the video player and resets related state, then runs a callback. */
extern int func_026040(void *b);
extern void BinkClose(void *b);
extern void func_027B70(int a, int b, int c);
extern void *D_0023CB08;
extern int D_0023CB0C;
extern int D_0023C9FC;
extern int D_0023CA00;
extern unsigned char D_0023CA67;
extern int D_0023CA58;
extern char D_0023CA50;
extern char D_0023CA51;
extern unsigned char D_0023CA55;
extern int D_00264470;
extern int D_0023CA5C;
extern void (*D_0023CAE8)(int);
extern int D_0023CAF0;

int func_026DC0(void)
{
    int r = func_026040(D_0023CB08);
    int s;
    int m;
    BinkClose(D_0023CB08);
    D_0023CB08 = 0;
    D_0023CB0C = 0;
    D_0023C9FC = 0;
    if (D_0023CA67 == 0) {
        D_0023CA00 = 0;
    }
    s = D_0023CA58;
    D_0023CA50 = 0;
    D_0023CA51 = 0;
    if (s >= 0 && D_0023CA55 != 0) {
        m = D_00264470;
        if (m == 0x16) {
            m = 3;
        } else if (m == 0x17) {
            m = 6;
        }
        m = m - 1;
        m = m * 2;
        s &= 0xFF;
        func_027B70(m + 4, 1, s);
        func_027B70(m + 0xA2, 1, s);
    }
    D_0023CA58 = -1;
    D_0023CA5C = -1;
    if (D_0023CAE8 != 0) {
        D_0023CAE8(D_0023CAF0);
    }
    return r;
}

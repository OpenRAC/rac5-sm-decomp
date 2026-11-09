/* LEVEL_15:0x0207C8 -- placement copy of LEVEL_01_026540.c: shuts down the video player and resets related state, then runs a callback. */
extern int func_01FA48(void *b);
extern void BinkClose(void *b);
extern void func_021538(int a, int b, int c);
extern void *D_00148C08;
extern int D_00148C0C;
extern int D_00148AFC;
extern int D_00148B00;
extern unsigned char D_00148B67;
extern int D_00148B58;
extern char D_00148B50;
extern char D_00148B51;
extern unsigned char D_00148B55;
extern int D_0016EF70;
extern int D_00148B5C;
extern void (*D_00148BE8)(int);
extern int D_00148BF0;

int func_0207C8(void)
{
    int r = func_01FA48(D_00148C08);
    int s;
    int m;
    BinkClose(D_00148C08);
    D_00148C08 = 0;
    D_00148C0C = 0;
    D_00148AFC = 0;
    if (D_00148B67 == 0) {
        D_00148B00 = 0;
    }
    s = D_00148B58;
    D_00148B50 = 0;
    D_00148B51 = 0;
    if (s >= 0 && D_00148B55 != 0) {
        m = D_0016EF70;
        if (m == 0x16) {
            m = 3;
        } else if (m == 0x17) {
            m = 6;
        }
        m = m - 1;
        m = m * 2;
        s &= 0xFF;
        func_021538(m + 4, 1, s);
        func_021538(m + 0xA2, 1, s);
    }
    D_00148B58 = -1;
    D_00148B5C = -1;
    if (D_00148BE8 != 0) {
        D_00148BE8(D_00148BF0);
    }
    return r;
}

/* LEVEL_10:0x025E20 -- placement copy of LEVEL_01_026540.c: shuts down the video player and resets related state, then runs a callback. */
extern int func_0250A0(void *b);
extern void BinkClose(void *b);
extern void func_026E28(int a, int b, int c);
extern void *D_001FCF88;
extern int D_001FCF8C;
extern int D_001FCE7C;
extern int D_001FCE80;
extern unsigned char D_001FCEE7;
extern int D_001FCED8;
extern char D_001FCED0;
extern char D_001FCED1;
extern unsigned char D_001FCED5;
extern int D_00223780;
extern int D_001FCEDC;
extern void (*D_001FCF68)(int);
extern int D_001FCF70;

int func_025E20(void)
{
    int r = func_0250A0(D_001FCF88);
    int s;
    int m;
    BinkClose(D_001FCF88);
    D_001FCF88 = 0;
    D_001FCF8C = 0;
    D_001FCE7C = 0;
    if (D_001FCEE7 == 0) {
        D_001FCE80 = 0;
    }
    s = D_001FCED8;
    D_001FCED0 = 0;
    D_001FCED1 = 0;
    if (s >= 0 && D_001FCED5 != 0) {
        m = D_00223780;
        if (m == 0x16) {
            m = 3;
        } else if (m == 0x17) {
            m = 6;
        }
        m = m - 1;
        m = m * 2;
        s &= 0xFF;
        func_026E28(m + 4, 1, s);
        func_026E28(m + 0xA2, 1, s);
    }
    D_001FCED8 = -1;
    D_001FCEDC = -1;
    if (D_001FCF68 != 0) {
        D_001FCF68(D_001FCF70);
    }
    return r;
}

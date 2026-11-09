/* LEVEL_02:0x026E18 -- placement copy of LEVEL_01_026540.c: shuts down the video player and resets related state, then runs a callback. */
extern int func_026098(void *b);
extern void BinkClose(void *b);
extern void func_027D30(int a, int b, int c);
extern void *D_00208C08;
extern int D_00208C0C;
extern int D_00208AFC;
extern int D_00208B00;
extern unsigned char D_00208B67;
extern int D_00208B58;
extern char D_00208B50;
extern char D_00208B51;
extern unsigned char D_00208B55;
extern int D_0022F770;
extern int D_00208B5C;
extern void (*D_00208BE8)(int);
extern int D_00208BF0;

int func_026E18(void)
{
    int r = func_026098(D_00208C08);
    int s;
    int m;
    BinkClose(D_00208C08);
    D_00208C08 = 0;
    D_00208C0C = 0;
    D_00208AFC = 0;
    if (D_00208B67 == 0) {
        D_00208B00 = 0;
    }
    s = D_00208B58;
    D_00208B50 = 0;
    D_00208B51 = 0;
    if (s >= 0 && D_00208B55 != 0) {
        m = D_0022F770;
        if (m == 0x16) {
            m = 3;
        } else if (m == 0x17) {
            m = 6;
        }
        m = m - 1;
        m = m * 2;
        s &= 0xFF;
        func_027D30(m + 4, 1, s);
        func_027D30(m + 0xA2, 1, s);
    }
    D_00208B58 = -1;
    D_00208B5C = -1;
    if (D_00208BE8 != 0) {
        D_00208BE8(D_00208BF0);
    }
    return r;
}

/* LEVEL_07:0x026B08 -- placement copy of LEVEL_01_026540.c: shuts down the video player and resets related state, then runs a callback. */
extern int func_025D88(void *b);
extern void BinkClose(void *b);
extern void func_0278A8(int a, int b, int c);
extern void *D_00208288;
extern int D_0020828C;
extern int D_0020817C;
extern int D_00208180;
extern unsigned char D_002081E7;
extern int D_002081D8;
extern char D_002081D0;
extern char D_002081D1;
extern unsigned char D_002081D5;
extern int D_0022F4F0;
extern int D_002081DC;
extern void (*D_00208268)(int);
extern int D_00208270;

int func_026B08(void)
{
    int r = func_025D88(D_00208288);
    int s;
    int m;
    BinkClose(D_00208288);
    D_00208288 = 0;
    D_0020828C = 0;
    D_0020817C = 0;
    if (D_002081E7 == 0) {
        D_00208180 = 0;
    }
    s = D_002081D8;
    D_002081D0 = 0;
    D_002081D1 = 0;
    if (s >= 0 && D_002081D5 != 0) {
        m = D_0022F4F0;
        if (m == 0x16) {
            m = 3;
        } else if (m == 0x17) {
            m = 6;
        }
        m = m - 1;
        m = m * 2;
        s &= 0xFF;
        func_0278A8(m + 4, 1, s);
        func_0278A8(m + 0xA2, 1, s);
    }
    D_002081D8 = -1;
    D_002081DC = -1;
    if (D_00208268 != 0) {
        D_00208268(D_00208270);
    }
    return r;
}

/* LEVEL_24:0x024238 -- placement copy of LEVEL_01_026540.c: shuts down the video player and resets related state, then runs a callback. */
extern int func_0234B8(void *b);
extern void BinkClose(void *b);
extern void func_024E78(int a, int b, int c);
extern void *D_001C4C08;
extern int D_001C4C0C;
extern int D_001C4AFC;
extern int D_001C4B00;
extern unsigned char D_001C4B67;
extern int D_001C4B58;
extern char D_001C4B50;
extern char D_001C4B51;
extern unsigned char D_001C4B55;
extern int D_001EB570;
extern int D_001C4B5C;
extern void (*D_001C4BE8)(int);
extern int D_001C4BF0;

int func_024238(void)
{
    int r = func_0234B8(D_001C4C08);
    int s;
    int m;
    BinkClose(D_001C4C08);
    D_001C4C08 = 0;
    D_001C4C0C = 0;
    D_001C4AFC = 0;
    if (D_001C4B67 == 0) {
        D_001C4B00 = 0;
    }
    s = D_001C4B58;
    D_001C4B50 = 0;
    D_001C4B51 = 0;
    if (s >= 0 && D_001C4B55 != 0) {
        m = D_001EB570;
        if (m == 0x16) {
            m = 3;
        } else if (m == 0x17) {
            m = 6;
        }
        m = m - 1;
        m = m * 2;
        s &= 0xFF;
        func_024E78(m + 4, 1, s);
        func_024E78(m + 0xA2, 1, s);
    }
    D_001C4B58 = -1;
    D_001C4B5C = -1;
    if (D_001C4BE8 != 0) {
        D_001C4BE8(D_001C4BF0);
    }
    return r;
}

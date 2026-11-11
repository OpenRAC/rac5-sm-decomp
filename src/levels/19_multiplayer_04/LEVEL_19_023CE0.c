/* LEVEL_19:0x023CE0 -- placement copy of LEVEL_01_026540.c: shuts down the video player and resets related state, then runs a callback. */
extern int func_022F60(void *b);
extern void BinkClose(void *b);
extern void func_024B90(int a, int b, int c);
extern void *D_001A2C10;
extern int D_001A2C14;
extern int D_001A2B04;
extern int D_001A2B08;
extern unsigned char D_001A2B6F;
extern int D_001A2B60;
extern char D_001A2B58;
extern char D_001A2B59;
extern unsigned char D_001A2B5D;
extern int D_001D16A0;
extern int D_001A2B64;
extern void (*D_001A2BF0)(int);
extern int D_001A2BF8;

int func_023CE0(void)
{
    int r = func_022F60(D_001A2C10);
    int s;
    int m;
    BinkClose(D_001A2C10);
    D_001A2C10 = 0;
    D_001A2C14 = 0;
    D_001A2B04 = 0;
    if (D_001A2B6F == 0) {
        D_001A2B08 = 0;
    }
    s = D_001A2B60;
    D_001A2B58 = 0;
    D_001A2B59 = 0;
    if (s >= 0 && D_001A2B5D != 0) {
        m = D_001D16A0;
        if (m == 0x16) {
            m = 3;
        } else if (m == 0x17) {
            m = 6;
        }
        m = m - 1;
        m = m * 2;
        s &= 0xFF;
        func_024B90(m + 4, 1, s);
        func_024B90(m + 0xA2, 1, s);
    }
    D_001A2B60 = -1;
    D_001A2B64 = -1;
    if (D_001A2BF0 != 0) {
        D_001A2BF0(D_001A2BF8);
    }
    return r;
}

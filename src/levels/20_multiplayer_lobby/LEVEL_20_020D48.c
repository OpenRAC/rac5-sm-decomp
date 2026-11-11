/* LEVEL_20:0x020D48 -- placement copy of LEVEL_01_026540.c: shuts down the video player and resets related state, then runs a callback. */
extern int func_01FFC8(void *b);
extern void BinkClose(void *b);
extern void func_021B60(int a, int b, int c);
extern void *D_00104170;
extern int D_00104174;
extern int D_00104064;
extern int D_00104068;
extern unsigned char D_001040CF;
extern int D_001040C0;
extern char D_001040B8;
extern char D_001040B9;
extern unsigned char D_001040BD;
extern int D_00131510;
extern int D_001040C4;
extern void (*D_00104150)(int);
extern int D_00104158;

int func_020D48(void)
{
    int r = func_01FFC8(D_00104170);
    int s;
    int m;
    BinkClose(D_00104170);
    D_00104170 = 0;
    D_00104174 = 0;
    D_00104064 = 0;
    if (D_001040CF == 0) {
        D_00104068 = 0;
    }
    s = D_001040C0;
    D_001040B8 = 0;
    D_001040B9 = 0;
    if (s >= 0 && D_001040BD != 0) {
        m = D_00131510;
        if (m == 0x16) {
            m = 3;
        } else if (m == 0x17) {
            m = 6;
        }
        m = m - 1;
        m = m * 2;
        s &= 0xFF;
        func_021B60(m + 4, 1, s);
        func_021B60(m + 0xA2, 1, s);
    }
    D_001040C0 = -1;
    D_001040C4 = -1;
    if (D_00104150 != 0) {
        D_00104150(D_00104158);
    }
    return r;
}

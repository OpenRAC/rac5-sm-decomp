/* LEVEL_23:0x024588 -- placement copy of LEVEL_01_026540.c: shuts down the video player and resets related state, then runs a callback. */
extern int func_023808(void *b);
extern void BinkClose(void *b);
extern void func_0252A0(int a, int b, int c);
extern void *D_001C7388;
extern int D_001C738C;
extern int D_001C727C;
extern int D_001C7280;
extern unsigned char D_001C72E7;
extern int D_001C72D8;
extern char D_001C72D0;
extern char D_001C72D1;
extern unsigned char D_001C72D5;
extern int D_001ED970;
extern int D_001C72DC;
extern void (*D_001C7368)(int);
extern int D_001C7370;

int func_024588(void)
{
    int r = func_023808(D_001C7388);
    int s;
    int m;
    BinkClose(D_001C7388);
    D_001C7388 = 0;
    D_001C738C = 0;
    D_001C727C = 0;
    if (D_001C72E7 == 0) {
        D_001C7280 = 0;
    }
    s = D_001C72D8;
    D_001C72D0 = 0;
    D_001C72D1 = 0;
    if (s >= 0 && D_001C72D5 != 0) {
        m = D_001ED970;
        if (m == 0x16) {
            m = 3;
        } else if (m == 0x17) {
            m = 6;
        }
        m = m - 1;
        m = m * 2;
        s &= 0xFF;
        func_0252A0(m + 4, 1, s);
        func_0252A0(m + 0xA2, 1, s);
    }
    D_001C72D8 = -1;
    D_001C72DC = -1;
    if (D_001C7368 != 0) {
        D_001C7368(D_001C7370);
    }
    return r;
}

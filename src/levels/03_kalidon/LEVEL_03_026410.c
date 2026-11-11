/* LEVEL_03:0x026410 -- placement copy of LEVEL_01_026540.c: shuts down the video player and resets related state, then runs a callback. */
extern int func_025690(void *b);
extern void BinkClose(void *b);
extern void func_027428(int a, int b, int c);
extern void *D_0020C608;
extern int D_0020C60C;
extern int D_0020C4FC;
extern int D_0020C500;
extern unsigned char D_0020C567;
extern int D_0020C558;
extern char D_0020C550;
extern char D_0020C551;
extern unsigned char D_0020C555;
extern int D_002336F0;
extern int D_0020C55C;
extern void (*D_0020C5E8)(int);
extern int D_0020C5F0;

int func_026410(void)
{
    int r = func_025690(D_0020C608);
    int s;
    int m;
    BinkClose(D_0020C608);
    D_0020C608 = 0;
    D_0020C60C = 0;
    D_0020C4FC = 0;
    if (D_0020C567 == 0) {
        D_0020C500 = 0;
    }
    s = D_0020C558;
    D_0020C550 = 0;
    D_0020C551 = 0;
    if (s >= 0 && D_0020C555 != 0) {
        m = D_002336F0;
        if (m == 0x16) {
            m = 3;
        } else if (m == 0x17) {
            m = 6;
        }
        m = m - 1;
        m = m * 2;
        s &= 0xFF;
        func_027428(m + 4, 1, s);
        func_027428(m + 0xA2, 1, s);
    }
    D_0020C558 = -1;
    D_0020C55C = -1;
    if (D_0020C5E8 != 0) {
        D_0020C5E8(D_0020C5F0);
    }
    return r;
}

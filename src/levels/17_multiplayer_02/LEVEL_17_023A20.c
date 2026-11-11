/* LEVEL_17:0x023A20 -- placement copy of LEVEL_01_026540.c: shuts down the video player and resets related state, then runs a callback. */
extern int func_022CA0(void *b);
extern void BinkClose(void *b);
extern void func_024968(int a, int b, int c);
extern void *D_00195090;
extern int D_00195094;
extern int D_00194F84;
extern int D_00194F88;
extern unsigned char D_00194FEF;
extern int D_00194FE0;
extern char D_00194FD8;
extern char D_00194FD9;
extern unsigned char D_00194FDD;
extern int D_001C3920;
extern int D_00194FE4;
extern void (*D_00195070)(int);
extern int D_00195078;

int func_023A20(void)
{
    int r = func_022CA0(D_00195090);
    int s;
    int m;
    BinkClose(D_00195090);
    D_00195090 = 0;
    D_00195094 = 0;
    D_00194F84 = 0;
    if (D_00194FEF == 0) {
        D_00194F88 = 0;
    }
    s = D_00194FE0;
    D_00194FD8 = 0;
    D_00194FD9 = 0;
    if (s >= 0 && D_00194FDD != 0) {
        m = D_001C3920;
        if (m == 0x16) {
            m = 3;
        } else if (m == 0x17) {
            m = 6;
        }
        m = m - 1;
        m = m * 2;
        s &= 0xFF;
        func_024968(m + 4, 1, s);
        func_024968(m + 0xA2, 1, s);
    }
    D_00194FE0 = -1;
    D_00194FE4 = -1;
    if (D_00195070 != 0) {
        D_00195070(D_00195078);
    }
    return r;
}

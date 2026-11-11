/* LEVEL_09:0x0257B0 -- placement copy of LEVEL_01_026540.c: shuts down the video player and resets related state, then runs a callback. */
extern int func_024A30(void *b);
extern void BinkClose(void *b);
extern void func_026550(int a, int b, int c);
extern void *D_001DDD88;
extern int D_001DDD8C;
extern int D_001DDC7C;
extern int D_001DDC80;
extern unsigned char D_001DDCE7;
extern int D_001DDCD8;
extern char D_001DDCD0;
extern char D_001DDCD1;
extern unsigned char D_001DDCD5;
extern int D_002043F0;
extern int D_001DDCDC;
extern void (*D_001DDD68)(int);
extern int D_001DDD70;

int func_0257B0(void)
{
    int r = func_024A30(D_001DDD88);
    int s;
    int m;
    BinkClose(D_001DDD88);
    D_001DDD88 = 0;
    D_001DDD8C = 0;
    D_001DDC7C = 0;
    if (D_001DDCE7 == 0) {
        D_001DDC80 = 0;
    }
    s = D_001DDCD8;
    D_001DDCD0 = 0;
    D_001DDCD1 = 0;
    if (s >= 0 && D_001DDCD5 != 0) {
        m = D_002043F0;
        if (m == 0x16) {
            m = 3;
        } else if (m == 0x17) {
            m = 6;
        }
        m = m - 1;
        m = m * 2;
        s &= 0xFF;
        func_026550(m + 4, 1, s);
        func_026550(m + 0xA2, 1, s);
    }
    D_001DDCD8 = -1;
    D_001DDCDC = -1;
    if (D_001DDD68 != 0) {
        D_001DDD68(D_001DDD70);
    }
    return r;
}

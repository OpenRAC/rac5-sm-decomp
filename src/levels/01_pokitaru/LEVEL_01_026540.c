/* LEVEL_01:0x026540 -- shuts down the video player and resets related state, then runs a callback. */
extern int func_0257C0(void *b);
extern void BinkClose(void *b);
extern void func_027548(int a, int b, int c);
extern void *D_001F3F88;
extern int D_001F3F8C;
extern int D_001F3E7C;
extern int D_001F3E80;
extern unsigned char D_001F3EE7;
extern int D_001F3ED8;
extern char D_001F3ED0;
extern char D_001F3ED1;
extern unsigned char D_001F3ED5;
extern int D_0021A7F0;
extern int D_001F3EDC;
extern void (*D_001F3F68)(int);
extern int D_001F3F70;

int func_026540(void)
{
    int r = func_0257C0(D_001F3F88);
    int s;
    int m;
    BinkClose(D_001F3F88);
    D_001F3F88 = 0;
    D_001F3F8C = 0;
    D_001F3E7C = 0;
    if (D_001F3EE7 == 0) {
        D_001F3E80 = 0;
    }
    s = D_001F3ED8;
    D_001F3ED0 = 0;
    D_001F3ED1 = 0;
    if (s >= 0 && D_001F3ED5 != 0) {
        m = D_0021A7F0;
        if (m == 0x16) {
            m = 3;
        } else if (m == 0x17) {
            m = 6;
        }
        m = m - 1;
        m = m * 2;
        s &= 0xFF;
        func_027548(m + 4, 1, s);
        func_027548(m + 0xA2, 1, s);
    }
    D_001F3ED8 = -1;
    D_001F3EDC = -1;
    if (D_001F3F68 != 0) {
        D_001F3F68(D_001F3F70);
    }
    return r;
}

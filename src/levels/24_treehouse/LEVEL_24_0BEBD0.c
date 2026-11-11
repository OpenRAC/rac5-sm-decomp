/* LEVEL_24:0x0BEBD0 -- placement copy of LEVEL_01_0C5308.c: sets up the picker state once and records that it is ready. */
extern float D_001D1808;
extern float D_001D180C;
extern short D_001D1810;
extern int D_001D17A0;
extern char D_001D1794;
extern int D_001CC708;
extern char D_002F74B0[];
extern void func_0BEB18(void);
extern void func_09FCC0(void);
extern int func_0A0B60(void);
extern void func_09FF18(void);
extern int func_0A0230(void);
extern void func_09FCD0(void);
extern void func_0A1518(float *a, float *b, float x, float y);
extern void func_0BF7C0(short a, short b);
extern int func_09D568(int a);
extern void func_01A198(void);
extern int func_0A02B8(void);
extern int func_01A2A8(char *buf, int a, int b, int c);
extern void *memset(void *p, int c, unsigned int n);

void func_0BEBD0(void)
{
    float v[2];
    int r;
    int t;

    func_0BEB18();
    func_09FCC0();
    if (func_0A0B60())
        func_09FF18();
    if (func_0A0230()) {
        func_09FCD0();
        v[1] = v[0] = 0.0f;
        func_0A1518(&v[0], &v[1], D_001D1808, D_001D180C);
        func_0BF7C0((short)(int)v[0], (short)(int)v[1]);
        t = func_09D568(D_001CC708);
        D_001D1810 = t;
        func_01A198();
        memset(D_002F74B0, 0, 0x400);
        r = func_0A02B8();
        D_001D17A0 = 0;
        if (r >= 0)
            D_001D17A0 = func_01A2A8(D_002F74B0, r, 2, 1);
    }
    D_001D1794 = 1;
}

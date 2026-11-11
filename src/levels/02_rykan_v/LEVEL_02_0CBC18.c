/* LEVEL_02:0x0CBC18 -- placement copy of LEVEL_01_0C5308.c: sets up the picker state once and records that it is ready. */
extern float D_00215B48;
extern float D_00215B4C;
extern short D_00215B50;
extern int D_00215AE0;
extern char D_00215AD4;
extern int D_00210A48;
extern char D_00342AF0[];
extern void func_0CBB60(void);
extern void func_0ACD58(void);
extern int func_0ADBF8(void);
extern void func_0ACFB0(void);
extern int func_0AD2C8(void);
extern void func_0ACD68(void);
extern void func_0AE5B0(float *a, float *b, float x, float y);
extern void func_0CC808(short a, short b);
extern int func_0AA600(int a);
extern void func_01C508(void);
extern int func_0AD350(void);
extern int func_01C618(char *buf, int a, int b, int c);
extern void *memset(void *p, int c, unsigned int n);

void func_0CBC18(void)
{
    float v[2];
    int r;
    int t;

    func_0CBB60();
    func_0ACD58();
    if (func_0ADBF8())
        func_0ACFB0();
    if (func_0AD2C8()) {
        func_0ACD68();
        v[1] = v[0] = 0.0f;
        func_0AE5B0(&v[0], &v[1], D_00215B48, D_00215B4C);
        func_0CC808((short)(int)v[0], (short)(int)v[1]);
        t = func_0AA600(D_00210A48);
        D_00215B50 = t;
        func_01C508();
        memset(D_00342AF0, 0, 0x400);
        r = func_0AD350();
        D_00215AE0 = 0;
        if (r >= 0)
            D_00215AE0 = func_01C618(D_00342AF0, r, 2, 1);
    }
    D_00215AD4 = 1;
}

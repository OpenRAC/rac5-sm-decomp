/* LEVEL_20:0x09ED48 -- placement copy of LEVEL_01_0C5308.c: sets up the picker state once and records that it is ready. */
extern float D_001112E0;
extern float D_001112E4;
extern short D_001112E8;
extern int D_00111278;
extern char D_0011126C;
extern int D_0010C128;
extern char D_0019CD70[];
extern void func_09EC90(void);
extern void func_07FDC0(void);
extern int func_0802B8(void);
extern void func_07FFC8(void);
extern int func_080028(void);
extern void func_07FDD0(void);
extern void func_080A28(float *a, float *b, float x, float y);
extern void func_09F098(short a, short b);
extern int func_07D558(int a);
extern void func_017FD0(void);
extern int func_080080(void);
extern int func_0180E0(char *buf, int a, int b, int c);
extern void *memset(void *p, int c, unsigned int n);

void func_09ED48(void)
{
    float v[2];
    int r;
    int t;

    func_09EC90();
    func_07FDC0();
    if (func_0802B8())
        func_07FFC8();
    if (func_080028()) {
        func_07FDD0();
        v[1] = v[0] = 0.0f;
        func_080A28(&v[0], &v[1], D_001112E0, D_001112E4);
        func_09F098((short)(int)v[0], (short)(int)v[1]);
        t = func_07D558(D_0010C128);
        D_001112E8 = t;
        func_017FD0();
        memset(D_0019CD70, 0, 0x400);
        r = func_080080();
        D_00111278 = 0;
        if (r >= 0)
            D_00111278 = func_0180E0(D_0019CD70, r, 2, 1);
    }
    D_0011126C = 1;
}

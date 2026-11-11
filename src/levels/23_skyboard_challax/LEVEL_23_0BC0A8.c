/* LEVEL_23:0x0BC0A8 -- placement copy of LEVEL_01_0C5308.c: sets up the picker state once and records that it is ready. */
extern float D_001D3F88;
extern float D_001D3F8C;
extern short D_001D3F90;
extern int D_001D3F20;
extern char D_001D3F14;
extern int D_001CEE88;
extern char D_002FCA30[];
extern void func_0BBFF0(void);
extern void func_09D1B8(void);
extern int func_09E058(void);
extern void func_09D410(void);
extern int func_09D728(void);
extern void func_09D1C8(void);
extern void func_09EA10(float *a, float *b, float x, float y);
extern void func_0BCC98(short a, short b);
extern int func_09AA30(int a);
extern void func_01A6B8(void);
extern int func_09D7B0(void);
extern int func_01A7C8(char *buf, int a, int b, int c);
extern void *memset(void *p, int c, unsigned int n);

void func_0BC0A8(void)
{
    float v[2];
    int r;
    int t;

    func_0BBFF0();
    func_09D1B8();
    if (func_09E058())
        func_09D410();
    if (func_09D728()) {
        func_09D1C8();
        v[1] = v[0] = 0.0f;
        func_09EA10(&v[0], &v[1], D_001D3F88, D_001D3F8C);
        func_0BCC98((short)(int)v[0], (short)(int)v[1]);
        t = func_09AA30(D_001CEE88);
        D_001D3F90 = t;
        func_01A6B8();
        memset(D_002FCA30, 0, 0x400);
        r = func_09D7B0();
        D_001D3F20 = 0;
        if (r >= 0)
            D_001D3F20 = func_01A7C8(D_002FCA30, r, 2, 1);
    }
    D_001D3F14 = 1;
}

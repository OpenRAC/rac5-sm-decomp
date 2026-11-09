/* LEVEL_08:0x0D0230 -- placement copy of LEVEL_01_0C5308.c: sets up the picker state once and records that it is ready. */
extern float D_00249A48;
extern float D_00249A4C;
extern short D_00249A50;
extern int D_002499E0;
extern char D_002499D4;
extern int D_00244948;
extern char D_0037A870[];
extern void func_0D0178(void);
extern void func_0B0D40(void);
extern int func_0B1BE0(void);
extern void func_0B0F98(void);
extern int func_0B12B0(void);
extern void func_0B0D50(void);
extern void func_0B2598(float *a, float *b, float x, float y);
extern void func_0D0E20(short a, short b);
extern int func_0AE5E8(int a);
extern void func_01C520(void);
extern int func_0B1338(void);
extern int func_01C630(char *buf, int a, int b, int c);
extern void *memset(void *p, int c, unsigned int n);

void func_0D0230(void)
{
    float v[2];
    int r;
    int t;

    func_0D0178();
    func_0B0D40();
    if (func_0B1BE0())
        func_0B0F98();
    if (func_0B12B0()) {
        func_0B0D50();
        v[1] = v[0] = 0.0f;
        func_0B2598(&v[0], &v[1], D_00249A48, D_00249A4C);
        func_0D0E20((short)(int)v[0], (short)(int)v[1]);
        t = func_0AE5E8(D_00244948);
        D_00249A50 = t;
        func_01C520();
        memset(D_0037A870, 0, 0x400);
        r = func_0B1338();
        D_002499E0 = 0;
        if (r >= 0)
            D_002499E0 = func_01C630(D_0037A870, r, 2, 1);
    }
    D_002499D4 = 1;
}

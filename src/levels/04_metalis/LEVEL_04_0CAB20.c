/* LEVEL_04:0x0CAB20 -- placement copy of LEVEL_01_0C5308.c: sets up the picker state once and records that it is ready. */
extern float D_0021A048;
extern float D_0021A04C;
extern short D_0021A050;
extern int D_00219FE0;
extern char D_00219FD4;
extern int D_00214F48;
extern char D_00345DF0[];
extern void func_0CAA68(void);
extern void func_0AB658(void);
extern int func_0AC4F8(void);
extern void func_0AB8B0(void);
extern int func_0ABBC8(void);
extern void func_0AB668(void);
extern void func_0ACEB0(float *a, float *b, float x, float y);
extern void func_0CB710(short a, short b);
extern int func_0A8F00(int a);
extern void func_01B828(void);
extern int func_0ABC50(void);
extern int func_01B938(char *buf, int a, int b, int c);
extern void *memset(void *p, int c, unsigned int n);

void func_0CAB20(void)
{
    float v[2];
    int r;
    int t;

    func_0CAA68();
    func_0AB658();
    if (func_0AC4F8())
        func_0AB8B0();
    if (func_0ABBC8()) {
        func_0AB668();
        v[1] = v[0] = 0.0f;
        func_0ACEB0(&v[0], &v[1], D_0021A048, D_0021A04C);
        func_0CB710((short)(int)v[0], (short)(int)v[1]);
        t = func_0A8F00(D_00214F48);
        D_0021A050 = t;
        func_01B828();
        memset(D_00345DF0, 0, 0x400);
        r = func_0ABC50();
        D_00219FE0 = 0;
        if (r >= 0)
            D_00219FE0 = func_01B938(D_00345DF0, r, 2, 1);
    }
    D_00219FD4 = 1;
}

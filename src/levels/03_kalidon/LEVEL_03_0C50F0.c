/* LEVEL_03:0x0C50F0 -- placement copy of LEVEL_01_0C5308.c: sets up the picker state once and records that it is ready. */
extern float D_00219208;
extern float D_0021920C;
extern short D_00219210;
extern int D_002191A0;
extern char D_00219194;
extern int D_00214108;
extern char D_00346470[];
extern void func_0C5038(void);
extern void func_0A61C8(void);
extern int func_0A7068(void);
extern void func_0A6420(void);
extern int func_0A6738(void);
extern void func_0A61D8(void);
extern void func_0A7A20(float *a, float *b, float x, float y);
extern void func_0C5CE0(short a, short b);
extern int func_0A3A70(int a);
extern void func_01B910(void);
extern int func_0A67C0(void);
extern int func_01BA20(char *buf, int a, int b, int c);
extern void *memset(void *p, int c, unsigned int n);

void func_0C50F0(void)
{
    float v[2];
    int r;
    int t;

    func_0C5038();
    func_0A61C8();
    if (func_0A7068())
        func_0A6420();
    if (func_0A6738()) {
        func_0A61D8();
        v[1] = v[0] = 0.0f;
        func_0A7A20(&v[0], &v[1], D_00219208, D_0021920C);
        func_0C5CE0((short)(int)v[0], (short)(int)v[1]);
        t = func_0A3A70(D_00214108);
        D_00219210 = t;
        func_01B910();
        memset(D_00346470, 0, 0x400);
        r = func_0A67C0();
        D_002191A0 = 0;
        if (r >= 0)
            D_002191A0 = func_01BA20(D_00346470, r, 2, 1);
    }
    D_00219194 = 1;
}

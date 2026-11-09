/* LEVEL_10:0x0C6680 -- placement copy of LEVEL_01_0C5308.c: sets up the picker state once and records that it is ready. */
extern float D_00209B88;
extern float D_00209B8C;
extern short D_00209B90;
extern int D_00209B20;
extern char D_00209B14;
extern int D_00204A88;
extern char D_003349F0[];
extern void func_0C65C8(void);
extern void func_0A7560(void);
extern int func_0A8400(void);
extern void func_0A77B8(void);
extern int func_0A7AD0(void);
extern void func_0A7570(void);
extern void func_0A8DB8(float *a, float *b, float x, float y);
extern void func_0C7270(short a, short b);
extern int func_0A4E08(int a);
extern void func_01B228(void);
extern int func_0A7B58(void);
extern int func_01B338(char *buf, int a, int b, int c);
extern void *memset(void *p, int c, unsigned int n);

void func_0C6680(void)
{
    float v[2];
    int r;
    int t;

    func_0C65C8();
    func_0A7560();
    if (func_0A8400())
        func_0A77B8();
    if (func_0A7AD0()) {
        func_0A7570();
        v[1] = v[0] = 0.0f;
        func_0A8DB8(&v[0], &v[1], D_00209B88, D_00209B8C);
        func_0C7270((short)(int)v[0], (short)(int)v[1]);
        t = func_0A4E08(D_00204A88);
        D_00209B90 = t;
        func_01B228();
        memset(D_003349F0, 0, 0x400);
        r = func_0A7B58();
        D_00209B20 = 0;
        if (r >= 0)
            D_00209B20 = func_01B338(D_003349F0, r, 2, 1);
    }
    D_00209B14 = 1;
}

/* LEVEL_23:0x17D0F8 -- placement copy of LEVEL_22_130418.c: counts down a timer and stores a looked-up vector into a slot table. */
typedef struct V {
    float x, y, z;
    float pad;
} V;
typedef struct T {
    char pad0[0xAD];
    unsigned char bAD;
} T;
typedef struct O {
    char pad0[0x45];
    unsigned char b45;
    char pad46[0x12];
    T *f58;
    char pad5C[0x14];
    float f70;
} O;
extern void func_0B30D0(int a);
extern void func_09CD40(int a, int b, int c, int d, int e, int f);
extern void func_05ADA8(float f);
extern int func_056468(void);
extern void func_056D40(int a);
extern float *func_018F18(void);
extern void func_17CAE0(O *o, int a, int b);

void func_17D0F8(O *o)
{
    T *t;
    float *v;
    float *d;
    float x;
    int i;
    t = o->f58;
    func_0B30D0(0x16);
    func_09CD40(0, 0xFF000000, 0xFE, 0x20, 0x1E, 0);
    func_05ADA8(0.0f);
    if (t->bAD >= 4) {
        if (func_056468())
            func_056D40(1);
        return;
    }
    x = o->f70 - 1.0f;
    o->f70 = x;
    if (!(x > 0.0f)) {
        i = t->bAD;
        v = func_018F18();
        d = (float *)(i * 16 + (int)t);
        d[0] = v[0];
        d[1] = v[1];
        d[2] = v[2];
        func_17CAE0(o, o->b45, 3);
    }
}

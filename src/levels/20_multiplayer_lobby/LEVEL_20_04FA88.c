/* LEVEL_20:0x04FA88 -- placement copy of LEVEL_01_063A80.c: steps a damped spring with a clamped speed and updates object state. */
typedef struct {
    char pad0[0x108];
    unsigned short state;
    char pad1[0x23C - 0x10A];
    float x;
    float target;
    float v;
    float k;
    float damp;
    float lim;
    char pad2[0x968 - 0x254];
    long long flags;
} Obj;
typedef struct {
    char pad0[0x44];
    unsigned char bits;
} Glob;

extern float D_000FD40C;
extern Glob D_00143158;
extern void func_03F0B0(Obj *o, int a, int b, float f0, float f1, float f2);
extern void func_046FD8(Obj *o);
extern void func_050A00(Obj *o, void *a, void *b);
extern void func_050DF8(Obj *o);
extern void func_04F5E8(Obj *o);
extern void func_0907D8(int a);

static inline int MinInt(int a, int b)
{
    int *p = (a >= b) ? &b : &a;
    return *p;
}

void func_04FA88(Obj *o)
{
    int cnt;
    float *x;
    float *v;
    float t;
    float target;
    float k;
    float damp;
    float lim;
    func_03F0B0(o, 0x68, 0, 0.4f, 0.3f, 0.1f);
    func_046FD8(o);
    cnt = MinInt((int)(D_000FD40C * 59.998802185058594f), 2);
    target = o->target;
    damp = o->damp;
    lim = o->lim;
    k = o->k * 1.5f;
    x = &o->x;
    v = &o->v;
    if (cnt > 0) do {
        t = (target - *x) * k - *v * damp;
        *v = t;
        if (t > lim)
            *v = lim;
        else if (t < -lim)
            *v = -lim;
        *x = *x + *v;
    } while (--cnt != 0);
    func_050A00(o, &D_00143158, (char *)&D_00143158 + 0x24);
    func_050DF8(o);
    if ((unsigned)(o->state - 0xB) >= 2)
        D_00143158.bits |= 0x10;
    if (D_00143158.bits & 2) {
        func_04F5E8(o);
        D_00143158.bits &= 0xFD;
    }
    o->flags |= 0x40;
    func_0907D8(1);
}

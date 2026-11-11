/* LEVEL_06:0x060840 -- placement copy of LEVEL_01_063A80.c: steps a damped spring with a clamped speed and updates object state. */
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

extern float D_001DE19C;
extern Glob D_00225ED8;
extern void func_045BF0(Obj *o, int a, int b, float f0, float f1, float f2);
extern void func_0517E8(Obj *o);
extern void func_0617B8(Obj *o, void *a, void *b);
extern void func_061BB0(Obj *o);
extern void func_060370(Obj *o);
extern void func_0B1AA8(int a);

static inline int MinInt(int a, int b)
{
    int *p = (a >= b) ? &b : &a;
    return *p;
}

void func_060840(Obj *o)
{
    int cnt;
    float *x;
    float *v;
    float t;
    float target;
    float k;
    float damp;
    float lim;
    func_045BF0(o, 0x68, 0, 0.4f, 0.3f, 0.1f);
    func_0517E8(o);
    cnt = MinInt((int)(D_001DE19C * 59.998802185058594f), 2);
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
    func_0617B8(o, &D_00225ED8, (char *)&D_00225ED8 + 0x24);
    func_061BB0(o);
    if ((unsigned)(o->state - 0xB) >= 2)
        D_00225ED8.bits |= 0x10;
    if (D_00225ED8.bits & 2) {
        func_060370(o);
        D_00225ED8.bits &= 0xFD;
    }
    o->flags |= 0x40;
    func_0B1AA8(1);
}

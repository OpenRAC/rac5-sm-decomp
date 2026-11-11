/* LEVEL_09:0x060680 -- placement copy of LEVEL_01_063A80.c: steps a damped spring with a clamped speed and updates object state. */
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

extern float D_001D909C;
extern Glob D_002208D8;
extern void func_0459A8(Obj *o, int a, int b, float f0, float f1, float f2);
extern void func_051628(Obj *o);
extern void func_0615F8(Obj *o, void *a, void *b);
extern void func_0619F0(Obj *o);
extern void func_0601B0(Obj *o);
extern void func_0B4488(int a);

static inline int MinInt(int a, int b)
{
    int *p = (a >= b) ? &b : &a;
    return *p;
}

void func_060680(Obj *o)
{
    int cnt;
    float *x;
    float *v;
    float t;
    float target;
    float k;
    float damp;
    float lim;
    func_0459A8(o, 0x68, 0, 0.4f, 0.3f, 0.1f);
    func_051628(o);
    cnt = MinInt((int)(D_001D909C * 59.998802185058594f), 2);
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
    func_0615F8(o, &D_002208D8, (char *)&D_002208D8 + 0x24);
    func_0619F0(o);
    if ((unsigned)(o->state - 0xB) >= 2)
        D_002208D8.bits |= 0x10;
    if (D_002208D8.bits & 2) {
        func_0601B0(o);
        D_002208D8.bits &= 0xFD;
    }
    o->flags |= 0x40;
    func_0B4488(1);
}

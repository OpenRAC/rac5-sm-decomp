/* LEVEL_24:0x05D0D0 -- placement copy of LEVEL_01_063A80.c: steps a damped spring with a clamped speed and updates object state. */
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

extern float D_001BFF1C;
extern Glob D_00205058;
extern void func_0424B0(Obj *o, int a, int b, float f0, float f1, float f2);
extern void func_04E078(Obj *o);
extern void func_05E048(Obj *o, void *a, void *b);
extern void func_05E440(Obj *o);
extern void func_05CC00(Obj *o);
extern void func_0B0A68(int a);

static inline int MinInt(int a, int b)
{
    int *p = (a >= b) ? &b : &a;
    return *p;
}

void func_05D0D0(Obj *o)
{
    int cnt;
    float *x;
    float *v;
    float t;
    float target;
    float k;
    float damp;
    float lim;
    func_0424B0(o, 0x68, 0, 0.4f, 0.3f, 0.1f);
    func_04E078(o);
    cnt = MinInt((int)(D_001BFF1C * 59.998802185058594f), 2);
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
    func_05E048(o, &D_00205058, (char *)&D_00205058 + 0x24);
    func_05E440(o);
    if ((unsigned)(o->state - 0xB) >= 2)
        D_00205058.bits |= 0x10;
    if (D_00205058.bits & 2) {
        func_05CC00(o);
        D_00205058.bits &= 0xFD;
    }
    o->flags |= 0x40;
    func_0B0A68(1);
}

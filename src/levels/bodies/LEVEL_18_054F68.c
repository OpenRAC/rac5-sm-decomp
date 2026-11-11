/* LEVEL_18:0x054F68 -- placement copy of LEVEL_01_063A80.c: steps a damped spring with a clamped speed and updates object state. */
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

extern float D_0019C1A4;
extern Glob D_001EBBA8;
extern void func_0437D0(Obj *o, int a, int b, float f0, float f1, float f2);
extern void func_04C4B8(Obj *o);
extern void func_055EE0(Obj *o, void *a, void *b);
extern void func_0562D8(Obj *o);
extern void func_054AC8(Obj *o);
extern void func_0A51D0(int a);

static inline int MinInt(int a, int b)
{
    int *p = (a >= b) ? &b : &a;
    return *p;
}

void func_054F68(Obj *o)
{
    int cnt;
    float *x;
    float *v;
    float t;
    float target;
    float k;
    float damp;
    float lim;
    func_0437D0(o, 0x68, 0, 0.4f, 0.3f, 0.1f);
    func_04C4B8(o);
    cnt = MinInt((int)(D_0019C1A4 * 59.998802185058594f), 2);
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
    func_055EE0(o, &D_001EBBA8, (char *)&D_001EBBA8 + 0x24);
    func_0562D8(o);
    if ((unsigned)(o->state - 0xB) >= 2)
        D_001EBBA8.bits |= 0x10;
    if (D_001EBBA8.bits & 2) {
        func_054AC8(o);
        D_001EBBA8.bits &= 0xFD;
    }
    o->flags |= 0x40;
    func_0A51D0(1);
}

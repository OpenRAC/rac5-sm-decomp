/* LEVEL_01.REL:0x063A80: reviewed 408-byte candidate, held for ABI review.
 * Steps a damped spring with a clamped speed and updates object state.
 * pinned C with gnu-ee-trial links 408/408 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_0B71D8 returning void with (int), but the accepted
 * LEVEL_01_0B71D8.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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

extern float D_001EF29C;
extern Glob D_00239158;
extern void func_0494C8(Obj *o, int a, int b, float f0, float f1, float f2);
extern void func_054F38(Obj *o);
extern void func_0649F8(Obj *o, void *a, void *b);
extern void func_064DF0(Obj *o);
extern void func_0635B0(Obj *o);
extern void func_0B71D8(int a);

static inline int MinInt(int a, int b)
{
    int *p = (a >= b) ? &b : &a;
    return *p;
}

void func_063A80(Obj *o)
{
    int cnt;
    float *x;
    float *v;
    float t;
    float target;
    float k;
    float damp;
    float lim;
    func_0494C8(o, 0x68, 0, 0.4f, 0.3f, 0.1f);
    func_054F38(o);
    cnt = MinInt((int)(D_001EF29C * 59.998802185058594f), 2);
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
    func_0649F8(o, &D_00239158, (char *)&D_00239158 + 0x24);
    func_064DF0(o);
    if ((unsigned)(o->state - 0xB) >= 2)
        D_00239158.bits |= 0x10;
    if (D_00239158.bits & 2) {
        func_0635B0(o);
        D_00239158.bits &= 0xFD;
    }
    o->flags |= 0x40;
    func_0B71D8(1);
}

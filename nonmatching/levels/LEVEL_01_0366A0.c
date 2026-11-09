/* LEVEL_01.REL:0x0366A0: reviewed 348-byte candidate, held for ABI review.
 * Steps a float-based pseudo random generator twice, builds a vector from it,
 * and blends two stored values by the result.
 * pinned C with gnu-ee-trial links 348/348 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_125C08 returning void with (pointer, int, pointer), but the
 * accepted LEVEL_01_125C08.c defines it returning void with (pointer, pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct P0366A0 {
    char pad0[8];
    float f08;
    float f0C;
    float f10;
};

struct A0366A0 {
    char pad0[0x1C];
    struct P0366A0 *p1C;
};

struct Obj0366A0 {
    char pad0[0xC];
    float fC;
};

extern float fabsf(float x);
extern void func_121A28(float *v, int a, float t, float angle);
extern void func_125C08(struct Obj0366A0 *o, int b, float *v);

static __inline__ float Rnd0366A0(float x)
{
    int n;

    n = (int)(x * 7.826379260222893e-06f);
    return fabsf((x - (float)n * 127773.0f) * 16807.0f - (float)n * 2836.0f);
}

float func_0366A0(struct Obj0366A0 *o, struct A0366A0 *a, int b, int c, float unused, float seed)
{
    float v[4];
    struct P0366A0 *p;
    float t;
    float angle;
    float r1;
    float r2;

    p = a->p1C;
    r1 = Rnd0366A0(seed);
    t = p->f10 + (1.0f - p->f10) * (seed * 4.656612873077393e-10f);
    angle = r1 * 2.925836239953128e-09f - 3.1415927410125732f;
    r2 = Rnd0366A0(r1);
    func_121A28(v, b, t, angle);
    func_125C08(o, c, v);
    o->fC = p->f08 + (p->f0C - p->f08) * (r2 * 4.656612873077393e-10f);
    return r2;
}

/* LEVEL_02:0x1B5350 -- drifts the object by its velocity for a limited time, then reports the unit direction to its target to two helper calls. */

struct Tgt1B5350 {
    char pad0[0x30];
    float f30;
    char pad34[4];
    float f38;
};

struct Sub1B5350 {
    char pad0[0x40];
    struct Tgt1B5350 *p40;
    char pad44[4];
    float f48;
    float f4C;
    float f50;
    char pad54;
    unsigned char b55;
};

struct Child1B5350 {
    char pad0[8];
    float f08;
    float f0C;
};

struct Obj1B5350 {
    char pad0[0x30];
    float f30;
    float f34;
    float f38;
    char pad3C[0x18];
    struct Child1B5350 *p54;
    struct Sub1B5350 *p58;
};

extern char D_0023D5DC[];
extern float sqrtf(float x);
extern void func_013860(struct Obj1B5350 *o, float *a, float *b, float *v, char *tab);
extern int func_0833A0(struct Obj1B5350 *o, int a);
extern void func_082F58(struct Obj1B5350 *o, int a);

static __inline__ void Add3_1B5350(float *dst, float *src)
{
    dst[0] += src[0];
    dst[1] += src[1];
    dst[2] += src[2];
}

void func_1B5350(struct Obj1B5350 *o)
{
    struct Sub1B5350 *s;
    struct Child1B5350 *c;
    struct Tgt1B5350 *t;
    float v[4];
    float dx;
    float dz;
    float d2;

    s = o->p58;
    c = o->p54;
    if (s->b55 < 30) {
        Add3_1B5350(&o->f30, &s->f48);
        s->b55 = s->b55 + 1;
    }
    t = s->p40;
    dx = o->f30 - t->f30;
    v[0] = dx;
    dz = o->f38 - t->f38;
    v[1] = 0.0f;
    v[2] = dz;
    v[3] = 1.0f;
    d2 = dx * dx + dz * dz;
    if (!(d2 < 2.384185791015625e-07f)) {
        d2 = 1.0f / sqrtf(d2);
        v[0] = d2 * v[0];
        v[2] = d2 * v[2];
    }
    func_013860(o, &c->f08, &c->f0C, v, D_0023D5DC);
    if (func_0833A0(o, 0) != 0) {
        func_082F58(o, 1);
    }
}

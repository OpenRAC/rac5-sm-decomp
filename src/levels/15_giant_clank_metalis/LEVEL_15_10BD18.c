/* LEVEL_15:0x10BD18 -- steps an object along its velocity by a clamped amount, rebuilds its transform and ticks its lifetime down. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    float m[9];
    Vec3 pos;
} Xform;

typedef struct {
    char pad_00[0x14];
    float f14;
    float f18;
    char pad_1C[0x0C];
    float f28;
} Param;

typedef struct {
    char pad_00[8];
    Vec3 vel;
    float f14;
    float f18;
    char pad_1C[0x38];
    float a_54[4];
    char pad_64[0x20];
    float o_84[4];
    char pad_94[0x20];
    float b_B4[4];
    Vec3 pos_C4;
    unsigned char flags_D0;
    unsigned char flags_D1;
    char pad_D2[0x136];
    float f208[3];
    char pad_214[4];
    float r_218;
    char pad_21C[4];
    int f220;
    char pad_224[8];
    float f22C[1];
    Param *param;
    char pad_234[0x74];
    float f2A8;
} Obj;

extern float D_002EF6D0;

extern void func_0E6200(float *a, float *b, float *c, float f, float g);
extern void func_0E8948(Xform *out, float *in);
extern void func_0EC3A0(float *out, float *in, Xform *s);
extern void func_0ECE10(int flag, float *v, float m0, float m1, float m2);

static __inline__ void AddScaled(Vec3 *dst, Vec3 *v, float k)
{
    dst->x = dst->x + v->x * k;
    dst->y = dst->y + v->y * k;
    dst->z = dst->z + v->z * k;
}

void func_10BD18(Obj *o)
{
    Xform s;
    Param *p;
    float a;
    float b;
    float t;

    p = o->param;
    func_0E6200(o->b_B4, o->f22C, o->f208, 0.5f, D_002EF6D0);
    a = o->f14 + p->f18;
    b = p->f14;
    t = (a + b - __builtin_fabsf(b - a)) * 0.5f;
    o->f14 = t;
    AddScaled(&o->pos_C4, &o->vel, t);
    o->f2A8 = o->f14 * p->f28;
    func_0E8948(&s, o->b_B4);
    s.pos = o->pos_C4;
    func_0EC3A0(o->o_84, o->a_54, &s);
    func_0ECE10(0, o->o_84, o->r_218, o->r_218, o->r_218);
    o->f18 = o->f18 - 1.0f;
    if ((o->flags_D1 & 2) == 0 || o->f18 < 0.0f) {
        o->f220 = 0;
        o->flags_D0 |= 1;
    }
}

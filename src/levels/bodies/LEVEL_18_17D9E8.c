/* LEVEL_18:0x17D9E8 -- snaps an actor's horizontal position to its target and passes the normalised offset to a helper. */

struct Tgt17D9E8 {
    char pad_00[0x30];
    float pos_30[3];
};
struct Link17D9E8 {
    struct Tgt17D9E8 *t_00;
};
struct Ctx17D9E8 {
    char pad_00[0x10];
    float v_10[3];
};
struct Obj17D9E8 {
    char pad_00[0x10];
    float v_10[3];
    float pad_1C;
    float v_20[3];
    float pad_2C;
    float pos_30[3];
    char pad_3C[0x1C];
    struct Link17D9E8 *link_58;
};

extern float sqrtf(float x);

void func_036608(struct Tgt17D9E8 *t);
struct Ctx17D9E8 *func_000E40(void);
void func_103A70(struct Obj17D9E8 *o, float *a, float *d, float *c);

static __inline__ void vcopy(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ void vcopy_xz(float *d, float *s)
{
    d[0] = s[0];
    d[2] = s[2];
}

static __inline__ void vsub(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

void func_17D9E8(struct Obj17D9E8 *o)
{
    struct Tgt17D9E8 *t;
    struct Ctx17D9E8 *c;
    float d[3];
    float len2;
    float inv;

    t = o->link_58->t_00;
    func_036608(t);
    c = func_000E40();
    vcopy_xz(o->pos_30, t->pos_30);
    vsub(d, t->pos_30, o->pos_30);
    len2 = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
    if (!(len2 < 2.384185791015625e-07f)) {
        inv = 1.0f / sqrtf(len2);
        d[0] = d[0] * inv;
        d[1] = d[1] * inv;
        d[2] = d[2] * inv;
    }
    func_103A70(o, o->v_10, d, c->v_10);
    vcopy(o->v_20, d);
}

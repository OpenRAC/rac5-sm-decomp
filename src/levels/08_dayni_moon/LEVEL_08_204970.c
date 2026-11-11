/* LEVEL_08:0x204970 -- placement copy of LEVEL_04_1DD9F8.c: aims a launch vector from the object's follow target toward a point, scaling it to the source's speed and adding the drop over the flight time. */

struct Src1DD9F8 {
    char pad_00[0x1C];
    float f_1C;
};
struct LinkB1DD9F8 {
    struct Src1DD9F8 *s_00;
};
struct Node1DD9F8 {
    char pad_00[0x30];
    float pos_30[3];
    char pad_3C[0x1C];
    struct LinkB1DD9F8 *l_58;
};
struct LinkA1DD9F8 {
    struct Node1DD9F8 *n_00;
};
struct Obj1DD9F8 {
    char pad_00[0x58];
    struct LinkA1DD9F8 *l_58;
};

extern float D_00261B08[3];
extern float D_002708A8;

extern float sqrtf(float x);

void func_0379C8(struct Obj1DD9F8 *o, float *v, float f);

static __inline__ void vsub(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

void func_204970(struct Obj1DD9F8 *o, float *to, float *spd)
{
    struct Node1DD9F8 *n;
    struct Src1DD9F8 *s;
    float *dir;
    float d[3];
    float len;
    float r;
    float inv;
    float t;
    float v;

    dir = D_00261B08;
    n = o->l_58->n_00;
    s = n->l_58->s_00;
    vsub(d, to, n->pos_30);
    if (d[0] * d[0] + d[2] * d[2] < 2.384185791015625e-07f) {
        d[0] = dir[0];
        d[2] = dir[2];
        len = 0.0f;
    } else {
        r = sqrtf(d[0] * d[0] + d[2] * d[2]);
        inv = 1.0f / r;
        d[0] = inv * d[0];
        d[2] = inv * d[2];
        len = r;
    }
    v = s->f_1C;
    t = len / v;
    d[0] = d[0] * v;
    d[2] = d[2] * v;
    d[1] = d[1] / t + D_002708A8 * 0.5f * t;
    func_0379C8(o, d, *spd);
}

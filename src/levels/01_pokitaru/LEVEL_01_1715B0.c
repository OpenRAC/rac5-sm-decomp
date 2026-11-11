/* LEVEL_01:0x1715B0 -- aims a mover at a target point, steps its position by its velocity scaled by the time step, and returns the distance to the target. */

struct Info1715B0 {
    char pad0[0x10];
    char sub[0x40];
    float f50;
    char pad54[0xC];
    float f60;
};

struct Obj1715B0 {
    char pad0[0x20];
    float vel[3];
    char pad2C[4];
    float pos[3];
    char pad3C[0x1C];
    struct Info1715B0 *info;
};

extern char D_00220E70[];
extern char D_00217E88[];

extern float sqrtf(float x);
extern void func_013AB8(struct Obj1715B0 *o, char *p, float *dir, char *a, char *b);
extern void func_171C70(struct Obj1715B0 *o, float f);

static __inline__ void Sub1715B0(float *out, float *a, float *b)
{
    out[0] = a[0] - b[0];
    out[1] = a[1] - b[1];
    out[2] = a[2] - b[2];
}

static __inline__ void Madd1715B0(float *dst, float *v, float t)
{
    dst[0] = dst[0] + v[0] * t;
    dst[1] = dst[1] + v[1] * t;
    dst[2] = dst[2] + v[2] * t;
}

float func_1715B0(struct Obj1715B0 *o, float *t)
{
    float d[3];
    float len;
    float dist2;
    float inv;
    float root;
    struct Info1715B0 *info;

    info = o->info;
    Sub1715B0(d, t, o->pos);
    dist2 = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
    if (dist2 < 2.384185791015625e-07f) {
        len = 0.0f;
    } else {
        root = sqrtf(dist2);
        inv = 1.0f / root;
        d[0] = d[0] * inv;
        d[1] = d[1] * inv;
        d[2] = d[2] * inv;
        len = root;
    }
    func_013AB8(o, info->sub, d, D_00220E70, D_00217E88);
    Madd1715B0(o->pos, o->vel, info->f50);
    func_171C70(o, info->f60);
    return len;
}

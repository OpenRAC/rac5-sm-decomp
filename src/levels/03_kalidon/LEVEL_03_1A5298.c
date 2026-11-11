/* LEVEL_03:0x1A5298 -- picks a random point on a circle around a path node until it is far enough from the target, then stores it. */

struct V4_1A5298 {
    float x;
    float y;
    float z;
    float w;
};

struct Tgt1A5298 {
    char pad0[0x30];
    float f30;
    char pad34[4];
    float f38;
};

struct Node1A5298 {
    char pad0[4];
    struct V4_1A5298 *p04;
    char pad8[0xC];
    unsigned short h14;
};

struct Child1A5298 {
    char pad0[0x10];
    struct Tgt1A5298 *p10;
    float f14;
    float f18;
    char pad1C[0x24];
    struct Node1A5298 *p40;
};

struct Obj1A5298 {
    char pad0[0x54];
    struct Child1A5298 *p54;
};

extern float D_00230D68[4];
extern int rand(void);
extern float cosf(float x);
extern float sinf(float x);

static __inline__ void Copy4_1A5298(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
}

static __inline__ void Copy2_1A5298(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[2];
}

void func_1A5298(struct Obj1A5298 *o)
{
    struct Child1A5298 *c;
    struct V4_1A5298 *e;
    struct Tgt1A5298 *t;
    float v[4];
    float w[4];
    float angle;
    float dx;
    float dz;

    c = o->p54;
    for (;;) {
        Copy4_1A5298(v, D_00230D68);
        angle = (float)rand() * 4.656612873077393e-10f * 2.0f * 3.1415927410125732f;
        v[0] = cosf(angle);
        v[2] = 2.0f * sinf(angle);
        v[0] = 2.0f * v[0];
        e = (struct V4_1A5298 *)((c->p40->h14 << 4) + (int)c->p40->p04);
        e = e - 1;
        v[0] = v[0] + e->x;
        v[1] = v[1] + e->y;
        v[2] = v[2] + e->z;
        t = c->p10;
        dx = t->f30 - v[0];
        w[0] = dx;
        dz = t->f38 - v[2];
        w[2] = dz;
        if (dx * dx + dz * dz <= 5.0f) {
            continue;
        }
        Copy2_1A5298(&c->f14, v);
        return;
    }
}

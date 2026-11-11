/* LEVEL_02:0x1B77F0 -- drifts the object by its child's velocity for thirty frames, then steers it toward the target. */

typedef struct Target1B77F0 {
    char pad_00[0x30];
    float pos[3];
} Target1B77F0;

typedef struct Child1B77F0 {
    char pad_00[8];
    float f_08;
    float f_0C;
    char pad_10[0x40];
    Target1B77F0 *p_50;
    float vel[3];
    char pad_60[0x0B];
    unsigned char b_6B;
} Child1B77F0;

typedef struct Obj1B77F0 {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x18];
    Child1B77F0 *p_54;
} Obj1B77F0;

extern int D_0023D944;

extern float sqrtf(float x);

void func_013860(Obj1B77F0 *o, float *a, float *b, float *v, int *tbl);
int func_0833A0(Obj1B77F0 *o, int flag);
void func_082F58(Obj1B77F0 *o, int flag);

static inline void Add3(float *dst, float *src)
{
    dst[0] = dst[0] + src[0];
    dst[1] = dst[1] + src[1];
    dst[2] = dst[2] + src[2];
}

void func_1B77F0(Obj1B77F0 *o)
{
    float v[4];
    float len2;
    Child1B77F0 *c;
    Target1B77F0 *t;

    c = o->p_54;
    if (c->b_6B < 0x1E) {
        Add3(o->pos, c->vel);
        c->b_6B = c->b_6B + 1;
    }
    t = c->p_50;
    v[0] = o->pos[0] - t->pos[0];
    v[2] = o->pos[2] - t->pos[2];
    v[1] = 0.0f;
    v[3] = 1.0f;
    len2 = v[0] * v[0] + v[2] * v[2];
    if (!(len2 < 2.3841858e-07f)) {
        len2 = 1.0f / sqrtf(len2);
        v[0] = len2 * v[0];
        v[2] = len2 * v[2];
    }
    func_013860(o, &c->f_08, &c->f_0C, v, &D_0023D944);
    if (func_0833A0(o, 0)) {
        func_082F58(o, 1);
    }
}

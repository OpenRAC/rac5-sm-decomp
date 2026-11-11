/* LEVEL_02:0x16F3B8 -- spawns a rising spark: random upward-biased velocity, nudges the owner, derives a perpendicular drift from the world axis and arms the owner. */
typedef struct Spark {
    float v[3];
    float w;
    float side[3];
    float jitter;
} Spark;

typedef struct Obj {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[9];
    unsigned char state;
    char pad_46[0x0E];
    Spark *spark;
} Obj;

extern float D_0022CE08[3];

extern int rand(void);
extern float sqrtf(float x);
extern void func_117948(float *pos, float *w);

static __inline__ float RandRange(float lo, float hi)
{
    float range = hi - lo;

    return lo + range * ((float)rand() * (1.0f / 2147483648.0f));
}

static __inline__ void Cross3(float *out, float *a, float *b)
{
    out[0] = a[1] * b[2] - a[2] * b[1];
    out[1] = a[2] * b[0] - a[0] * b[2];
    out[2] = a[0] * b[1] - a[1] * b[0];
}

void func_16F3B8(Obj *o)
{
    Spark *s;
    float n[3];
    float len;

    s = o->spark;
    s->v[1] = RandRange(2.0f, 5.0f);
    s->v[0] = RandRange(-0.5f, 0.5f);
    s->v[2] = RandRange(-0.5f, 0.5f);
    o->pos[1] = o->pos[1] + 1.0f;
    o->pos[0] = o->pos[0] + s->v[0] * 0.5f;
    o->pos[2] = o->pos[2] + s->v[2] * 0.5f;
    func_117948(o->pos, &s->w);
    s->w = s->w - 0.2f;
    len = 1.0f / sqrtf(s->v[0] * s->v[0] + s->v[1] * s->v[1] + s->v[2] * s->v[2]);
    n[0] = len * s->v[0];
    n[1] = len * s->v[1];
    n[2] = len * s->v[2];
    Cross3(s->side, D_0022CE08, n);
    s->jitter = RandRange(0.04f, 0.09000001f);
    o->state = 1;
}

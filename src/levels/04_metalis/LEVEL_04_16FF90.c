/* LEVEL_04:0x16FF90 -- sets an object's heading from a random-perturbed cross product. */
typedef struct {
    float v[3];
    float len;
    int i10;
    int i14;
    int i18;
} Heading;

typedef struct {
    char pad0[0x30];
    float pos[3];
    char pad3C[0x9];
    char b45;
    char pad46[0x12];
    Heading *h;
} Obj;

extern float D_00231808[3];
extern float D_002396F0;
extern int rand(void);
extern float sqrtf(float);

static __inline__ void Sub3(float *out, float *a, float *b)
{
    out[0] = a[0] - b[0];
    out[1] = a[1] - b[1];
    out[2] = a[2] - b[2];
}

static __inline__ void Cross3(float *out, float *a, float *b)
{
    out[0] = a[1] * b[2] - a[2] * b[1];
    out[1] = a[2] * b[0] - a[0] * b[2];
    out[2] = a[0] * b[1] - a[1] * b[0];
}

void func_16FF90(Obj *a, Obj *b, int c)
{
    Heading *h = a->h;
    float d[3];
    float cr[3];
    float *dv = D_00231808;
    float len2;
    float jitter;
    float inv;
    float len;
    float base;
    float range;

    a->b45 = 3;
    h->i18 = c;
    h->i14 = (int)b;
    h->v[0] = 0.10000001f * dv[0];
    range = 0.0f;
    h->v[1] = 0.10000001f * dv[1];
    h->v[2] = dv[2] * 0.10000001f;
    base = D_002396F0;
    Sub3(d, b->pos, a->pos);
    Cross3(cr, dv, d);
    jitter = (float)rand() * 0x1p-31f * range + base;
    h->v[0] = h->v[0] + cr[0] * jitter;
    h->v[1] = h->v[1] + cr[1] * jitter;
    h->v[2] = h->v[2] + cr[2] * jitter;
    len2 = h->v[0] * h->v[0] + h->v[1] * h->v[1] + h->v[2] * h->v[2];
    if (len2 < 0x1p-22f) {
        len = 0.0f;
    } else {
        float s = sqrtf(len2);

        inv = 1.0f / s;
        len = s;
        h->v[0] = h->v[0] * inv;
        h->v[1] = h->v[1] * inv;
        h->v[2] = h->v[2] * inv;
    }
    h->len = len;
}

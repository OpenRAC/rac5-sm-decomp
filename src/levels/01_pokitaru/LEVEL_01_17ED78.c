/* LEVEL_01:0x17ED78 -- accumulates a fractional spawn counter and emits that many randomly oriented requests. */
extern float fabsf(float x);
extern int rand(void);

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad0[0x80];
    Vec3 pos;
    char pad1[0xBC];
    float acc;
} Obj;

extern char D_00396B10[];
extern void func_121A28(Vec3 *out, Vec3 *pos, float a, float b);
extern void func_1D3CB0(char *g, void *arg, Vec3 *v);

static inline float Step(float x)
{
    int hi;

    hi = (int)(x * 7.826379260222893e-06f);
    return fabsf((x - (float)hi * 127773.0f) * 16807.0f - (float)hi * 2836.0f);
}

void func_17ED78(Obj *o, void *arg)
{
    Vec3 v;
    float t;
    float x;
    float y;
    int n;

    t = o->acc + 5.0f;
    n = (int)t;
    o->acc = t;
    if (n) {
        o->acc = t - (float)n;
        for (x = (float)rand();; x = Step(y)) {
            y = Step(x);
            func_121A28(&v, &o->pos, x * 4.656612873077393e-10f * 0.1f + -0.05f, y * 2.925836239953128e-09f - 3.1415927f);
            func_1D3CB0(D_00396B10, arg, &v);
            if (!--n)
                break;
        }
    }
}

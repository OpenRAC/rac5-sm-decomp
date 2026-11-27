/* LEVEL_17:0x14E9D8 -- integrates a damped angular term over a number of fixed sub-steps. */
typedef struct {
    char pad0[0x2C];
    float angle;
    float rate;
} State;

typedef struct {
    char pad0[0x58];
    State *st;
} Obj;

extern float D_0018E324;
extern float D_001C6CF8[3];
extern void func_102F00(float *buf, float v);
extern void func_103708(Obj *a, Obj *b, float *buf);

static __inline__ int *MinPtr(int *a, int *b)
{
    return (*a < *b) ? a : b;
}

void func_14E9D8(Obj *o, float dt)
{
    State *st = o->st;
    float buf[12];
    int n, two;
    int count, i;
    float *a;
    float *r;
    float v;
    float k0, k1, k2;
    float t;

    func_102F00(buf, st->angle * dt);
    func_103708(o, o, buf);
    k0 = D_001C6CF8[0];
    k1 = D_001C6CF8[1];
    k2 = D_001C6CF8[2];
    n = (int)(D_0018E324 * 59.998802185058594f);
    two = 2;
    count = *MinPtr(&n, &two);
    a = &st->angle;
    r = &st->rate;
    t = 4.71238899230957f;
    for (i = 0; i < count; i++) {
        v = (t - *a) * k0 - *r * k1;
        *r = v;
        if (k2 < v)
            *r = k2;
        else if (v < -k2)
            *r = -k2;
        *a += *r;
    }
}

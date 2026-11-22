/* LEVEL_17:0x02E268 -- tests an actor against a target: asks the helper for a reach result, passes the normalised offset on when it returns zero, and for result 2 reports whether the actor stands near the saved position. */
typedef struct {
    char pad_00[0x30];
    float pos[4];
} Obj;

typedef struct {
    char pad_00[8];
    float a8[1];
    float aC[2];
} Rec;

extern float sqrtf(float x);

extern int func_02D698(float amount, Rec *r, Obj *o, void *c, unsigned long flags);
extern void func_013200(Obj *o, float *a, float *b, float *d, float *e);

static __inline__ void vsub(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

int func_02E268(Rec *r, Obj *o, void *c, Obj *t, void *e)
{
    float q[4];
    float d[3];
    float len2;
    float inv;
    float dx;
    float dz;
    int res;

    Copy4(q, o->pos);
    res = func_02D698(0.2f, r, o, c, (unsigned long)e);
    if (res == 0) {
        vsub(d, t->pos, o->pos);
        len2 = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
        if (!(len2 < 2.384185791015625e-07f)) {
            inv = 1.0f / sqrtf(len2);
            d[0] = d[0] * inv;
            d[1] = d[1] * inv;
            d[2] = d[2] * inv;
        }
        func_013200(o, r->a8, r->aC, d, (float *)((char *)c + 0xC));
        return 0;
    }
    if (res == 2) {
        dx = q[0] - o->pos[0];
        dz = q[2] - o->pos[2];
        if (dx * dx + dz * dz <= 0.09f) {
            return 1;
        }
    }
    return 0;
}

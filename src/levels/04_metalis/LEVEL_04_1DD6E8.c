/* LEVEL_04:0x1DD6E8 -- sweeps along a normalized segment; on a hit reports the point and surface normal. */
typedef struct VT {
    char pad[0xC];
    void (*fn)(void *self, int flag);
} VT;

typedef struct Holder {
    void *self;
} Holder;

typedef struct Obj {
    char pad[0x58];
    Holder *holder;
} Obj;

extern float sqrtf(float x);
extern int func_020960(float len, float *t, float *n, float *from, float *d, int a, int b, int c);

int func_1DD6E8(Obj *o, float *hit, float *nrm, float *from, float *to)
{
    float d[3];
    struct {
        float n[4];
        float p[4];
        float t;
    } hr;
    float len;
    float inv;
    float r0;
    Holder *h = o->holder;
    VT *vt = **(VT ***)((char *)h->self + 0x58);
    int r;

    d[0] = to[0] - from[0];
    d[1] = to[1] - from[1];
    d[2] = to[2] - from[2];
    if (d[0] * d[0] + d[1] * d[1] + d[2] * d[2] < 2.384185791015625e-07f) {
        len = 0.0f;
    } else {
        r0 = sqrtf(d[0] * d[0] + d[1] * d[1] + d[2] * d[2]);
        inv = 1.0f / r0;
        len = r0;
        d[0] *= inv;
        d[1] *= inv;
        d[2] *= inv;
    }
    vt->fn(h->self, 0);
    r = func_020960(len, &hr.t, hr.n, from, d, 0x78, 0, 0);
    if (r) {
        hit[0] = from[0] + d[0] * hr.t;
        hit[1] = from[1] + d[1] * hr.t;
        hit[2] = from[2] + d[2] * hr.t;
        vt->fn(h->self, 1);
        nrm[0] = hr.n[0];
        nrm[1] = hr.n[1];
        nrm[2] = hr.n[2];
    }
    return r;
}

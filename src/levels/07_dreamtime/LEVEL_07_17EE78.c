/* LEVEL_07:0x17EE78 -- builds an orthonormal frame from an object's basis and the sway of its controller, then applies it. */
extern float sinf(float x);
extern float sqrtf(float x);

typedef struct Ctl {
    char pad0[0x20];
    float p[3];
    float amp[3];
    char pad38[0xC];
    float ph[3];
} Ctl;

typedef struct Aux {
    char pad0[0x30];
    float pos[3];
} Aux;

typedef struct Obj {
    float x[4];
    float y[4];
    float z[4];
    float pos[4];
    char pad40[0x14];
    Ctl *ctl;
    Aux *aux;
} Obj;

extern void func_128E80(float *dst, float *m, float *v);

static __inline__ void nrm(float *out, float *v)
{
    float inv;

    inv = 1.0f / sqrtf(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
    out[0] = inv * v[0];
    out[1] = inv * v[1];
    out[2] = inv * v[2];
}

void func_17EE78(Obj *o)
{
    float a[4];
    float m[16];
    Ctl *c;
    Aux *x;
    float *pp;

    c = o->ctl;
    x = o->aux;
    a[0] = c->amp[0] * sinf(c->ph[0]);
    a[1] = c->amp[1] * sinf(c->ph[1]);
    a[2] = c->amp[2] * sinf(c->ph[2]);
    pp = c->p;
    a[0] += pp[0];
    a[1] += pp[1];
    a[2] += pp[2];
    nrm(m + 8, o->z);
    nrm(m, o->x);
    nrm(m + 4, o->y);
    pp = x->pos;
    m[12] = pp[0];
    m[13] = pp[1];
    m[14] = pp[2];
    func_128E80(o->pos, m, a);
}

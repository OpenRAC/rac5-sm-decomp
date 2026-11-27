/* LEVEL_01:0x19B480 -- integrates a falling body's velocity and runs its landing checks. */
typedef struct Phys {
    float vel[3];
} Phys;

typedef struct Obj {
    char pad0[0x30];
    float pos[3];
    char pad3C[0x18];
    Phys *phys;
} Obj;

extern int func_1DB678(Obj *o);
extern int func_19C590(Obj *o, unsigned char *out);
extern void func_19BFF0(Obj *o, void *p);
extern int func_19C6E0(void *record);
extern char D_00235140[];

static __inline__ void scale3(float *out, float *in, float k)
{
    out[0] = in[0] * k;
    out[1] = in[1] * k;
    out[2] = in[2] * k;
}

static __inline__ void add3(float *a, float *b)
{
    a[0] = a[0] + b[0];
    a[1] = a[1] + b[1];
    a[2] = a[2] + b[2];
}

static __inline__ float *MinF(float *a, float *b)
{
    return (*b < *a) ? b : a;
}

void func_19B480(Obj *o)
{
    float d[3];
    unsigned char kind;
    float limit;
    float *pv;
    Phys *p;

    p = o->phys;
    scale3(d, p->vel, 0.03333333507180214f);
    add3(o->pos, d);
    pv = &p->vel[1];
    *pv = *pv + -0.3266666829586029f;
    limit = 10.0f;
    *pv = *MinF(&limit, pv);
    if (func_1DB678(o) == 0) {
        if (func_19C590(o, &kind) != 0) {
            if (kind == 3) {
                func_19BFF0(o, D_00235140);
            }
            *((unsigned char *)o + 0x45) = kind;
        }
        func_19C6E0(o);
    }
}

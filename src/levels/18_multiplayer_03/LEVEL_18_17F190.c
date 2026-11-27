/* LEVEL_18:0x17F190 -- placement copy of LEVEL_16_17EB58.c: moves the object by its velocity for the frame time, applies gravity to the velocity, then probes the world: a hit stores its result byte as the object's state, a miss runs the fall-through handler; an early out hands the object to func_06F008 instead. */
typedef struct {
    char pad00[8];
    float vel[3];
    float gravity;
} Aux;

typedef struct {
    char pad00[0x30];
    float pos[3];
    float f3C_unused;
    char pad40[0x45 - 0x40];
    unsigned char state;
    char pad46[0x58 - 0x46];
    Aux *aux;
} Obj;

extern int func_014D70(int a, float f);
extern void func_06F008(Obj *o);
extern int func_18F300(Obj *o);
extern int func_17FA80(Obj *o, int *out);
extern int func_17FB60(Obj *o);

static __inline__ void Scale3(float *out, float *in, float s)
{
    out[0] = s * in[0];
    out[1] = s * in[1];
    out[2] = s * in[2];
}

static __inline__ void Add3(float *p, float *v)
{
    p[0] = p[0] + v[0];
    p[1] = p[1] + v[1];
    p[2] = p[2] + v[2];
}

void func_17F190(Obj *o, float dt)
{
    float d[3];
    int out;
    Aux *a = o->aux;

    if (func_014D70(0, *(float *)((char *)o + 0x34)) != 0) {
        ((void (*)(Obj *o, int a))func_06F008)(o, 1);
        return;
    }
    Scale3(d, a->vel, dt);
    Add3(o->pos, d);
    a->vel[1] = a->vel[1] + dt * -9.800000190734863f;
    if (func_18F300(o) == 0) {
        if (func_17FA80(o, &out) != 0) {
            o->state = out;
        } else {
            func_17FB60(o);
        }
    }
}

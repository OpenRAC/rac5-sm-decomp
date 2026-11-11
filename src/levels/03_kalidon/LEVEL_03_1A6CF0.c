/* LEVEL_03:0x1A6CF0 -- advances the timer at +0x70; once it reaches 2.5 it switches state, otherwise it scales the two vectors of the object and the float behind its pointer by a shared factor and steps the object. */
typedef struct {
    float v0[3];
    char pad0C[0x20 - 0x0C];
    float v20[3];
    char pad2C[0x54 - 0x2C];
    float *p54;
    char pad58[0x70 - 0x58];
    float t70;
} Obj;

extern float D_003B2050;

extern void func_07C468(Obj *o, int state);
extern void func_1A6DA8(Obj *o);

static __inline__ void Scale3(float *v, float s)
{
    v[0] = v[0] * s;
    v[1] = v[1] * s;
    v[2] = v[2] * s;
}

void func_1A6CF0(Obj *o, float dt)
{
    float *p;
    float s;

    p = o->p54;
    o->t70 += dt;
    if (o->t70 >= 2.5f) {
        func_07C468(o, 1);
        return;
    }
    s = D_003B2050;
    Scale3(o->v20, s);
    Scale3(o->v0, s);
    *p = *p * s;
    func_1A6DA8(o);
}

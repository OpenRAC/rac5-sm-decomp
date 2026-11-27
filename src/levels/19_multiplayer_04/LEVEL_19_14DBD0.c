/* LEVEL_19:0x14DBD0 -- placement copy of LEVEL_16_150CF8.c: steps a damped spring on an object's angle, several times per frame. */
typedef struct Ext { char pad0[0x20]; float ang; float vel; } Ext;
typedef struct Obj { char pad0[0x58]; Ext *ext; } Obj;
typedef struct Spring { float k; float damp; float limit; } Spring;
extern Spring D_001D4C18;
extern float D_0019BEA4;
extern void func_103828(float *out, float a);
extern void func_104808(Obj *a, Obj *b, float *m);

void func_14DBD0(Obj *o, float dt)
{
    float m[12];
    int a;
    int two;
    int *q;
    int n;
    Ext *e;
    float x;
    float k, damp, limit;
    float *pa;
    float *pv;
    float target;
    e = o->ext;
    func_103828(m, e->ang * dt);
    func_104808(o, o, m);
    target = 4.712389f;
    two = 2;
    a = (int)(D_0019BEA4 * 59.998802f);
    q = &a;
    if (!(a < two))
        q = &two;
    n = *q;
    k = D_001D4C18.k;
    damp = D_001D4C18.damp;
    limit = D_001D4C18.limit;
    pa = &e->ang;
    pv = &e->vel;
    if (n > 0) {
        do {
            x = (target - *pa) * k - *pv * damp;
            *pv = x;
            if (limit < x) {
                *pv = limit;
            } else if (x < -limit) {
                *pv = -limit;
            }
            *pa = *pa + *pv;
            n--;
        } while (n != 0);
    }
}

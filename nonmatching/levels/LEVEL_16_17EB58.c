/* USA LEVEL_16.REL:0x17EB58 (21 November 2026): exact linked bytes under gnu-
 * ee-trial, held.
 * Its form stays out of the accepted set because a placement declares
 * func_17F528 unlike its accepted definition; and declares func_18DE60 unlike
 * its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
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

extern int func_015558(int a, float f);
extern void func_06F940(Obj *o, int a);
extern int func_18DE60(void);
extern int func_17F448(Obj *o, int *out);
extern void func_17F528(Obj *o);

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

void func_17EB58(Obj *o, float dt)
{
    float d[3];
    int out;
    Aux *a = o->aux;

    if (func_015558(0, *(float *)((char *)o + 0x34)) != 0) {
        func_06F940(o, 1);
        return;
    }
    Scale3(d, a->vel, dt);
    Add3(o->pos, d);
    a->vel[1] = a->vel[1] + dt * -9.800000190734863f;
    if (func_18DE60() == 0) {
        if (func_17F448(o, &out) != 0) {
            o->state = out;
        } else {
            func_17F528(o);
        }
    }
}

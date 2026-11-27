/* USA LEVEL_16:17EB58, 256-byte candidate; measured 26 November 2026.
 * Profile gnu-ee-trial, assembler gnu-ee-trial; options: default.
 * Byte-exact in an isolated link; local declarations still conflict with accepted definitions or
 * callers. No matching credit.
 * Remaining issue: prototypes now agree with the accepted definitions: func_18DE60(Obj *o) takes
 * the object (a0 still holds o at the call; retail passes it) and func_17F528 returns int;
 * func_17F448(Obj *, int *) and func_015558(int, float) as in accepted callers
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_16:0x17EB58 -- moves the object by its velocity for the frame time, applies gravity to the velocity, then probes the world: a hit stores its result byte as the object's state, a miss runs the fall-through handler; an early out hands the object to func_06F940 instead. */
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
extern int func_18DE60(Obj *o);
extern int func_17F448(Obj *o, int *out);
extern int func_17F528(Obj *o);

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
    if (func_18DE60(o) == 0) {
        if (func_17F448(o, &out) != 0) {
            o->state = out;
        } else {
            func_17F528(o);
        }
    }
}

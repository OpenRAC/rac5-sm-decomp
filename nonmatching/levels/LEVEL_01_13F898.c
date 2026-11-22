/* USA LEVEL_01.REL:0x13F898, 272-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 15 differing words; first difference at 0xD4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float atan2f(float, float);
extern float sqrtf(float);

typedef struct {
    char pad00[0x30];
    float pos[3];
} Parent;

typedef struct {
    Parent *parent;
    char pad04[0xC];
    float from[3];
    char pad1C[0xC];
    float angle;
    float len;
    float pos[3];
} Obj;

static __inline__ void Sub3(float *r, float *a, float *b)
{
    r[0] = a[0] - b[0];
    r[1] = a[1] - b[1];
    r[2] = a[2] - b[2];
}

static __inline__ void Double3(float *v)
{
    v[0] = v[0] + v[0];
    v[1] = v[1] + v[1];
    v[2] = v[2] + v[2];
}

void func_13F898(Obj *o, float *v, float f)
{
    float d[3];
    float *q;

    Sub3(d, v, o->parent->pos);
    Sub3(o->pos, o->from, o->parent->pos);
    Double3(o->pos);
    q = &o->angle;
    q[0] = atan2f(f, 0.5f);
    q[1] = sqrtf(f * f + 0.25f);
}

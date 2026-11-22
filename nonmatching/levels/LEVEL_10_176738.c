/* USA LEVEL_10.REL:0x176738, 236-byte candidate (21 November 2026).
 * Measured pinned: 8 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float x, y, z;
} V3;

typedef struct {
    int w[7];
} Params;

typedef struct {
    char pad00[4];
    float f04;
} Owner;

typedef struct {
    char pad00[0x10];
    V3 vec;
} Source;

typedef struct {
    Source *src;
    char pad04[0xA4 - 0x04];
    Params params;
    V3 vec;
} Obj;

extern Params D_0039F220;

extern void func_1730A0(Obj *o, int length, float a, float b);

static __inline__ void AddScaled(V3 *d, V3 *s, float k)
{
    d->x = d->x + s->x * k;
    d->y = d->y + s->y * k;
    d->z = d->z + s->z * k;
}

void func_176738(Owner *owner, Obj *o)
{
    func_1730A0(o, 8, 0.0f, 0.15000000596046448f);
    o->params = D_0039F220;
    owner->f04 = 0.10000000149011612f;
    AddScaled(&o->vec, &o->src->vec, 0.6000000238418579f);
}

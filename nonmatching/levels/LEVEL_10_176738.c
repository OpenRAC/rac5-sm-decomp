/* USA LEVEL_10:176738, 236-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 236 bytes: 8 differing words; first difference +0x0. No matching credit.
 * Remaining issue: The unused frame array or unrelated pointer-type reuse was removed. Recover
 * the original frame ownership or aliasing from caller and field evidence before retrying.
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_10:0x176738 -- starts the object's effect with length 8, fills its 28-byte parameter block from a shared default, sets a scale of 0.1 on the owner and nudges the object's vector by 0.6 of the vector in its source record. */
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

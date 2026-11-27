/* USA LEVEL_01:141690, 184-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 184 bytes: 2 differing words; first difference +0x64. No matching credit.
 * Remaining issue: load order: two AddScaled helpers (second group exact) with the first helper
 * z written d[2] * k + a[2] leaves only the d.z/a.z load order at +0x64/+0x68 (retail loads d.z
 * into f0 first); was 19 words; 128-form grid over the first helper and Scale3 plus 9 routes
 * stay at 2
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x141690 -- spreads the object's scaled extent around its position into the two end points of the linked segment. */
typedef struct { float x; float y; float z; } Vec3;
typedef struct { char pad00[0x0C]; Vec3 a; char pad18[8]; Vec3 b; } Seg;
typedef struct { Seg *seg; } Link;
typedef struct { char pad00[0x20]; Vec3 half; char pad2C[4]; Vec3 pos; char pad3C[0x1C]; Link *link; } Obj;

static __inline__ void Scale3(float *out, float *in, float k)
{
    out[0] = in[0] * k;
    out[1] = in[1] * k;
    out[2] = in[2] * k;
}

static __inline__ void AddScaled(float *out, float *a, float *d, float k)
{
    out[0] = a[0] + d[0] * k;
    out[1] = a[1] + d[1] * k;
    out[2] = d[2] * k + a[2];
}

static __inline__ void AddScaled2(float *out, float *a, float *d, float k)
{
    out[0] = a[0] + d[0] * k;
    out[1] = a[1] + d[1] * k;
    out[2] = a[2] + d[2] * k;
}

void func_141690(Obj *o)
{
    Vec3 d;
    Seg *s = o->link->seg;

    Scale3(&d.x, &o->half.x, 0.375f);
    AddScaled(&s->a.x, &o->pos.x, &d.x, 1.0f);
    AddScaled2(&s->b.x, &o->pos.x, &d.x, -1.0f);
}

/* USA LEVEL_01:11E5D0, 232-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 232 bytes: 15 differing words; first difference +0x60. No matching credit.
 * Remaining issue: FP register allocation only (x in f2/y in f1, retail x f1/y f2; b0*v1 and
 * c0*v2 temps swapped); the old prologue-order wall was an arity bug: accepted func_11E140(float
 * *, Vec3 *, float *, float *, float *) gets (v, offset, a, b, c) with a1-t0 passed straight
 * through (23->15 words); all 36 compute/store orders, struct types, column-wise and helper
 * forms, full flag sweep tried
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_01:0x11E5D0 -- runs the geometry query into a local weight vector and, when its result is below the limit, writes the weighted sum of three float triples. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern float func_11E140(float *a, Vec3 *offset, float *b, float *c, float *d);

int func_11E5D0(float *out, Vec3 *offset, float *a, float *b, float *c, float limit)
{
    float v[3];
    float x, y, z;

    if (func_11E140(v, offset, a, b, c) < limit) {
        x = a[0] * v[0] + b[0] * v[1] + c[0] * v[2];
        y = a[1] * v[0] + b[1] * v[1] + c[1] * v[2];
        z = a[2] * v[0] + b[2] * v[1] + c[2] * v[2];
        out[2] = z;
        out[0] = x;
        out[1] = y;
        return 1;
    }
    return 0;
}

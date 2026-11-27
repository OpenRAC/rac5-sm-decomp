/* USA LEVEL_04:1D7B90, 232-byte candidate; measured 26 November 2026.
 * Profile gnu-ee-trial-divpad, assembler gnu-ee-trial; options: default.
 * Compiled 232 bytes: 2 differing words; first difference +0x70. No matching credit.
 * Remaining issue: if (!(l2 < eps)) { len = sqrtf(l2); l2 = 1.0f / len; ...; s->k = len; } else
 * s->k = 0.0f; gives retail bc1tl layout, inv in f12 and sqrt into the len register; only the
 * else store differs: ours sw $zero (constant folded into the store), retail mtc1 $zero,f2
 * before the branch + swc1 f2 in the delay slot; zero-before-test forms let sched1 hoist the
 * mtc1 to the top and split len from the sqrt temp; inline SetK(s, 0.0f) still folds
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_04:0x1D7B90 -- integrates a 2D velocity and renormalizes it, storing the speed. */
struct S { float p0; float k; float v[2]; };
extern float sqrtf(float v);

void func_1D7B90(char *obj, int unused, float *d)
{
    struct S *s;
    float l2;
    float len;
    float inv;
    float *v;

    s = *(struct S **)(obj + 0x58);
    v = s->v;
    v[0] *= s->k;
    v[1] *= s->k;
    v[0] += d[0];
    v[1] += d[1];
    l2 = v[0] * v[0] + v[1] * v[1];
    if (!(l2 < 2.3841858e-07f)) {
        len = sqrtf(l2);
        l2 = 1.0f / len;
        v[0] = l2 * v[0];
        v[1] = l2 * v[1];
        s->k = len;
    } else {
        s->k = 0.0f;
    }
}

/* USA LEVEL_15:10D358, 232-byte candidate; measured 26 November 2026.
 * Profile gnu-ee-trial-divpad, assembler gnu-ee-trial; options: default.
 * Compiled 232 bytes: 8 differing words; first difference +0xB4. No matching credit.
 * Remaining issue: FP scheduling in the normalise: inline Sub3(&v, t, &o->pos) gives the retail
 * per-component difference (27 -> 8 words); left: the v.z stack load is hoisted above the dir
 * stores (stack vs parameter = no alias), retail reloads it after them into f2;
 * Scale3/array/pointer forms measured; LEVEL_21:10D358 same result
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_15:0x10D358 -- stores the unit direction from the object's position to a target point. */
struct V3 {
    float x, y, z;
};
struct Obj {
    char pad0[0xC0];
    struct V3 pos;
    char pad1[0x224 - 0xCC];
    struct V3 dir;
};
extern float sqrtf(float x);

static __inline__ void Sub3(struct V3 *d, struct V3 *a, struct V3 *b)
{
    d->x = a->x - b->x;
    d->y = a->y - b->y;
    d->z = a->z - b->z;
}

void func_10D358(struct Obj *o, struct V3 *t)
{
    struct V3 v;
    struct V3 *d = &o->dir;
    float d2;
    float inv;

    Sub3(&v, t, &o->pos);
    d2 = v.x * v.x + v.y * v.y + v.z * v.z;
    if (d2 < 2.384185791015625e-07f)
        return;
    inv = 1.0f / sqrtf(d2);
    o->dir.x = inv * v.x;
    d->y = inv * v.y;
    d->z = inv * v.z;
}

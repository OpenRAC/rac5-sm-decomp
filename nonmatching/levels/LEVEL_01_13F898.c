/* USA LEVEL_01:13F898, 272-byte candidate; measured 26 November 2026.
 * Profile gnu-ee-trial, assembler ee-frozen; options: default.
 * Compiled 272 bytes: 3 differing words; first difference +0xCC. No matching credit.
 * Remaining issue: single nop before the inline sqrt.s: retail mtc1/swc1/add.s/nop/sqrt.s; ee-
 * frozen puts its nop after the mtc1 (3 words), pinned/gnu-ee-trial/r5900-mfc1 emit none (268 B,
 * 15 words), divpad emits two (276 B), ps2eeas 272 B/15 words; swept 6 profiles x 4 assemblers;
 * same single-pad wall class as div.s
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_01:0x13F898 -- recomputes relative offsets to a target and derives an angle and a length. */
struct V3 {
    float x;
    float y;
    float z;
};
struct T {
    char pad[0x30];
    struct V3 pos;
};
struct AL {
    float ang;
    float len;
};
struct O {
    struct T *t;
    char pad4[0xC];
    struct V3 a;
    char pad1c[0xC];
    struct AL al;
    struct V3 pos;
};
extern float atan2f(float y, float x);
extern float sqrtf(float x);

void func_13F898(struct O *o, struct V3 *p, float k)
{
    struct V3 d;
    struct T *t = o->t;
    struct V3 *tp = &t->pos;
    struct V3 *ap = &o->a;
    struct V3 *op = &o->pos;
    struct AL *al = &o->al;
    d.x = p->x - tp->x;
    d.y = p->y - tp->y;
    d.z = p->z - tp->z;
    op->x = ap->x - tp->x;
    op->y = ap->y - tp->y;
    op->z = ap->z - tp->z;
    op->x = op->x + op->x;
    op->y = op->y + op->y;
    op->z = op->z + op->z;
    al->ang = atan2f(k, 0.5f);
    al->len = sqrtf(k * k + 0.25f);
}

/* USA LEVEL_18:0485C8, 252-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 244 bytes: 51 differing words; first difference +0x20. No matching credit.
 * Remaining issue: callee arity fixed (retail passes dir, dir + 0x10, dir + 0x20 in a3/t0/t1
 * plus 0.4f and the squared length; result masked andi 0xFF) and the segment built in retail
 * store order; still 244 vs 252 B: retail keeps a second s[0].y store and reloads d.z from the
 * stack after the acc stores (stack/parameter treated as aliasing), ours drops both; 12 forms
 * measured
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_18:0x0485C8 -- builds a probe segment at the object's position raised by 0.75 and asks func_0FC128 whether the swept move along the given direction set is free; when it is, adds the probe's correction to the object's accumulated offset. */
typedef struct {
    float x, y, z;
    float w;
} Vec4;

typedef struct {
    char pad00[0x30];
    Vec4 pos;
    char pad40[0xAA4 - 0x40];
    Vec4 acc;
} Obj;

extern int func_0FC128(Vec4 *seg, int a, int b, Vec4 *d0, Vec4 *d1, Vec4 *d2, float f, float len2);

void func_0485C8(Obj *o, int a, int b, Vec4 *dir)
{
    Vec4 s[2];
    Vec4 d;
    Vec4 *p;
    Vec4 *q;
    unsigned char hit;
    float len2;

    len2 = dir->z * dir->z + (dir->x * dir->x + dir->y * dir->y);
    p = &o->pos;
    s[0].x = o->pos.x;
    s[0].y = p->y;
    s[1].x = s[0].x;
    s[1].y = s[0].y + 0.75f;
    s[1].z = p->z;
    s[0].z = s[1].z;
    s[0].y = s[1].y;
    hit = func_0FC128(s, a, b, dir, dir + 1, dir + 2, 0.4000000059604645f, len2);
    if (hit) {
        d.x = s[0].x - s[1].x;
        d.y = s[0].y - s[1].y;
        d.z = s[0].z - s[1].z;
        q = &o->acc;
        o->acc.x = o->acc.x + d.x;
        q->y = q->y + d.y;
        q->z = q->z + d.z;
    }
}

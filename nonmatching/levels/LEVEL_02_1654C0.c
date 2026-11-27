/* USA LEVEL_02:1654C0, 188-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 192 bytes: 10 differing words; first difference +0x60. No matching credit.
 * Remaining issue: branch layout of the four constant returns: an inline unsigned char result
 * helper stops the store-flag fold (draft returned near / near^1, 168 B) and everything up to
 * +0x60 matches; retail shares one v0 = 0 / jr ra tail between both arms (cross-jump, delay-slot
 * v0 = 0 and v0 = 1), ours keeps a separate return (192 vs 188 B); 18 arm/polarity combinations
 * tried
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_02:0x1654C0 -- compares squared distance to a fixed point with a threshold, flipped by two flags. */
struct Ref {
    char pad[6];
    unsigned char b6;
};

struct Ent {
    char pad[0x28];
    unsigned char b28;
};

struct Obj {
    char pad0[0x30];
    float fx;
    float fy;
    float fz;
    char pad1[9];
    unsigned char b45;
    char pad2[14];
    struct Ref *r54;
    struct Ent *r58;
};

extern struct Obj D_0024C650;
extern float D_003AAFE8;

static __inline__ float DistSq(float *a, float *b)
{
    float dx;
    float dy;
    float dz;

    dx = a[0] - b[0];
    dy = a[1] - b[1];
    dz = a[2] - b[2];
    return dx * dx + dy * dy + dz * dz;
}

static __inline__ unsigned char Result(int same, int near)
{
    if (same) {
        if (near != 0)
            return 1;
    } else {
        if (near == 0)
            return 1;
        return 0;
    }
    return 0;
}

int func_1654C0(struct Obj *p)
{
    struct Ref *r;
    struct Ent *e;
    struct Obj *q;
    float d;
    int near;
    int same;

    r = p->r54;
    e = p->r58;
    if (r->b6 != 0) {
        return 0;
    }
    q = &D_0024C650;
    d = DistSq(&q->fx, &p->fx);
    same = (p->b45 ^ e->b28) == 0;
    near = 1;
    if (!(d < D_003AAFE8)) {
        near = 0;
    }
    return Result(same, near);
}

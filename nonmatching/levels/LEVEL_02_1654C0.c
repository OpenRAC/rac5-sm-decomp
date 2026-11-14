/* USA LEVEL_02.REL:0x1654C0, 188-byte candidate (14 November 2026).
 * Measured pinned: 12 differing words; first difference at +0x60.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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
    if (same) {
        if (near == 0) {
            return 0;
        }
        return 1;
    }
    if (near == 0) {
        return 1;
    }
    return 0;
}

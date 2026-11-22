/* USA LEVEL_01.REL:0x1B9D08, 340-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad: 25 differing words; first difference at 0x34.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Entry {
    char pad0[0x18];
    unsigned char flags;
    char pad1[0x1C - 0x19];
} Entry;

typedef struct Owner {
    char pad0[0x58];
    Entry *entries;
} Owner;

typedef struct Vec4 {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct Path {
    char pad0[4];
    Vec4 *pts;
    char pad1[0x14 - 8];
    unsigned short n;
} Path;

typedef struct Ctl {
    char pad0[0x2C];
    Owner *owner;
    char pad1[0x38 - 0x30];
    Path *path;
} Ctl;

typedef struct Rec {
    char pad0[0x30];
    float px;
    float pz;
    float dx;
    float dz;
    char pad1[0x60 - 0x40];
    unsigned char which;
    char pad2[2];
    unsigned char state;
} Rec;

typedef struct Obj {
    char pad0[0x30];
    float pos[3];
    char pad1[0x54 - 0x3C];
    Ctl *ctl;
    Rec *rec;
} Obj;

extern float sqrtf(float x);
extern void func_014058(float a, float *pos, int b, int c);

void func_1B9D08(Obj *o)
{
    Ctl *c;
    Rec *r;
    Vec4 *p0;
    Vec4 *p1;
    float d[2];
    float l2;
    float len;
    float inv;
    float *q;

    c = o->ctl;
    r = o->rec;
    if (c->owner != 0) {
        c->owner->entries[r->which].flags |= 4;
    }
    func_014058(0.1f, o->pos, 0, 1);
    p1 = &c->path->pts[c->path->n - 1];
    p0 = &c->path->pts[c->path->n - 2];
    d[0] = p1->x - p0->x;
    d[1] = p1->z - p0->z;
    l2 = d[0] * d[0] + d[1] * d[1];
    if (!(l2 < 2.384185791015625e-07f)) {
        len = sqrtf(l2);
        inv = 1.0f / len;
        d[0] = inv * d[0];
        d[1] = inv * d[1];
    }
    q = &r->px;
    q[0] = p1->x;
    q[1] = p1->z;
    q[2] = d[0];
    q[3] = d[1];
    r->state = 0xF;
}

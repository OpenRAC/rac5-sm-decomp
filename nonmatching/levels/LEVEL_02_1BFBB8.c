/* USA LEVEL_02:1BFBB8, 252-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 252 bytes: 2 differing words; first difference +0x38. No matching credit.
 * Remaining issue: store order only: loads into temps x, y, z, bx, bz and stores a[2], a[0],
 * a[1], b[0], b[2] give every retail register (6->2 words, best of a 120-way store permutation);
 * retail stores a[0] before a[2], but every order that stores a[0] first moves the f0/f1 or
 * f3/f4 allocation (inline Set3 float-argument setter, direct a[0] copy placements, initialisers
 * tried)
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_02:0x1BFBB8 -- runs a path query with the entity's grid cell flagged as busy during the call. */
typedef struct Ent {
    char pad0[8];
    unsigned short flags;
    char padA[6];
} Ent;
typedef struct Cls {
    char pad0[0x64];
    Ent *ents;
} Cls;
typedef struct Id {
    unsigned short id;
    char pad2;
    unsigned char cls;
} Id;
typedef struct S {
    char pad0[0x44];
    Id idc;
} S;
typedef struct O {
    char pad0[0x58];
    S *s;
} O;
extern Cls D_00246BF8[];
extern int func_027530(float *a, float *b);

int func_1BFBB8(O *o, float *p, float *q)
{
    float a[3];
    float b[3];
    S *s;
    Id *t;
    int r;
    Ent *e;
    float x, y, z, bx, bz;

    x = p[0];
    y = p[1] + 0.5f;
    z = p[2];
    bx = q[0];
    bz = q[1];
    a[2] = z;
    a[0] = x;
    a[1] = y;
    b[0] = bx;
    b[2] = bz;
    b[1] = 0.0f;
    s = o->s;
    t = &s->idc;
    if (s->idc.id != 0xFFFF)
        e = D_00246BF8[t->cls].ents + s->idc.id, e->flags |= 8;
    r = func_027530(a, b);
    if (s->idc.id != 0xFFFF)
        e = D_00246BF8[t->cls].ents + s->idc.id, e->flags &= ~8;
    return r;
}

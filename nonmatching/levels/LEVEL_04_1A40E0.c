/* USA LEVEL_04.REL:0x1A40E0, 368-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 9 differing words; first difference at 0x84.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Mat {
    float m[16];
} Mat;

struct Rec58 {
    char pad00[8];
    float f08;
};

struct Obj {
    char pad00[0x30];
    float pos[3];
    char pad3C[0x1C];
    struct Rec58 *f58;
};

struct Tgt {
    char pad00[0x30];
    float x;
    float y;
    float z;
};

struct Slot {
    struct Tgt *t;
    int w04;
};

struct List {
    struct Slot slots[8];
    char pad40[4];
    unsigned char b44;
};

struct Other {
    char pad00[0x58];
    struct List *f58;
};

extern void func_132B08(Mat *a0, struct Obj *a1, int a2);
extern void func_12FCE8(struct Obj *matrix, float angle);
extern void func_1310E8(void *a, void *b, void *c);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_1A40E0(struct Obj *o, struct Other *other)
{
    Mat a;
    float saved[3];
    Mat b;
    struct Rec58 *r = o->f58;
    float *pp = o->pos;
    struct Tgt *t;
    float dx;
    float dz;
    unsigned int i;
    unsigned int n;

    func_132B08(&a, o, 0);
    a.m[3] = 0.0f;
    a.m[15] = 1.0f;
    a.m[7] = 0.0f;
    a.m[11] = 0.0f;
    r->f08 = r->f08 + 0.20943953f;
    Copy3(saved, pp);
    func_12FCE8(o, r->f08);
    Copy3(pp, saved);
    n = other->f58->b44;
    for (i = 0; i < n; i++) {
        t = other->f58->slots[i].t;
        dx = t->x - pp[0];
        dz = t->z - pp[2];
        if (dx * dx + dz * dz <= 0.64000005f) {
            func_1310E8(&b, t, &a);
            func_1310E8(t, &b, o);
        }
    }
}

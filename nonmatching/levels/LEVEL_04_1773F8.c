/* USA LEVEL_04.REL:0x1773F8, 580-byte candidate (22 November 2026).
 * Measured gnu-ee-trial-divpad --as: 1 differing words; first difference at
 * 0x244.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Actor Actor;

typedef struct {
    char pad00[0x24];
    int tag;
} Def;

typedef struct {
    char pad00[0x40];
    Def *def;
} Part;

typedef struct {
    Actor *act;
    int aux;
} Slot;

typedef struct {
    Slot slot[8];
    char pad40[4];
    unsigned char cnt;
} Group;

typedef struct {
    char pad00[0x58];
    Group *grp;
} Owner;

struct Actor {
    char pad00[0x20];
    Vec3 dir;
    char pad2C[4];
    Vec3 pos;
    char pad3C[0x0A];
    unsigned char kind;
    char pad47[0x0D];
    Owner **own;
    Part **part;
};

extern float sqrtf(float x);

static __inline__ void Sub2(float *d, Vec3 *a, Vec3 *b)
{
    d[0] = a->x - b->x;
    d[1] = a->z - b->z;
}

static __inline__ float Dot2(float *d, Vec3 *v)
{
    return d[0] * v->x + d[1] * v->z;
}

static __inline__ float Range(Actor *a)
{
    float r = 64.0f;

    if (a->kind == 4) {
        r = 144.0f;
    }
    return r;
}

Actor *func_1773F8(Actor *self)
{
    Owner *own;
    Actor *best;
    Actor *o;
    float d[2];
    float limit;
    float best_d;
    float best_c;
    float d2;
    float c;
    int found;
    int i;
    int n;

    best = 0;
    own = *self->own;
    n = own->grp->cnt;
    limit = Range(self);
    best_d = limit;
    found = 0;
    best_c = -1.1f;
    for (i = 0; i < n; i++) {
        o = own->grp->slot[i].act;
        if (o != 0 && o != self && *o->part != 0 && (*o->part)->def->tag == 0x66B80B74) {
            Sub2(d, &o->pos, &self->pos);
            d2 = d[0] * d[0] + d[1] * d[1];
            if (!(limit < d2)) {
                c = Dot2(d, &self->dir) / sqrtf(d2);
                if (found) {
                    if (c >= 0.70710677f && d2 < best_d) {
                        best_d = d2;
                        best = o;
                    }
                } else if (c >= 0.70710677f) {
                    best = o;
                    best_d = d2;
                    found = 1;
                } else if (c >= best_c) {
                    best = o;
                    best_c = c;
                }
            }
        }
    }
    return best;
}

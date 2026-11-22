/* USA LEVEL_01.REL:0x19CC90, 268-byte candidate (21 November 2026).
 * Measured pinned: 6 differing words; first difference at 0xC0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad00[4];
    Vec3 vel;
    float f10;
    char pad14[0xC];
    float f20;
} Rec;

typedef struct {
    char pad00[0x30];
    Vec3 pos;
    char pad3C[9];
    unsigned char state_45;
    char pad46[0xE];
    Rec *rec_54;
} Obj;

extern int func_1DB678(Obj *o);
extern void func_19CB30(Obj *o);

static __inline__ void Scale(Vec3 *out, Vec3 *in, float k)
{
    out->x = in->x * k;
    out->y = in->y * k;
    out->z = in->z * k;
}

static __inline__ void Add(Vec3 *a, Vec3 *b)
{
    a->x = a->x + b->x;
    a->y = a->y + b->y;
    a->z = a->z + b->z;
}

void func_19CC90(Obj *o)
{
    Vec3 v;
    Vec3 d;
    Rec *r;

    r = o->rec_54;
    Scale(&v, &r->vel, 0.033333335f);
    r->f10 = r->f10 - v.y;
    Add(&o->pos, &v);
    r->vel.y = r->vel.y + -0.3266666829586029f;
    if (func_1DB678(o) == 0) {
        if (r->f10 >= r->f20) {
            d.x = 0;
            d.y = r->f10 - r->f20;
            d.z = 0;
            o->pos.y = o->pos.y + d.y;
            o->state_45 = 2;
            func_19CB30(o);
        }
    }
}

/* USA LEVEL_17.REL:0x14DBD8, 88-byte candidate (14 November 2026).
 * Measured pinned: 19 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct { float x; float y; float z; } Vec3;
typedef struct { char pad00[0x30]; Vec3 pos; } Body;
typedef struct { Body *a; Body *b; } Links;
typedef struct { char pad00[0x30]; Vec3 pos; char pad3C[8]; unsigned char state; char pad45[0x13]; Links *links; } Obj;

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_14DBD8(Obj *o, Vec3 *out)
{
    Links *l = o->links;
    Vec3 *src;

    if (o->state == 1) {
        src = &l->a->pos;
    } else if (o->state == 3) {
        src = &l->b->pos;
    } else {
        src = &o->pos;
    }
    Copy3(&out->x, &src->x);
}

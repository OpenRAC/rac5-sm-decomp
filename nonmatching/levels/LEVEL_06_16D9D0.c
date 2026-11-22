/* USA LEVEL_06.REL:0x16D9D0, 228-byte candidate (21 November 2026).
 * Measured pinned: 19 differing words; first difference at 0x70.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct { float x, y, z; } Vec3;
typedef struct { char pad0[0x15A]; unsigned char flag; } Info;
typedef struct { char pad0[0x58]; Info *info; } Hdr;
typedef struct {
    char pad0[0x2C];
    Hdr *hdr;
    void *p30;
    float range;
    char pad1[0x48 - 0x38];
    void *p48;
    char pad2[0x50 - 0x4C];
    unsigned char b50;
} Tgt;
typedef struct { char pad0[0x30]; Vec3 pos; char pad1[0x18]; Tgt *tgt; } Obj;
extern void func_018B30(Vec3 *out);
extern int func_07D818(void *a, Vec3 *v);

static inline void sub3(Vec3 *r, Vec3 *a, Vec3 *b)
{
    r->x = a->x - b->x;
    r->y = a->y - b->y;
    r->z = a->z - b->z;
}

int func_16D9D0(Obj *o)
{
    Vec3 v;
    Vec3 d;
    Tgt *t;

    t = o->tgt;
    func_018B30(&v);
    if (t->p48 && func_07D818(t->p48, &v))
        return 1;
    if (t->b50 && !t->hdr->info->flag)
        return 0;
    if (func_07D818(t->p30, &v)) {
        sub3(&d, &v, &o->pos);
        if (!(t->range * t->range < d.x * d.x + d.y * d.y + d.z * d.z))
            return 1;
    }
    return 0;
}

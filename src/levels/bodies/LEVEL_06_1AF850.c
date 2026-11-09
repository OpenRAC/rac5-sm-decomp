/* LEVEL_06:0x1AF850 -- tests whether a target point is reachable or within range. */
typedef struct { float x, y, z; } Vec3;
typedef struct { char pad0[0x15A]; unsigned char flag; } Info;
typedef struct { char pad0[0x58]; Info *info; } Hdr;
typedef struct {
    Hdr *hdr;
    char pad0[0x34];
    void *p38;
    char pad1[4];
    void *p40;
    char pad2[4];
    float range;
    char pad3[2];
    unsigned char b4E;
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

int func_1AF850(Obj *o)
{
    Vec3 v;
    Vec3 d;
    Tgt *t;

    t = o->tgt;
    func_018B30(&v);
    if (t->p40 && func_07D818(t->p40, &v))
        return 1;
    if (t->b4E && !t->hdr->info->flag)
        return 0;
    if (func_07D818(t->p38, &v)) {
        sub3(&d, &v, &o->pos);
        if (d.x * d.x + d.y * d.y + d.z * d.z <= t->range * t->range)
            return 1;
    }
    return 0;
}

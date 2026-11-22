/* USA LEVEL_19.REL:0x155B88, 472-byte candidate (22 November 2026).
 * Measured pinned: 2 differing words; first difference at +0x7C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct { float x, y, z; } Vec3;
typedef struct { char pad00[0x0C]; int w0C; int w10; int w14; char pad18[0x34 - 0x18]; } Rec34;
typedef struct { char pad00[4]; Rec34 *recs; char pad08[0x3F - 8]; unsigned char b3F; } Type;
typedef struct {
    char pad00[0x30];
    Vec3 pos;
    char pad3C[4];
    Type *type;
    unsigned char b44;
    char pad45[0x64 - 0x45];
    int flags;
} Target;
typedef struct {
    unsigned short id;
    unsigned char pad2;
    unsigned char b3;
    Target *target;
    float lo[3];
    float hi[3];
    unsigned char b20;
    char pad21;
    unsigned short u22;
    char pad24[0x48 - 0x24];
    float f48;
} Proxy;
typedef struct {
    char pad00[0x1C];
    float f1C;
} Owner;
typedef struct {
    char pad00[0x45];
    unsigned char b45;
    char pad46[0x54 - 0x46];
    Owner *owner;
    Proxy *state;
} Obj;
typedef struct { char pad[0x68]; } Rec68;

extern Rec68 D_001DE578[];

extern int func_06FBB8(Obj *o, int a);
extern int func_1548F0(Obj *o);
extern void func_154A90(Obj *o, int b, int r);
extern void func_02E3E0(float f, Owner *owner, Obj *o, char *addr, int n);
extern void func_0868F0(Rec68 *r);
extern void func_086308(Rec68 *r, Proxy *p, Vec3 *lo, Vec3 *hi, unsigned int bits);

static __inline__ void Add3(Vec3 *d, float *a, float *b)
{
    d->x = a[0] + b[0];
    d->y = a[1] + b[1];
    d->z = a[2] + b[2];
}

void func_155B88(Obj *obj)
{
    Proxy *st;
    Proxy *p;
    Target *t;
    Rec34 *rec;
    Rec68 *old;
    Owner *owner;
    float t0;
    Vec3 lo;
    Vec3 hi;
    int r;
    int base;
    int alt;
    int f;
    unsigned int nb;
    unsigned int fl;

    if (func_06FBB8(obj, 0) != 0) {
        r = func_1548F0(obj);
        func_154A90(obj, obj->b45, r);
        return;
    }
    st = obj->state;
    owner = obj->owner;
    t0 = owner->f1C - st->f48;
    owner->f1C = t0;
    func_02E3E0(t0, owner, obj, (char *)obj + 0x20, 0);
    p = st;
        t = p->target;
        Add3(&lo, st->lo, &t->pos.x);
        Add3(&hi, st->hi, &t->pos.x);
        base = t->flags & 0x1420;
        rec = t->type->recs + t->b44;
        old = (Rec68 *)(p->b3 * 0x68);
        old = (Rec68 *)((char *)D_001DE578 + (int)old);
        alt = base | 1;
        f = base | 0x81;
        if (rec->w0C == 0)
            f = alt;
        if (rec->w10 != 0)
            f |= 0x100;
        if (rec->w14 != 0)
            f |= 0x200;
        if (t->type->b3F == 1)
            f |= 0x800;
        if (((unsigned int)t->flags >> 3) & 1)
            f |= 0x400;
        nb = p->b20;
        fl = f | p->u22;
        if (st->id != 0xFFFF) {
            func_0868F0(old);
            st->id = 0xFFFF;
        }
        p->b3 = nb;
        func_086308(&D_001DE578[nb], p, &lo, &hi, fl);
}

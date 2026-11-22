/* USA LEVEL_08.REL:0x199EA0 (22 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_09D778 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
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
    char pad24[0x46 - 0x24];
    unsigned char b46;
} Proxy;
typedef struct {
    char pad00[0x2C];
    char *w2C;
} Owner;
typedef struct {
    char pad00[0x45];
    unsigned char b45;
    char pad46[0x54 - 0x46];
    Owner *owner;
    Proxy *state;
    char pad5C[0x70 - 0x5C];
    float f70;
} Obj;
typedef struct { char pad[0x68]; } Rec68;

extern Rec68 D_0027E978[];
extern char D_0026D818[];

extern int func_19A0A0(Obj *o);
extern int func_183158(char *a0, unsigned int a1, char *a2);
extern void func_199AB0(Obj *o, int b, int r);
extern void func_09D778(Rec68 *r);
extern void func_09D190(Rec68 *r, Proxy *p, Vec3 *lo, Vec3 *hi, unsigned int bits);

static __inline__ void Add3(Vec3 *d, float *a, float *b)
{
    d->x = a[0] + b[0];
    d->y = a[1] + b[1];
    d->z = a[2] + b[2];
}

void func_199EA0(Obj *obj)
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

    owner = obj->owner;
    st = obj->state;
    r = func_19A0A0(obj);
    if (r != 2) {
        func_199AB0(obj, obj->b45, r);
        return;
    }
    t0 = obj->f70 - 1.0f;
    obj->f70 = t0;
    if (t0 <= 0.0f) {
        func_199AB0(obj, obj->b45, 2);
        return;
    }
    if (func_183158(owner->w2C, st->b46, D_0026D818) != 0)
        func_199AB0(obj, obj->b45, 2);
    p = st;
        t = p->target;
        Add3(&lo, st->lo, &t->pos.x);
        Add3(&hi, st->hi, &t->pos.x);
        base = t->flags & 0x1420;
        rec = t->type->recs + t->b44;
        old = (Rec68 *)(p->b3 * 0x68);
        old = (Rec68 *)((char *)D_0027E978 + (int)old);
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
            func_09D778(old);
            st->id = 0xFFFF;
        }
        p->b3 = nb;
        func_09D190(&D_0027E978[nb], p, &lo, &hi, fl);
}

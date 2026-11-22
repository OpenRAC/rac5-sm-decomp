/* USA LEVEL_10.REL:0x1E20A0 (22 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_095BC8 unlike its accepted definition.
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
} Proxy;
typedef struct Obj Obj;
typedef struct {
    int (*f0)(Obj *o);
    void (*f1)(Obj *o, int v);
} VT;
typedef struct {
    VT *vt;
    Proxy proxy;
} State;
typedef struct {
    char pad00[0x38];
    int w38;
} Owner;
struct Obj {
    char pad00[0x54];
    Owner *owner;
    State *state;
};
typedef struct { char pad[0x68]; } Rec68;

extern Rec68 D_00238AF8[];
extern char D_00234310[];

extern int func_031510(Owner *owner, Obj *o, char *tbl, int w, int addr, int n);
extern void func_095BC8(Rec68 *r);
extern void func_0955E0(Rec68 *r, Proxy *p, Vec3 *lo, Vec3 *hi, unsigned int bits);

static __inline__ void Add3(Vec3 *d, float *a, float *b)
{
    d->x = a[0] + b[0];
    d->y = a[1] + b[1];
    d->z = a[2] + b[2];
}

void func_1E20A0(Obj *obj)
{
    State *st;
    Proxy *p;
    Target *t;
    Rec34 *rec;
    Rec68 *old;
    Owner *owner;
    VT *vt;
    Vec3 lo;
    Vec3 hi;
    int r;
    int res;
    int base;
    int alt;
    int f;
    unsigned int nb;
    unsigned int fl;

    owner = obj->owner;
    st = obj->state;
    res = func_031510(owner, obj, D_00234310, owner->w38, (int)st + 0x6A, 0x40);
    p = &st->proxy;
    t = p->target;
    Add3(&lo, st->proxy.lo, &t->pos.x);
    Add3(&hi, st->proxy.hi, &t->pos.x);
    base = t->flags & 0x1420;
    rec = t->type->recs + t->b44;
    old = (Rec68 *)(p->b3 * 0x68);
    old = (Rec68 *)((char *)D_00238AF8 + (int)old);
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
    if (st->proxy.id != 0xFFFF) {
        func_095BC8(old);
        st->proxy.id = 0xFFFF;
    }
    p->b3 = nb;
    func_0955E0(&D_00238AF8[nb], p, &lo, &hi, fl);
    if (res != 0) {
        vt = st->vt;
        r = vt->f0(obj);
        vt->f1(obj, r);
    }
}

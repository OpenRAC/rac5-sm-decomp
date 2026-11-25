/* LEVEL_17:0x16FA48 -- per-frame update of an attached collision proxy: when the target helper fails the state is forced to 3, otherwise the behavior helper picks it (anything but 11 is forwarded as is); state 11 notifies the owner after a probe, moves the proxy's bounds to the target and re-registers it with the target's flag set. */
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
typedef struct {
    char pad00[0x1C];
    Proxy proxy;
    char pad40[0x50 - 0x40];
    int w50;
} State;
typedef struct {
    char pad00[0x45];
    unsigned char b45;
    char pad46[0x54 - 0x46];
    void *owner;
    State *state;
} Obj;
typedef struct { char pad[0x68]; } Rec68;

extern Rec68 D_001CF6F8[];
extern char D_001C9FB8[];

extern int func_170488(Obj *o);
extern int func_16ECE0(Obj *o);
extern int func_02E268(void *owner, Obj *o, char *tbl, int w, int zero);
extern void func_16E838(Obj *o, int b, int r);
extern void func_086E80(Rec68 *r, unsigned int id);
extern void func_086898(Rec68 *r, Proxy *p, Vec3 *lo, Vec3 *hi, unsigned int bits);

static __inline__ void Add3(Vec3 *d, float *a, float *b)
{
    d->x = a[0] + b[0];
    d->y = a[1] + b[1];
    d->z = a[2] + b[2];
}

void func_16FA48(Obj *obj)
{
    State *st;
    Proxy *p;
    Target *t;
    Rec34 *rec;
    Rec68 *old;
    void *owner;
    Vec3 lo;
    Vec3 hi;
    int r;
    int base;
    int alt;
    int f;
    unsigned int nb;
    unsigned int fl;

    st = obj->state;
    if (func_170488(obj) == 0) {
        func_16E838(obj, obj->b45, 3);
        return;
    }
    r = func_16ECE0(obj);
    if (r != 0xB) {
        func_16E838(obj, obj->b45, r & 0xFF);
        return;
    }
    owner = obj->owner;
    if (func_02E268(owner, obj, D_001C9FB8, st->w50, 0) != 0)
        func_16E838(obj, obj->b45, 0xD);
    p = &st->proxy;
    t = p->target;
    Add3(&lo, st->proxy.lo, &t->pos.x);
    Add3(&hi, st->proxy.hi, &t->pos.x);
    base = t->flags & 0x1420;
    rec = t->type->recs + t->b44;
    old = (Rec68 *)(p->b3 * 0x68);
    old = (Rec68 *)((char *)D_001CF6F8 + (int)old);
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
        func_086E80(old, st->proxy.id);
        st->proxy.id = 0xFFFF;
    }
    p->b3 = nb;
    func_086898(&D_001CF6F8[nb], p, &lo, &hi, fl);
}

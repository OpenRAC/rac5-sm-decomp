/* LEVEL_10:0x165A20 -- per-frame update of an attached collision proxy: refreshes the proxy from the owner (a record helper and a look-up of a strength value), moves the proxy's bounds to the target, re-registers it with the target's flag set and, when the owner has a slot table, claims a slot and clears the slot's flag. */
typedef struct { float x, y, z; } Vec3;
typedef struct { char pad00[0x0C]; int w0C; int w10; int w14; char pad18[0x34 - 0x18]; } Rec34;
typedef struct { char pad00[4]; Rec34 *recs; char pad08[0x3F - 8]; unsigned char b3F; } Type;
typedef struct { char pad00[0x18]; unsigned char flags; char pad19[3]; } Item;
typedef struct { char pad00[0x58]; Item *items; } Obj;
typedef struct { char pad00[0x30]; Obj *slots; } Holder;

struct Seg0133E8;
struct Src0133E8 {
    char pad00[0x30];
    Vec3 pos;
    char pad3C[4];
    Type *type;
    unsigned char b44;
    char pad45[0x54 - 0x45];
    Holder *owner;
    struct Seg0133E8 *state;
    char pad5C[0x64 - 0x5C];
    int flags;
};
struct Seg0133E8 {
    unsigned short id;
    unsigned char b2;
    unsigned char b3;
    struct Src0133E8 *target;
    float lo[3];
    float hi[3];
    unsigned char b20;
    char pad21;
    unsigned short u22;
    char pad24[0x110 - 0x24];
    float f110;
    char pad114[0x114 - 0x114];
    unsigned char b114;
};
typedef struct Src0133E8 Owner;

extern char D_00222D90[];
extern int D_00223780;
extern char D_00238AF8[][0x68];

extern int func_02F850(unsigned char *object, void *owner);
extern void func_165C78(char *record);
extern int func_027B98(void);
extern void func_013190(struct Seg0133E8 *o, struct Src0133E8 *s, int mode, int val);
extern void func_0955E0(char *slot, struct Seg0133E8 *p, Vec3 *lo, Vec3 *hi, unsigned int bits);
extern int func_16A450(Obj *self, Owner *owner, int extra, float f10, float f14);

static __inline__ void Add3(Vec3 *d, float *a, float *b)
{
    d->x = a[0] + b[0];
    d->y = a[1] + b[1];
    d->z = a[2] + b[2];
}

void func_165A20(struct Src0133E8 *obj)
{
    Holder *owner;
    struct Seg0133E8 *st;
    struct Src0133E8 *t;
    Rec34 *rec;
    Vec3 lo;
    Vec3 hi;
    char *tbl;
    int idx;
    int off;
    int set;
    int base;
    int alt;
    int f;
    unsigned int nb;
    unsigned int fl;
    int slot;

    Item *item;
    unsigned int tf;
    Type *type;

    owner = obj->owner;
    func_02F850((unsigned char *)owner, obj);
    st = obj->state;
    func_165C78((char *)st);
    tbl = D_00222D90;
    idx = func_027B98();
    off = idx * 16 + 4;
    set = (D_00223780 - 1) * 0x40;
    st->f110 = *(float *)(off + set + (int)tbl);
    func_013190(st, obj, 1, 0x10);
    t = st->target;
    Add3(&lo, st->lo, &t->pos.x);
    Add3(&hi, st->hi, &t->pos.x);
    tf = t->flags;
    type = t->type;
    base = tf & 0x1420;
    rec = type->recs + t->b44;
    alt = base | 1;
    f = base | 0x81;
    if (rec->w0C == 0)
        f = alt;
    if (rec->w10 != 0)
        f |= 0x100;
    if (rec->w14 != 0)
        f |= 0x200;
    if (type->b3F == 1)
        f |= 0x800;
    if ((tf >> 3) & 1)
        f |= 0x400;
    nb = st->b20;
    st->b3 = nb;
    fl = f | st->u22;
    func_0955E0(D_00238AF8[nb], st, &lo, &hi, fl);
    if (owner->slots != 0) {
        slot = func_16A450(owner->slots, obj, (int)owner, 0.5f, 0.5f);
        st->b114 = slot;
        item = &owner->slots->items[st->b114];
        item->flags &= 0xFB;
    }
}

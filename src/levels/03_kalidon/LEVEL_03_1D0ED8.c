/* LEVEL_03:0x1D0ED8 -- arms an attached collision proxy when the object's level byte is below 5: installs a handler pointer in the object's hook table, initialises the proxy from the object, moves the proxy's bounds to the target, re-registers it with the target's flag set, notifies the owner, resets the record's scale to one half and creates the shared effect handle once. */
typedef struct { float x, y, z; } Vec3;
typedef struct { char pad00[0x0C]; int w0C; int w10; int w14; char pad18[0x28 - 0x18]; float f28; char pad2C[0x34 - 0x2C]; } Rec34;
typedef struct { char pad00[4]; Rec34 *recs; char pad08[0x3F - 8]; unsigned char b3F; } Type;
typedef struct { char pad00[0xDC]; void *cb; } Hook;
typedef struct { char pad00[0x3D]; unsigned char b3D; char pad3E[6]; unsigned char b44; } Owner;
typedef struct { char pad[0x68]; } Rec68;

struct Seg0133E8;
struct Src0133E8 {
    char pad00[0x30];
    Vec3 pos;
    char pad3C[4];
    Type *type;
    unsigned char b44;
    unsigned char b45;
    char pad46[0x48 - 0x46];
    Hook *hook;
    char pad4C[0x54 - 0x4C];
    Owner *owner;
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
    char pad24[0x40 - 0x24];
    int w40;
};

extern Rec68 D_0024A578[];
extern char D_00243CB8[];
extern void *D_00221E40;
extern char D_001D09B8[];

extern void func_013408(struct Seg0133E8 *o, struct Src0133E8 *s, int mode, int val);
extern void func_094EA0(Rec68 *r, struct Seg0133E8 *p, Vec3 *lo, Vec3 *hi, unsigned int bits);
extern int func_02F7B8(unsigned char *object, void *owner);
extern void *func_10D110(char *name);

static __inline__ void Add3(Vec3 *d, float *a, float *b)
{
    d->x = a[0] + b[0];
    d->y = a[1] + b[1];
    d->z = a[2] + b[2];
}

static __inline__ void Put(float *p, float v)
{
    *p = v;
}

int func_1D0ED8(struct Src0133E8 *obj)
{
    Owner *owner;
    struct Seg0133E8 *st;
    struct Src0133E8 *t;
    Rec34 *rec;
    Vec3 lo;
    Vec3 hi;
    int base;
    int sel;
    int alt;
    int f;
    unsigned int nb;
    unsigned int fl;
    unsigned int tf;
    Type *type;

    owner = obj->owner;
    st = obj->state;
    if (obj->b45 >= 5)
        return 0;
    obj->hook->cb = D_001D09B8;
    st->w40 = 0;
    func_013408(st, obj, 1, 0x10);
    t = st->target;
    Add3(&lo, st->lo, &t->pos.x);
    Add3(&hi, st->hi, &t->pos.x);
    tf = t->flags;
    type = t->type;
    base = tf & 0x1420;
    sel = type->b3F;
    rec = type->recs + t->b44;
    alt = base | 1;
    f = base | 0x81;
    if (rec->w0C == 0)
        f = alt;
    if (rec->w10 != 0)
        f |= 0x100;
    if (rec->w14 != 0)
        f |= 0x200;
    nb = st->b20;
    st->b3 = nb;
    if (sel == 1)
        f |= 0x800;
    if ((tf >> 3) & 1)
        f |= 0x400;
    fl = f | st->u22;
    func_094EA0(&D_0024A578[nb], st, &lo, &hi, fl);
    func_02F7B8((unsigned char *)owner + 0x14, obj);
    if (owner->b44 != 0)
        owner->b3D = 3;
    Put(&obj->type->recs[obj->b44].f28, 0.5f);
    if (D_00221E40 == 0)
        D_00221E40 = func_10D110(D_00243CB8);
    return 1;
}

/* LEVEL_02:0x1B5040 -- per-frame update of an attached collision proxy: lets the behavior helper pick the next state (states 8 and 11 are forwarded only when a probe passes, any other state always), moves the proxy's bounds to the target and re-registers it with the target's flag set. */
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
} State;
typedef struct {
    char pad00[0x45];
    unsigned char b45;
    char pad46[0x54 - 0x46];
    void *owner;
    State *state;
} Obj;
typedef struct { char pad[0x68]; } Rec68;

extern Rec68 D_00246BF8[];
extern char D_0023D5D0[];

extern int func_1B4470(char *a0);
extern int func_031428(void *owner, Obj *o, char *tbl, float f, int n);
extern void func_1B3F68(Obj *o, int b, int r);
extern void func_09BF28(Rec68 *r, unsigned int index);
extern void func_09B940(Rec68 *r, Proxy *p, Vec3 *lo, Vec3 *hi, unsigned int bits);

static __inline__ void Add3(Vec3 *d, float *a, float *b)
{
    d->x = a[0] + b[0];
    d->y = a[1] + b[1];
    d->z = a[2] + b[2];
}

void func_1B5040(Obj *obj)
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

    owner = obj->owner;
    st = obj->state;
    r = func_1B4470((char *)obj);
    if ((r != 0xB && r != 8) || func_031428(owner, obj, D_0023D5D0, 0.9f, 6) != 0)
        func_1B3F68(obj, obj->b45, r & 0xFF);
    p = &st->proxy;
    t = p->target;
    Add3(&lo, st->proxy.lo, &t->pos.x);
    Add3(&hi, st->proxy.hi, &t->pos.x);
    base = t->flags & 0x1420;
    rec = t->type->recs + t->b44;
    old = (Rec68 *)(p->b3 * 0x68);
    old = (Rec68 *)((char *)D_00246BF8 + (int)old);
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
        func_09BF28(old, st->proxy.id);
        st->proxy.id = 0xFFFF;
    }
    p->b3 = nb;
    func_09B940(&D_00246BF8[nb], p, &lo, &hi, fl);
}

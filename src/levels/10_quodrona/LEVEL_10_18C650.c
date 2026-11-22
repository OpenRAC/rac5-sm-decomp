/* LEVEL_10:0x18C650 -- spawns the object registered under a fixed tag in the global record table: looks the record up, creates the object, advances it by 0.99 of its velocity, registers its collision proxy (bounds from the helper, flags from the type record, slot 0 or 1 depending on the box size) and returns the object, or 0 when nothing was created. */
typedef struct { float x, y, z; } Vec3;
typedef struct { char pad00[0x0C]; int w0C; int w10; int w14; char pad18[0x34 - 0x18]; } Rec34;
typedef struct { char pad00[4]; Rec34 *recs; char pad08[0x3F - 8]; unsigned char b3F; } Type;

typedef struct {
    char pad00[0x0F];
    unsigned char b0F;
    int w10;
} State;

typedef struct {
    char pad00[0x20];
    Vec3 vel;
    char pad2C[4];
    Vec3 pos;
    char pad3C[4];
    Type *type;
    unsigned char b44;
    char pad45[0x58 - 0x45];
    State *state;
    char pad5C[0x64 - 0x5C];
    unsigned int flags;
} Obj;

typedef struct {
    char pad00[0x24];
    int tag;
    char pad28[0x44 - 0x28];
} Rec44;

typedef struct {
    char pad00[0x34];
    Rec44 *recs;
    unsigned int count;
} Table;

extern Table *D_0020F9F0;
extern char D_00238AF8[][0x68];

extern Obj *func_07CB88(Rec44 *rec, int tag, int a, int b);
extern int func_0823F0(Vec3 *lo, Vec3 *hi, int w);
extern void func_0958E0(char *slot, State *st, Vec3 *lo, Vec3 *hi, unsigned int bits);

static __inline__ Rec44 *Find(Table *tab, int tag)
{
    unsigned int i;

    for (i = 0; i < tab->count; i++) {
        if (tab->recs[i].tag == tag)
            return &tab->recs[i];
    }
    return 0;
}

static __inline__ void AddScaled(Vec3 *d, Vec3 *s, float k)
{
    d->x = d->x + s->x * k;
    d->y = d->y + s->y * k;
    d->z = d->z + s->z * k;
}

Obj *func_18C650(int a)
{
    Table *tab;
    Rec44 *rec;
    Rec44 *p;
    Obj *obj;
    State *st;
    Type *type;
    Rec34 *r34;
    Vec3 lo;
    Vec3 hi;
    unsigned int i;
    unsigned int tf;
    unsigned int base;
    unsigned int f;
    int idx;
    float dx;
    float dz;

    tab = D_0020F9F0;
    rec = Find(tab, (int)0xDFD6AB7E);
    if (rec == 0)
        obj = 0;
    else
        obj = func_07CB88(rec, (int)0xDFD6AB7E, a, 0xFF);
    if (obj == 0)
        return 0;
    st = obj->state;
    AddScaled(&obj->pos, &obj->vel, 0.99f);
    tf = obj->flags;
    type = obj->type;
    base = tf & 0x1420;
    r34 = type->recs + obj->b44;
    f = base | 1;
    if (r34->w0C != 0)
        f = base | 0x81;
    if (r34->w10 != 0)
        f |= 0x100;
    if (r34->w14 != 0)
        f |= 0x200;
    if (type->b3F == 1)
        f |= 0x800;
    if ((tf >> 3) & 1)
        f |= 0x400;
    if (func_0823F0(&lo, &hi, st->w10) != 0) {
        dx = hi.x - lo.x;
        dz = hi.z - lo.z;
        if (8.0f < dx || 8.0f < dz)
            idx = 1;
        else
            idx = 0;
        st->b0F = idx;
        func_0958E0(D_00238AF8[idx], st, &lo, &hi, f);
    }
    return obj;
}

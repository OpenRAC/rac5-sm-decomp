/* LEVEL_07:0x189FD0 -- placement copy of LEVEL_02_192E80.c: spawns the attached effect object for a parent: finds its template in the level table, moves it back along the parent's direction, derives the draw flags from its type record, and registers the object in the collision slot chosen by the probe extent. */
typedef struct V3 {
    float x;
    float y;
    float z;
} V3;

typedef struct Entry {
    char pad00[0x24];
    unsigned int id;
    char pad28[0x44 - 0x28];
} Entry;

typedef struct Level {
    char pad00[0x34];
    Entry *entries;
    unsigned int count;
} Level;

typedef struct Rec {
    char pad00[0x0C];
    int f0C;
    int f10;
    int f14;
    char pad18[0x34 - 0x18];
} Rec;

typedef struct Type {
    char pad00[4];
    Rec *recs;
    char pad08[0x3F - 8];
    unsigned char kind;
} Type;

typedef struct Body {
    char pad00[0x0F];
    unsigned char sel;
    int f10;
} Body;

typedef struct Parent {
    char pad00[0x20];
    V3 dir;
} Parent;

typedef struct Obj {
    char pad00[0x30];
    V3 pos;
    char pad3C[4];
    Type *type;
    unsigned char idx;
    char pad45[0x54 - 0x45];
    Parent **link;
    Body *body;
    char pad5C[8];
    unsigned int flags;
} Obj;

typedef struct Slot {
    char pad00[0x68];
} Slot;

extern Level *D_0021B090;
extern Slot D_00244FF8[];

extern Obj *func_07E6D8(Entry *e, unsigned int id, Parent *parent, int a3);
extern int func_083F28(V3 *lo, V3 *hi, int arg);
extern void func_0973F8(Slot *slot, Body *body, V3 *lo, V3 *hi, unsigned int flags);

static __inline__ Entry *FindEntry(unsigned int id)
{
    unsigned int i;
    Entry *e;

    for (i = 0; i < D_0021B090->count; i++) {
        e = &D_0021B090->entries[i];
        if (e->id == id) {
            return e;
        }
    }
    return 0;
}

static __inline__ void AddScaled(V3 *d, V3 *s, float k)
{
    d->x = d->x + s->x * k;
    d->y = d->y + s->y * k;
    d->z = d->z + s->z * k;
}

Obj *func_189FD0(Parent *parent)
{
    Entry *e;
    Obj *o;
    Body *b;
    Rec *rec;
    V3 lo;
    V3 hi;
    float dx;
    float dz;
    unsigned int flags;
    unsigned int base;
    int idx;

    e = FindEntry(0x9B63BF4D);
    if (e == 0) {
        o = 0;
    } else {
        o = func_07E6D8(e, 0x9B63BF4D, parent, 0xFF);
    }
    if (o == 0) {
        return 0;
    }
    b = o->body;
    AddScaled(&o->pos, &parent->dir, -1.25f);
    o->pos.y = o->pos.y + 3.0f;
    base = o->flags & 0x1420;
    rec = &o->type->recs[o->idx];
    flags = base | 1;
    if (rec->f0C != 0) {
        flags = base | 0x81;
    }
    if (rec->f10 != 0) {
        flags = flags | 0x100;
    }
    if (rec->f14 != 0) {
        flags = flags | 0x200;
    }
    if (o->type->kind == 1) {
        flags = flags | 0x800;
    }
    if (((o->flags >> 3) & 1) != 0) {
        flags = flags | 0x400;
    }
    if (func_083F28(&lo, &hi, b->f10) != 0) {
        dx = hi.x - lo.x;
        dz = hi.z - lo.z;
        if (8.0f < dx || 8.0f < dz) {
            idx = 1;
        } else {
            idx = 0;
        }
        b->sel = idx;
        func_0973F8(&D_00244FF8[idx], b, &lo, &hi, flags);
    }
    *o->link = parent;
    return o;
}

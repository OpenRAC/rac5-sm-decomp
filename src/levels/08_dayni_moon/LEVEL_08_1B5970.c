/* LEVEL_08:0x1B5970 -- initializes a spawned object: flags it, links its record, builds the option word from the table entry, queries the two endpoints and passes the result with a far/near selector to the creator; returns 1. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct {
    char pad00[0xC];
    int fC;
    int f10;
    int f14;
    char pad18[0x1C];
} Entry;

typedef struct {
    char pad00[4];
    Entry *table;
    char pad08[0x37];
    unsigned char b3F;
} Kind;

typedef struct Obj Obj;

typedef struct {
    int f00;
    char pad04[0xA];
    unsigned char b0E;
    unsigned char b0F;
    Obj *owner;
    int f14;
} Rec;

struct Obj {
    char pad00[0x40];
    Kind *kind;
    unsigned char b44;
    char pad45[0x13];
    Rec *rec;
    char pad5C[8];
    unsigned int flags;
};

typedef struct {
    char pad[0x68];
} Ent;

extern Ent D_0027E978[];

extern int func_089D30(Vec4 *a, Vec4 *b, Obj *o);
extern void func_09D490(Ent *e, Rec *r, Vec4 *a, Vec4 *b, unsigned int flags);

int func_1B5970(Obj *o)
{
    Rec *r;
    Entry *e;
    Vec4 a;
    Vec4 b;
    unsigned int flags;
    unsigned int f0;
    unsigned int base;
    unsigned int alt;
    int far;
    float dx;
    float dz;

    ((unsigned char *)o)[0x77] = 0x14;
    r = o->rec;
    o->flags = o->flags | 0x10;
    r->owner = o;
    r->b0E = 2;
    r->f14 = 0;
    r->f00 = 0;
    e = &o->kind->table[o->b44];
    base = o->flags & 0x1420;
    alt = base | 1;
    f0 = base | 0x81;
    if (e->fC == 0) {
        f0 = alt;
    }
    if (e->f10 != 0) {
        f0 |= 0x100;
    }
    if (e->f14 != 0) {
        f0 |= 0x200;
    }
    if (o->kind->b3F == 1) {
        f0 |= 0x800;
    }
    if ((o->flags >> 3) & 1) {
        f0 |= 0x400;
    }
    flags = f0 | 0x1000;
    if (func_089D30(&a, &b, o) != 0) {
        dx = b.x - a.x;
        dz = b.z - a.z;
        if (dx > 8.0f) {
            far = 1;
        } else if (dz > 8.0f) {
            far = 1;
        } else {
            far = 0;
        }
        r->b0F = far;
        func_09D490(&D_0027E978[far], r, &a, &b, flags);
    }
    return 1;
}

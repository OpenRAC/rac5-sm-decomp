/* USA LEVEL_02.REL:0x1656E8, 412-byte candidate (22 November 2026).
 * Measured gnu-ee-trial --flag=-fno-gcse: 18 differing words; first difference
 * at 0x.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    char pad[0x68];
} Rec;

typedef struct {
    char pad00[0xC];
    int w0C;
    int w10;
    int w14;
    char pad18[0x1C];
} Entry;

typedef struct {
    char pad00[4];
    Entry *tbl;
    char pad08[0x37];
    unsigned char cat;
} Kind;

typedef struct {
    char pad00[0x28];
    void (*fn)(void *);
} Fns;

typedef struct {
    char pad00[0x10];
    Fns *fns;
} Class;

typedef struct {
    char pad00[0x40];
    Class *cls;
} Owner;

typedef struct Emit Emit;

struct Emit {
    Emit *next;
    char pad04[0xB];
    unsigned char sel;
    int w10;
    Emit *prev;
    char pad18[0xC];
    Owner *owner;
};

typedef struct {
    char pad00[0x40];
    Kind *kind;
    unsigned char idx;
    char pad45[0x13];
    Emit *emit;
    char pad5C[8];
    unsigned int flags;
} Obj;

extern Rec D_00246BF8[];

extern int func_088610(Vec3 *a, Vec3 *b, int w);
extern void func_09BC40(Rec *r, Emit *e, Vec3 *a, Vec3 *b, unsigned int bits);

static __inline__ void Unlink(Emit *e)
{
    if (e->prev != 0) {
        e->prev->next = e->next;
        if (e->next == 0) {
            e->prev = 0;
        } else {
            e->next->prev = e->prev;
            e->prev = 0;
        }
    }
}

void func_1656E8(Obj *o)
{
    Emit *e;
    Entry *ent;
    Vec3 a;
    Vec3 b;
    unsigned int fl;
    unsigned int keep;
    unsigned int bits;
    unsigned int sel;
    Owner *own;
    float dx;
    float dz;
    void (*fn)(void *);

    e = o->emit;
    fl = o->flags;
    ent = o->kind->tbl + o->idx;
    keep = fl & 0x1420;
    bits = keep | 1;
    if (ent->w0C != 0) {
        bits = keep | 0x81;
    }
    if (ent->w10 != 0) {
        bits |= 0x100;
    }
    if (ent->w14 != 0) {
        bits |= 0x200;
    }
    if (o->kind->cat == 1) {
        bits |= 0x800;
    }
    if ((fl >> 3) & 1) {
        bits |= 0x400;
    }
    if (func_088610(&a, &b, e->w10) != 0) {
        dx = b.x - a.x;
        dz = b.z - a.z;
        if (dx > 8.0f || dz > 8.0f) {
            sel = 1;
        } else {
            sel = 0;
        }
        Unlink(e);
        e->sel = sel;
        func_09BC40(&D_00246BF8[sel], e, &a, &b, bits);
        own = e->owner;
    } else {
        Unlink(e);
        own = e->owner;
    }
    if (own != 0) {
        fn = own->cls->fns->fn;
        if (fn != 0) {
            fn(own);
        }
    }
}

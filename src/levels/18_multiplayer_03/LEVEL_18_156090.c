/* LEVEL_18:0x156090 -- one-shot setup of the object's record: marks it done, builds the option word from the table entry, probes the two endpoints and registers the record with the near or far pool entry. */
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

typedef struct {
    char pad00[0x0F];
    unsigned char b0F;
    void *w10;
} Sub;

typedef struct {
    char pad00[4];
    Sub sub;
    char pad18[0x2C - 0x18];
    unsigned char b2C;
} Rec;

typedef struct {
    char pad00[0x40];
    Kind *kind;
    unsigned char b44;
    char pad45[0x13];
    Rec *rec;
    char pad5C[8];
    unsigned int flags;
} Obj;

typedef struct {
    char pad[0x68];
} Ent;

extern Ent D_001DE778[];
extern int func_073F50(Vec4 *a, Vec4 *b, void *c);
extern void func_085AA0(Ent *e, Sub *s, Vec4 *a, Vec4 *b, unsigned int flags);

static __inline__ int isFar(Vec4 *a, Vec4 *b)
{
    float dx = b->x - a->x;
    float dz = b->z - a->z;

    if (dx > 8.0f || dz > 8.0f) {
        return 1;
    }
    return 0;
}

void func_156090(Obj *o)
{
    Rec *rec;
    Sub *sub;
    Entry *e;
    Vec4 p0;
    Vec4 p1;
    unsigned int base;
    unsigned int alt;
    unsigned int fl;
    int far;

    rec = o->rec;
    if (rec->b2C == 0) {
        rec->b2C = 1;
        sub = &rec->sub;
        e = &o->kind->table[o->b44];
        base = o->flags & 0x1420;
        alt = base | 1;
        fl = alt;
        if (e->fC != 0) {
            fl = base | 0x81;
        }
        if (e->f10 != 0) {
            fl |= 0x100;
        }
        if (e->f14 != 0) {
            fl |= 0x200;
        }
        if (o->kind->b3F == 1) {
            fl |= 0x800;
        }
        if ((o->flags >> 3) & 1) {
            fl |= 0x400;
        }
        if (func_073F50(&p0, &p1, sub->w10) != 0) {
            far = isFar(&p0, &p1);
            sub->b0F = far;
            func_085AA0(&D_001DE778[far], sub, &p0, &p1, fl);
        }
    }
}

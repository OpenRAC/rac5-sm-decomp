/* LEVEL_24:0x1995C0 -- initializes the object's attached record, builds the option mask from the object's flags and its configuration entry, asks func_07C030 for the two corner points and spawns the matching effect when they are available, then marks the record and clears the pending byte; returns 1. */
typedef struct {
    float x, y, z;
} V3;

typedef struct {
    unsigned short h0;
    unsigned char b2;
    unsigned char b3;
    void *owner;
    int w8;
} Rec;

typedef struct {
    char pad00[0x0C];
    int wC;
    int w10;
    int w14;
    char pad18[0x34 - 0x18];
} Entry;

typedef struct {
    char pad00[4];
    Entry *tab;
    char pad08[0x3F - 0x08];
    unsigned char b3F;
} Cfg;

typedef struct {
    char pad00[0x40];
    Cfg *cfg;
    unsigned char b44;
    char pad45;
    unsigned char b46;
    char pad47[0x58 - 0x47];
    Rec *rec;
    char pad5C[0x64 - 0x5C];
    unsigned int flags;
} Obj;

extern char D_001FB5F8[];

extern int func_07C030(V3 *a, V3 *b, Obj *o);
extern void func_08E070(char *table, Rec *rec, V3 *a, V3 *b, unsigned int flags);

int func_1995C0(Obj *o)
{
    Rec *rec;
    Entry *e;
    unsigned int base;
    unsigned int alt;
    unsigned int mask;
    unsigned int flags;
    V3 a;
    V3 b;
    int far;
    float dx;
    float dz;

    rec = o->rec;
    rec->b2 = 2;
    rec->h0 = 0xFFFF;
    rec->owner = o;
    base = o->flags & 0x1420;
    e = &o->cfg->tab[o->b44];
    alt = base | 1;
    mask = base | 0x81;
    if (e->wC == 0) {
        mask = alt;
    }
    if (e->w10 != 0) {
        mask |= 0x100;
    }
    if (e->w14 != 0) {
        mask |= 0x200;
    }
    if (o->cfg->b3F == 1) {
        mask |= 0x800;
    }
    if (((o->flags >> 3) & 1) != 0) {
        mask |= 0x400;
    }
    flags = mask | 0x4010;
    if (func_07C030(&a, &b, o) != 0) {
        dx = b.x - a.x;
        dz = b.z - a.z;
        if (8.0f < dx || 8.0f < dz) {
            far = 1;
        } else {
            far = 0;
        }
        rec->b3 = far;
        func_08E070(D_001FB5F8 + far * 0x68, rec, &a, &b, flags);
    }
    rec->w8 = 1;
    o->b46 = 0;
    return 1;
}

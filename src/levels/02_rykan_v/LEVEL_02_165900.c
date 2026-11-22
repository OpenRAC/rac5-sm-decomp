/* LEVEL_02:0x165900 -- initializes the object's attached record, marks the object, builds the option mask from its flags and its configuration entry, asks func_088610 for the two corner points and spawns the matching effect when they are available, then arms the object (0x28 timer byte, state 0, scale from a global); returns 1. */
typedef struct {
    float x, y, z;
} V3;

typedef struct {
    int w0;
    char pad04[0x0E - 0x04];
    unsigned char b0E;
    unsigned char b0F;
    void *owner;
    int w14;
    int w18;
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
    char pad45[0x58 - 0x45];
    Rec *rec;
    char pad5C[0x64 - 0x5C];
    unsigned int flags;
    char pad68[0x70 - 0x68];
    float scale;
    char pad74[0x77 - 0x74];
    unsigned char b77;
} Obj;

extern char D_00246BF8[];
extern float D_0023FB48;

extern int func_088610(V3 *a, V3 *b, Obj *o);
extern void func_09BC40(char *table, Rec *rec, V3 *a, V3 *b, unsigned int flags);
extern void func_083428(Obj *o, float t, unsigned int idx);

int func_165900(Obj *o)
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
    rec->w18 = 0;
    o->flags |= 0x400;
    rec->b0E = 2;
    rec->owner = o;
    rec->w14 = 0;
    rec->w0 = 0;
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
    flags = mask | 0x10;
    if (func_088610(&a, &b, o) != 0) {
        dx = b.x - a.x;
        dz = b.z - a.z;
        if (8.0f < dx || 8.0f < dz) {
            far = 1;
        } else {
            far = 0;
        }
        rec->b0F = far;
        func_09BC40(D_00246BF8 + far * 0x68, rec, &a, &b, flags);
    }
    o->b77 = 0x28;
    func_083428(o, 0.0f, 0);
    o->scale = D_0023FB48;
    return 1;
}

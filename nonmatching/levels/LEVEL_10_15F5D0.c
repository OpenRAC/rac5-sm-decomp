/* USA LEVEL_10.REL:0x15F5D0 (21 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_0823F0 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern int D_0020F9F4;

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
} Rec;

typedef struct {
    int w0;
} Link;

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
    char pad45[0x54 - 0x45];
    Link *link;
    Rec *rec;
    char pad5C[0x64 - 0x5C];
    unsigned int flags;
} Obj;

extern char D_00238AF8[];

extern int func_0823F0(V3 *a, V3 *b, Obj *o);
extern void func_0958E0(char *table, Rec *rec, V3 *a, V3 *b, unsigned int flags);

static __inline__ int FixChecked(int *p)
{
    int t;

    if (*p == 0) {
        return 0;
    }
    t = D_0020F9F4 + *p;
    if (*(int *)(t + 0x40) == 0) {
        *p = 0;
        return 0;
    }
    *p = t;
    return 1;
}

int func_15F5D0(Obj *o)
{
    Link *link;
    Rec *rec;
    Entry *e;
    unsigned int base;
    unsigned int mask;
    V3 a;
    V3 b;
    int far;
    float dx;
    float dz;

    link = o->link;
    rec = o->rec;
    if (FixChecked(&link->w0) == 0) {
        return 0;
    }
    rec->owner = o;
    rec->b0E = 2;
    rec->w14 = 0;
    rec->w0 = 0;
    base = o->flags & 0x1420;
    e = &o->cfg->tab[o->b44];
    mask = base | 1;
    if (e->wC != 0) {
        mask = base | 0x81;
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
    if (func_0823F0(&a, &b, o) != 0) {
        dx = b.x - a.x;
        dz = b.z - a.z;
        if (8.0f < dx || 8.0f < dz) {
            far = 1;
        } else {
            far = 0;
        }
        rec->b0F = far;
        func_0958E0(D_00238AF8 + far * 0x68, rec, &a, &b, mask);
    }
    return 1;
}

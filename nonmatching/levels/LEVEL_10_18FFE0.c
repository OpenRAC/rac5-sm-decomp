/* USA LEVEL_10.REL:0x18FFE0 (21 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_0823F0 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct { float x, y, z; } Vec3;
typedef struct { char pad00[0x0C]; int w0C; int w10; int w14; char pad18[0x34 - 0x18]; } Rec34;
typedef struct { char pad00[4]; Rec34 *recs; char pad08[0x3F - 8]; unsigned char b3F; } Type;
typedef struct { char pad[0x68]; } Rec68;

typedef struct Data {
    unsigned short h0;
    unsigned char b2;
    unsigned char b3;
    struct Obj *owner;
} Data;

typedef struct Obj {
    char pad00[0x40];
    Type *type;
    unsigned char b44;
    char pad45[0x54 - 0x45];
    int *slot;
    Data *data;
    char pad5C[0x64 - 0x5C];
    int flags;
    char pad68[0x76 - 0x68];
    unsigned char b76;
    unsigned char b77;
} Obj;

extern int D_0020F9F4;
extern Rec68 D_00238AF8[];

extern int func_0823F0(void *a, void *b, void *c);
extern void func_0955E0(Rec68 *r, Data *d, Vec3 *a, Vec3 *b, unsigned int bits);

static __inline__ int Reloc(int *slot)
{
    int off;

    off = *slot;
    if (off == 0) {
        return 0;
    }
    *slot = D_0020F9F4 + off;
    return 1;
}

int func_18FFE0(Obj *o)
{
    Vec3 a;
    Vec3 b;
    Data *d;
    Rec34 *rec;
    unsigned int keep;
    unsigned int bits;
    int big;
    float dx;
    float dz;

    if (!Reloc(o->slot)) {
        return 0;
    }
    d = o->data;
    d->b2 = 2;
    d->h0 = 0xFFFF;
    d->owner = o;
    keep = o->flags & 0x1420;
    rec = o->type->recs + o->b44;
    bits = keep | 1;
    if (rec->w0C != 0)
        bits = keep | 0x81;
    if (rec->w10 != 0)
        bits |= 0x100;
    if (rec->w14 != 0)
        bits |= 0x200;
    if (o->type->b3F == 1)
        bits |= 0x800;
    if (((unsigned int)o->flags >> 3) & 1)
        bits |= 0x400;
    if (func_0823F0(&a, &b, o) != 0) {
        dx = b.x - a.x;
        dz = b.z - a.z;
        if (8.0f < dx || 8.0f < dz)
            big = 1;
        else
            big = 0;
        d->b3 = big;
        func_0955E0(&D_00238AF8[big], d, &a, &b, bits);
    }
    o->b76 = 0x32;
    o->b77 = 0x50;
    return 1;
}

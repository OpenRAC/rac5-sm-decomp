/* USA LEVEL_03.REL:0x1D0C70, 612-byte candidate (22 November 2026).
 * Measured pinned: 2 differing words; first difference at 0xE4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad0[0xC];
    int w0C;
    int w10;
    int w14;
    char pad18[0x34 - 0x18];
} Rec;

typedef struct {
    char pad0[4];
    Rec *recs;
    char pad8[0x3F - 8];
    unsigned char b3F;
} Type;

typedef struct Obj Obj;
typedef struct {
    float x, y, z, w;
} Vec4;

typedef struct {
    char pad0[3];
    unsigned char b3;
    Obj *target;
    float v8[3];
    float v14[3];
    unsigned char b20;
    char pad21;
    unsigned short h22;
    char pad24[0x30 - 0x24];
    Vec4 box;
    int w40;
    char pad44[0x68 - 0x44];
    unsigned char b68;
    char pad69[2];
    unsigned char b6B;
} Node;

typedef struct {
    char pad0[4];
    int w4;
    char pad8[8];
    int w10;
    int w14[1];
    char pad18[0x24 - 0x18];
    int w24;
    int w28;
    int w2C;
    char pad30[0x3D - 0x30];
    unsigned char b3D;
    char pad3E[0x44 - 0x3E];
    unsigned char b44;
} Info;

typedef struct {
    char pad0[0x10];
    int w10;
    int w14;
    int w18;
} Src;

typedef struct {
    char pad0[0xDC];
    void (*cb)(void);
} Hook;

struct Obj {
    char pad0[0x20];
    float f20;
    char pad24[4];
    float f28;
    char pad2C[4];
    float pos[3];
    char pad3C[4];
    Type *type;
    unsigned char idx;
    char pad45[3];
    Hook *w48;
    char pad4C[0x54 - 0x4C];
    Info *info;
    Node *node;
    char pad5C[0x64 - 0x5C];
    int flags;
};

typedef struct {
    char pad[0x68];
} Entry;

extern Entry D_0024A578[];
extern char D_00243DE0[];

extern void func_1CFE00(Obj *o, int n);
extern int func_168260(int h, Obj *o, int *p, float a, float b);
extern void func_02F7B8(int *p, Obj *o);
extern void func_1D09B8(void);
extern void func_123F28(char *p, Obj *o, char *tab);
extern void func_013408(Node *n, Obj *o, int a, int b);
extern void func_094EA0(Entry *e, Node *n, float *a, float *b, unsigned int flags);

static __inline__ void Add3(float *d, float *a, float *b)
{
    d[0] = a[0] + b[0];
    d[1] = a[1] + b[1];
    d[2] = a[2] + b[2];
}

static __inline__ void Put(Vec4 *d, float x, float y, float z, float w)
{
    d->x = x;
    d->y = y;
    d->z = z;
    d->w = w;
}

void func_1D0C70(Obj *o, int a, int b, Src *src)
{
    Node *n;
    Info *in;
    Obj *t;
    Rec *rec;
    float p0[4];
    float p1[4];
    unsigned int f;
    unsigned int alt;
    unsigned int base;
    unsigned int fl;
    unsigned int nb;

    n = o->node;
    in = o->info;
    Put(&n->box, o->pos[0], o->pos[2], o->f20, o->f28);
    n->b6B = 0xB;
    func_1CFE00(o, 6);
    in->w10 = a;
    in->w4 = b;
    in->w24 = src->w10;
    in->w28 = src->w14;
    in->w2C = src->w18;
    o->flags = o->flags & ~0x20;
    o->flags = o->flags & ~0x10;
    n->b68 = func_168260(in->w10, o, in->w14, 0.7f, 1.2f);
    func_02F7B8(in->w14, o);
    if (in->b44 != 0) {
        in->b3D = 3;
    }
    o->w48->cb = func_1D09B8;
    n->w40 = 0;
    func_123F28((char *)n + 0x44, o, D_00243DE0);
    func_013408(n, o, 1, 0x1010);
    t = n->target;
    Add3(p0, n->v8, t->pos);
    Add3(p1, n->v14, t->pos);
    rec = &t->type->recs[t->idx];
    base = t->flags & 0x1420;
    alt = base | 1;
    f = base | 0x81;
    if (rec->w0C == 0) {
        f = alt;
    }
    if (rec->w10 != 0) {
        f |= 0x100;
    }
    if (rec->w14 != 0) {
        f |= 0x200;
    }
    if (t->type->b3F == 1) {
        f |= 0x800;
    }
    if (((unsigned int)t->flags >> 3) & 1) {
        f |= 0x400;
    }
    nb = n->b20;
    fl = f | n->h22;
    n->b3 = nb;
    func_094EA0(&D_0024A578[nb], n, p0, p1, fl);
}

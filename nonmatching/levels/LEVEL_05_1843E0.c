/* USA LEVEL_05.REL:0x1843E0, 288-byte candidate (21 November 2026).
 * Measured pinned: 1 differing words; first difference at 0xE8.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    int w0;
    int w4;
    float f20;
} Row;

typedef struct {
    unsigned char b0;
    char pad1[3];
    int w4;
} Spec;

typedef struct {
    char pad00[0x10];
    Spec *spec;
    int w14;
    char pad18[0x1C];
} Rec;

typedef struct {
    char pad00[4];
    Rec *recs;
} Cfg;

typedef struct {
    char pad00[0x40];
    Cfg *cfg;
    unsigned char idx;
} Cur;

typedef struct {
    char pad00[0x64];
    unsigned int flags;
} Owner;

typedef struct {
    char pad00[0x4C];
    Owner *owner;
} Info;

typedef struct {
    char pad00[0x20];
    Vec3 dir20;
    float pad2C;
    Vec3 pos30;
    char pad3C[0x1C];
    Info *info;
} Obj;

typedef struct {
    char pad00[0x24];
    Vec3 pt;
} Pt;

extern Cur *D_002213DC;
extern char D_00208D00[];
extern int D_002096F0;

extern int func_01E7A0(Vec3 *v, int a, int b);
extern int func_10FA58(Vec3 *v, int a, Cur *c);
extern int func_0270A8(void);
extern void func_039890(float f, int a, int b, Vec3 *p, Vec3 *q, Obj *o);

static __inline__ void AddVec(Vec3 *out, Vec3 *a, Vec3 *b)
{
    out->x = a->x + b->x;
    out->y = a->y + b->y;
    out->z = a->z + b->z;
}

void func_1843E0(Obj *o, Pt *p)
{
    Vec3 v;
    Cur *cur;
    Rec *rec;
    Info *info;
    unsigned char ok;
    int idx;
    int off;
    char *base;

    AddVec(&v, &o->pos30, &p->pt);
    cur = D_002213DC;
    rec = &cur->cfg->recs[cur->idx];
    if (rec->spec != 0) {
        ok = func_01E7A0(&v, rec->spec->w4, rec->spec->b0);
    } else {
        ok = func_10FA58(&v, rec->w14, cur);
    }
    if (ok) {
        info = o->info;
        base = D_00208D00;
        idx = func_0270A8();
        off = idx * 16 + 8;
        off += (D_002096F0 - 1) * 64;
        base += off;
        func_039890(*(float *)(base + 0x20), 0, 3, &o->pos30, &o->dir20, o);
        info->owner->flags |= 0x200000;
    }
}

/* LEVEL_05:0x199C08 -- sets up a world object: wires its handler, links it to its owners, picks the draw flags and registers its bounding box with the pool. */
typedef struct Obj Obj;

typedef struct {
    char pad0[4];
    char *ents;
    char pad8[0x3F - 8];
    unsigned char b3F;
} Model;

typedef struct {
    char pad0[0xC];
    int w0C;
    int w10;
    int w14;
} Ent;

typedef struct {
    int w0;
    char pad4[4];
    Obj *owner;
    Obj *link;
    char pad10[8];
    unsigned char b18;
} Cfg;

typedef struct {
    unsigned short h0;
    unsigned char b2;
    unsigned char b3;
    Obj *obj;
    char pad8[0x14];
    float f1C;
    char pad20[0x38 - 0x20];
    unsigned char b38;
} Rec;

typedef struct {
    char pad0[0xDC];
    void (*fn)(void);
} Vt;

struct Obj {
    char pad0[0x20];
    float v20[4];
    float pos[3];
    char pad3C[4];
    Model *model;
    unsigned char b44;
    unsigned char b45;
    char pad46[2];
    Vt *vt;
    char pad4C[8];
    Cfg *cfg;
    Rec *rec;
    char pad5C[8];
    unsigned int flags;
    int w68;
    char pad6C[0x76 - 0x6C];
    unsigned char b76;
    unsigned char b77;
    unsigned int flags2;
};

typedef struct {
    float f0;
    float f4;
    float f8;
    float fC;
} Row;

typedef struct {
    Row row[4];
} Set;

typedef struct {
    char pad[0x68];
} Pool;

extern char D_00208D00[];
extern int D_002096F0;
extern Pool D_0021B3F8[];

extern void *memset(void *p, int v, unsigned int n);
extern int func_162B10(Obj *obj, int id, unsigned char *out);
extern int func_1627D0(Obj *owner, Obj *self, int state, float *pos, float *v, void (*cb)(void), int z);
extern void func_1632D0(char *object, char *member, int value);
extern void func_19B718(char *object);
extern void func_19B170(void);
extern void func_19AF70(void);
extern int func_0270A8(void);
extern int func_07F460(float *lo, float *hi, Obj *o);
extern void func_092968(Pool *pool, Rec *rec, float *lo, float *hi, unsigned int flags);

int func_199C08(Obj *o)
{
    Cfg *cfg;
    Rec *rec;
    Model *model;
    Ent *ent;
    unsigned int f;
    unsigned int base;
    int big;
    float lo[4];
    float hi[4];
    float v;
    char *tbl;
    int off;
    int set;
    unsigned int fl;
    unsigned int alt;
    float dx;
    float dz;
    Obj *owner;

    cfg = o->cfg;
    rec = o->rec;
    o->flags2 = (o->flags2 & 0xFFF0FFFF) | 0x20000;
    if (o->b45 != 0) {
        return 0;
    }
    if (cfg->w0 == 0) {
        return 0;
    }
    o->b77 = 0x28;
    o->b76 = cfg->b18 == 0 ? 0x32 : 0;
    o->vt->fn = func_19B170;
    o->w68 = 0xFFFFFF;
    memset(rec, 0, 0x3C);
    owner = cfg->owner;
    if (owner != 0) {
        if (func_162B10(owner, (int)o, &rec->b38) == 0) {
            rec->b38 = func_1627D0(owner, o, o->b45, o->pos, o->v20, func_19AF70, 0);
        }
    }
    if (cfg->link != 0) {
        func_1632D0((char *)cfg->link, (char *)o, (int)func_19B718);
    } else {
        func_19B718((char *)o);
    }
    tbl = D_00208D00;
    off = func_0270A8() * 16 + 4;
    set = (D_002096F0 - 1) * 0x40;
    v = *(float *)(off + set + (int)tbl);
    rec->b2 = 2;
    rec->f1C = v;
    rec->h0 = 0xFFFF;
    rec->obj = o;
    model = o->model;
    ent = (Ent *)(model->ents + o->b44 * 0x34);
    base = o->flags & 0x1420;
    alt = base | 1;
    f = base | 0x81;
    if (ent->w0C == 0) {
        f = alt;
    }
    if (ent->w10 != 0) {
        f |= 0x100;
    }
    if (ent->w14 != 0) {
        f |= 0x200;
    }
    if (model->b3F == 1) {
        f |= 0x800;
    }
    if ((o->flags >> 3) & 1) {
        f |= 0x400;
    }
    fl = f | 0x1018;
    if (func_07F460(lo, hi, o) != 0) {
        dx = hi[0] - lo[0];
        dz = hi[2] - lo[2];
        if (dx > 8.0f || dz > 8.0f) {
            big = 1;
        } else {
            big = 0;
        }
        rec->b3 = big;
        func_092968(&D_0021B3F8[big], rec, lo, hi, fl);
    }
    if (o->b45 == 0 || o->b45 == 2) {
        o->flags |= 0x20;
    }
    return 1;
}

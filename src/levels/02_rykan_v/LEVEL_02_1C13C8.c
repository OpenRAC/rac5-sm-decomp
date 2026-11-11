/* LEVEL_02:0x1C13C8 -- spawns an attached object from a template looked up by id, stores its owner link and its signed distance along the parent's direction, and registers its bounding box with the pool. */
typedef struct Obj Obj;

typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct {
    char pad0[0x24];
    int id;
    char pad28[0x44 - 0x28];
} Entry;

typedef struct {
    char pad0[0x34];
    Entry *ents;
    unsigned int count;
} Table;

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
    char pad0[0x10];
    float f10;
    int w14;
} Cfg;

typedef struct {
    char pad0[0xF];
    unsigned char bF;
    Obj *w10;
} Rec;

typedef struct {
    char pad[0x68];
} Pool;

struct Obj {
    char pad0[0x20];
    float v20[3];
    char pad2C[4];
    float pos[3];
    char pad3C[4];
    Model *model;
    unsigned char b44;
    unsigned char b45;
    char pad46[2];
    char pad48[12];
    Cfg *cfg;
    Rec *rec;
    char pad5C[8];
    unsigned int flags;
};

extern Table *D_0021BD50;
extern Pool D_00246BF8[];

extern Obj *func_082E40(Entry *e, unsigned int id, Obj *parent, int n);
extern void func_01AC80(Vec4 *a0);
extern int func_088610(float *lo, float *hi, Obj *o);
extern void func_09BC40(Pool *pool, Rec *rec, float *lo, float *hi, unsigned int flags);

static __inline__ Entry *FindEntry(Table *t, unsigned int id)
{
    unsigned int i;

    for (i = 0; i < t->count; i++) {
        if (t->ents[i].id == id) {
            return &t->ents[i];
        }
    }
    return 0;
}

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ float Dot3(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

static __inline__ void Sub3(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

void func_1C13C8(Obj *parent, int w, Obj *src)
{
    Entry *e;
    Obj *o;
    Cfg *cfg;
    Rec *rec;
    Model *model;
    Ent *ent;
    unsigned int f;
    unsigned int alt;
    unsigned int base;
    int big;
    Vec4 v;
    float lo[4];
    float hi[4];
    float dx;
    float dz;

    e = FindEntry(D_0021BD50, 0x82396476);
    if (e == 0) {
        o = 0;
    } else {
        o = func_082E40(e, 0x82396476, parent, 0xFF);
    }
    if (o != 0) {
        cfg = o->cfg;
        rec = o->rec;
        cfg->w14 = w;
        if (src == 0) {
            func_01AC80(&v);
        } else {
            Copy3(&v.x, src->pos);
        }
        Sub3(&v.x, &v.x, o->pos);
        cfg->f10 = Dot3(&v.x, parent->v20) + 3.0f;
        base = o->flags & 0x1420;
        f = base | 1;
        alt = base | 0x81;
        model = o->model;
        ent = (Ent *)(model->ents + o->b44 * 0x34);
        if (ent->w0C != 0) {
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
        if (((unsigned int)o->flags >> 3) & 1) {
            f |= 0x400;
        }
        if (func_088610(lo, hi, rec->w10) != 0) {
            dx = hi[0] - lo[0];
            dz = hi[2] - lo[2];
            if (dx > 8.0f || dz > 8.0f) {
                big = 1;
            } else {
                big = 0;
            }
            rec->bF = big;
            func_09BC40(&D_00246BF8[big], rec, lo, hi, f);
        }
    }
}

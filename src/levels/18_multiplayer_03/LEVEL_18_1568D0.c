/* LEVEL_18:0x1568D0 -- lets a falling object accelerate downward with a capped step, tests it against the world, and refreshes the pooled bounding box of its record (unlinking the previous registration) until it drops out of range. */
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

typedef struct Reg Reg;
struct Reg {
    Reg *next;
    char pad4[8];
    unsigned short flags;
    char padE;
    unsigned char bF;
    Obj *w10;
    Reg **prev;
};

typedef struct {
    char pad0[4];
    Reg reg;
    float f1C;
    char pad20[0xC];
    unsigned char b2C;
} Rec;

typedef struct {
    char pad[0x68];
} Pool;

struct Obj {
    char pad0[0x30];
    float pos[3];
    char pad3C[4];
    Model *model;
    unsigned char b44;
    unsigned char b45;
    char pad46[0x12];
    Rec *rec;
    char pad5C[8];
    unsigned int flags;
};

extern Pool D_001DE778[];

extern int func_01CF08(float f, float *pos, float *buf, float *pos2, int a, int b);
extern void func_156620(Obj *o, int mode);
extern int func_073F50(float *lo, float *hi, Obj *o);
extern void func_085AA0(Pool *pool, Reg *reg, float *lo, float *hi, unsigned int flags);

static __inline__ void Unlink(Reg *n)
{
    if (n->prev != 0) {
        *n->prev = n->next;
        if (n->next != 0) {
            n->next->prev = n->prev;
        }
        n->prev = 0;
    }
}

static __inline__ float *Sel(float *a, float *b)
{
    if (*a < *b) {
        return a;
    }
    return b;
}

static __inline__ void Mark(Reg *r)
{
    r->flags |= 8;
}

void func_1568D0(float dt, Obj *o)
{
    Rec *rec;
    Reg *reg;
    Model *model;
    Ent *ent;
    unsigned int f;
    unsigned int fb;
    unsigned int idx;
    int big;
    int idx2;
    float v;
    float c;
    float lim;
    float *pf;
    float *lp;
    float dx;
    float dz;
    float buf[4];
    float lo[4];
    float hi[4];

    rec = o->rec;
    v = rec->f1C + dt * -10.0f;
    rec->f1C = v;
    lim = 0.24000001f;
    c = v * dt;
    pf = Sel(&c, &lim);
    o->pos[1] = o->pos[1] + *pf;
    if (rec->b2C != 0) {
        Mark(&rec->reg);
    }
    if (func_01CF08(0.5f, o->pos, buf, o->pos, 0x228, 0x200) != 0) {
        func_156620(o, 0);
    }
    if (rec->b2C != 0) {
        idx = o->b44;
        model = o->model;
        ent = (Ent *)(model->ents + idx * 0x34);
        reg = &rec->reg;
        fb = o->flags & 0x1420;
        f = fb | 1;
        if (ent->w0C != 0) {
            f = fb | 0x81;
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
        if (func_073F50(lo, hi, reg->w10) != 0) {
            dx = hi[0] - lo[0];
            dz = hi[2] - lo[2];
            if (dx > 8.0f || dz > 8.0f) {
                big = 1;
            } else {
                big = 0;
            }
            lp = lo;
            idx2 = big;
            Unlink(reg);
            reg->bF = big;
            func_085AA0(&D_001DE778[idx2], reg, lp, hi, f);
        } else {
            Unlink(reg);
        }
    }
    if (o->pos[1] < -10.0f) {
        func_156620(o, 4);
    }
}

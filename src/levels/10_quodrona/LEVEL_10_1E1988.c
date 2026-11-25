/* LEVEL_10:0x1E1988 -- validates a spawn request against the configuration and, when it passes, initialises the record (state-dependent hookup, default vectors, bounding record, owner link and a start value). */
struct Src0133E8 {
    char pad0[0x30];
    float pos[3];
};

struct Seg0133E8 {
    unsigned short h0;
    unsigned char b2;
    unsigned char pad3;
    struct Src0133E8 *src;
    float a[3];
    float b[3];
    unsigned char b20;
    unsigned char pad21;
    unsigned short h22;
};

typedef struct {
    char pad0[4];
    float f_04;
} Obj;

typedef struct {
    float f_00;
} Slot;

typedef struct Child Child;

typedef struct {
    char pad_00[0x60];
    unsigned char b60;
} ChildRec;

struct Child {
    char pad_00[0x58];
    ChildRec *rec;
};

typedef struct {
    char pad_00[0x2C];
    int w2C;
    int w30;
    int w34;
    int w38;
    char *p3C;
    int w40;
} Cfg;

typedef struct {
    float a[3];
    float b[3];
    unsigned char flag;
} Span;

typedef struct {
    int w0;
    struct Seg0133E8 seg;
    char pad_28[0x1C];
    Span span;
    int w60;
    float f64;
    unsigned char b68;
} Rec;

typedef struct Actor {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[9];
    unsigned char b45;
    char pad_46[0x0E];
    Cfg *cfg;
    Rec *rec;
    char pad_5C[0x1C];
    unsigned int flags2;
} Actor;

typedef struct {
    float f0;
    float f4;
    float f8;
    float fC;
} Ent16;

typedef struct {
    Ent16 e[4];
} Row64;

extern int D_0020F9F4;
extern float D_00220DF8[3];
extern float D_00222D90[];
extern int D_00223780;

extern int func_02F850(unsigned char *object, void *owner);
extern int func_0142C8(Obj *a0, Slot *a1, int a2, float f);
extern void func_02BA58(char *object, int enable);
extern void *func_18C650(int a);
extern void func_013190(struct Seg0133E8 *o, struct Src0133E8 *s, int mode, int val);
extern void func_16D060(char *object, char *member, int value);
extern void func_1E3160(Actor *o);
extern int func_027B98(void);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ void InitSpan(Span *sp, float *src)
{
    Copy3(sp->a, src);
    Copy3(sp->b, src);
    sp->flag = 0;
}

static __inline__ void Relink(int *p, void (*cb)(Actor *), Actor *o)
{
    int ok;
    int v;
    char *t;
    Child *c;

    v = p[0];
    if (v == 0) {
        ok = 0;
    } else {
        t = (char *)(D_0020F9F4 + v);
        if (*(int *)(t + 0x40) == 0) {
            p[0] = 0;
            ok = 0;
        } else {
            p[0] = (int)t;
            ok = 1;
        }
    }
    if (ok) {
        c = *(Child **)p;
        if (c->rec->b60 < 12) {
            func_16D060((char *)c, (char *)o, (int)cb);
        }
    } else if (cb != 0) {
        cb(o);
    }
}

int func_1E1988(Actor *o, int arg)
{
    Rec *rec;
    Cfg *cfg;
    int r;
    char *obj;
    float *tbl;
    int lvl;
    int off;

    rec = o->rec;
    cfg = o->cfg;
    rec->w0 = arg;
    if (cfg->w2C == 0) {
        return 0;
    }
    if (cfg->w30 == 0) {
        return 0;
    }
    if (func_02F850((unsigned char *)cfg, o) != 1) {
        return 0;
    }
    if (o->b45 == 0 || o->b45 == 3) {
        if (func_0142C8((Obj *)o->pos, 0, 1, 2.0f) == 0) {
            return 0;
        }
    }
    if (o->b45 == 1 && cfg->w38 == 0) {
        return 0;
    }
    if (o->b45 == 3 && cfg->w40 == 0) {
        return 0;
    }
    if (o->b45 == 4) {
        obj = cfg->p3C;
        if (obj == 0) {
            return 0;
        }
        func_02BA58(obj, 1);
    } else if (o->b45 == 2) {
        obj = cfg->p3C;
        if (obj == 0) {
            return 0;
        }
        rec->w60 = (int)func_18C650((int)obj);
    }
    InitSpan(&rec->span, D_00220DF8);
    o->flags2 = (o->flags2 & 0xFFF0FFFF) | 0x20000;
    func_013190(&rec->seg, (struct Src0133E8 *)o, 1, 0x10);
    Relink(&cfg->w34, func_1E3160, o);
    rec->b68 = 0;
    tbl = D_00222D90;
    r = func_027B98();
    lvl = D_00223780 - 1;
    off = r * 16 + (lvl * 64 + 4);
    rec->f64 = *(float *)((char *)tbl + off);
    return 1;
}

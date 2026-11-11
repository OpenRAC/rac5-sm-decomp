/* LEVEL_08:0x1FDBF0 -- placement copy of LEVEL_04_1D8C70.c: looks up the keyed template, spawns an object from it, advances its velocity and a half-unit drift, fills the spawn record and (when a link is registered) hands the object to the link helper; returns the object. */

struct Ent {
    char pad_00[0x24];
    unsigned int id_24;
    char pad_28[0x44 - 0x28];
};

struct Tab {
    char pad_00[0x34];
    struct Ent *ents_34;
    unsigned int count_38;
};

struct Rec {
    int w_00;
    int w_04;
    int w_08;
    int w_0C;
    char pad_10[0x20 - 0x10];
    float f_20;
};

struct Obj {
    char pad_00[0x20];
    float v_20[3];
    char pad_2C[4];
    float v_30[3];
    char pad_3C[0x58 - 0x3C];
    struct Rec *p_58;
};

struct Link {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
};

extern struct Tab *D_0024FC50;
struct LinkRef {
    struct Link *p;
};

extern struct LinkRef D_003EAD88;

extern struct Obj *func_0844E0(struct Ent *e, unsigned int key, int tbl, int f);
extern void func_088940(struct Obj *o, struct Link *l, int *p, int a, int b, int c, int d, int e,
                        float f0, float f1, float f2, float f3);

static __inline__ struct Ent *FindEnt(struct Tab *t, unsigned int key)
{
    unsigned int i;

    for (i = 0; i < t->count_38; i++) {
        if (t->ents_34[i].id_24 == key) {
            return &t->ents_34[i];
        }
    }
    return 0;
}

static __inline__ struct Obj *MakeObj(int tbl, struct Ent *e, unsigned int key)
{
    if (e == 0) {
        return 0;
    }
    return func_0844E0(e, key, tbl, 0xFF);
}

static __inline__ void AddVec(float *d, float *s)
{
    d[0] += s[0];
    d[1] += s[1];
    d[2] += s[2];
}

struct Obj *func_1FDBF0(int tbl, int b, int c, float f, int d)
{
    struct Obj *o;
    struct Rec *r;
    struct Tab *t;
    struct Link *l;
    int *w;

    t = D_0024FC50;
    o = MakeObj(tbl, FindEnt(t, 0x975DE41A), 0x975DE41A);
    AddVec(o->v_30, o->v_20);
    o->v_30[1] += 0.5f;
    r = o->p_58;
    w = &r->w_0C;
    r->w_00 = b;
    r->w_04 = d;
    r->w_08 = c;
    r->f_20 = f;
    r->w_0C = 0;
    l = D_003EAD88.p;
    if (l != 0) {
        func_088940(o, l, w, 0, 0, 0, 0, 1, l->f_14, l->f_18, l->f_1C, l->f_20);
    }
    return o;
}

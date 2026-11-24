/* LEVEL_08:0x1BDE88 -- placement copy of LEVEL_01_191CF8.c: spawns an attached effect object for an owner (one of two hashed variants picked at random, the other tried when it fails), scales its basis vectors by a capped size, registers it with a helper and calls the owner model's setup callback. */
typedef struct Obj Obj;

typedef struct {
    char pad0[0x24];
    unsigned int hash;
    char pad28[0x1C];
} Item;

typedef struct {
    char pad0[0x34];
    Item *items;
    unsigned int count;
} Table;

typedef struct {
    char pad0[0x28];
    float f28;
    char pad2C[0x34 - 0x2C];
} Ent;

typedef struct {
    char pad0[4];
    Ent *ents;
    char pad8[0x20 - 8];
    void (*cb)(float scale, Obj *o, int a, int b, int c, int d, Obj *fx);
} Model;

typedef struct {
    int kind;
    char pad4[0x1C - 4];
    float f1C;
    float f20;
    int w24;
    Obj *owner;
    char pad2C[0x8C - 0x2C];
    unsigned char b8C;
} Rec;

struct Obj {
    float v00[3];
    char padC[4];
    float v10[3];
    char pad1C[4];
    float v20[3];
    char pad2C[0x40 - 0x2C];
    Model *model;
    unsigned char b44;
    char pad45[0x58 - 0x45];
    Rec *rec;
    char pad5C[0x70 - 0x5C];
    float f70;
};

typedef struct {
    char pad0[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Info;

typedef struct {
    int kind;
    float damage;
    int element;
    int hitClass;
} DamageInfo;

typedef struct {
    char pad0[0xF90];
    DamageInfo entry249;
} DamageTable;

extern Table *D_0024FC50;
/* The attack damage table: 259 entries of 16 bytes (kind, damage, element, hit class). */
extern DamageTable D_002629D8;

extern int rand(void);
extern int func_1BEEE8(Obj *o);
extern Obj *func_0844E0(Item *item, unsigned int variant, Obj *owner, int alpha);
extern unsigned int func_024AB8(unsigned int index);
extern void func_088940(Obj *fx, Info *info, float a, float b, float c, float d, int e, int f, int g, int h, int i, int j);

static __inline__ Item *Find(unsigned int hash)
{
    Table *t;
    unsigned int i;

    t = D_0024FC50;
    for (i = 0; i < t->count; i++) {
        if (t->items[i].hash == hash) {
            return &t->items[i];
        }
    }
    return 0;
}

static __inline__ void Scale3(float *v, float k)
{
    v[0] = v[0] * k;
    v[1] = v[1] * k;
    v[2] = v[2] * k;
}

static __inline__ float *MinPtr(float *a, float *b)
{
    return (*a < *b) ? a : b;
}

static __inline__ Obj *Make(unsigned int variant, Obj *owner)
{
    Item *item;

    item = Find(0x702127E9);
    if (item == 0) {
        return 0;
    }
    return func_0844E0(item, variant, owner, 0xFF);
}

Obj *func_1BDE88(float scale, int kind, Obj *owner, int flag)
{
    unsigned char r;
    Obj *fx;
    Rec *rec;
    Info *info;
    Model *m;
    Obj *ow;
    DamageTable *g;
    DamageInfo *c;
    unsigned int t;
    float cap;
    float f;
    float size;

    if (owner == 0 || func_1BEEE8(owner) == 0) {
        return 0;
    }
    r = (rand() >> 30) != 0;
    fx = Make(r ? 0x702127E9 : 0xC373C5F6, owner);
    if (fx == 0) {
        fx = Make(r ? 0xC373C5F6 : 0x702127E9, owner);
        if (fx == 0) {
            goto done;
        }
    }
    rec = fx->rec;
    rec->kind = kind;
    rec->owner = owner;
    cap = 0.25f;
    size = *MinPtr(&owner->model->ents[owner->b44].f28, &cap);
    rec->b8C = flag;
    rec->f1C = size;
    rec->f20 = size;
    rec->w24 = 0;
    fx->f70 = scale;
    Scale3(fx->v10, rec->f1C + rec->f1C);
    Scale3(fx->v00, rec->f1C);
    Scale3(fx->v20, rec->f1C);
    t = func_024AB8(7);
    if (t != 0) {
        info = (Info *)t;
        func_088940(fx, info, info->f14, info->f18, info->f1C, info->f20, 0, 0, 0, 0, 0, 1);
    }
    ow = rec->owner;
    m = ow->model;
    if (m->cb != 0) {
        g = &D_002629D8;
        c = &g->entry249;
        switch (c->kind) {
        case 0:
        case 1:
            f = c->damage;
            break;
        case 2:
            f = c->damage * 0.5f;
            break;
        default:
            f = c->damage;
            break;
        }
        m->cb(f, ow, c->element, c->hitClass, 0, 0, fx);
    }
done:
    return fx;
}

/* USA LEVEL_16.REL:0x172340, 520-byte candidate (22 November 2026).
 * Measured pinned: 20 differing words; first difference at 0x18.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Mod {
    char pad_00[0x24];
    unsigned int hash;
    char pad_28[0x1C];
} Mod;

typedef struct Mgr {
    char pad_00[0x34];
    Mod *mods;
    unsigned int nmods;
} Mgr;

typedef struct Ref {
    unsigned short idx;
    char pad_02;
    unsigned char list;
} Ref;

typedef struct Inst {
    char pad_00[8];
    Ref ref;
} Inst;

typedef struct Src {
    char pad_00[0x58];
    Inst *inst;
} Src;

typedef struct Blk {
    Src *src;
    void *other;
    float pad_08;
    float dist;
} Blk;

typedef struct Obj {
    char pad_00[0x20];
    float dir[3];
    char pad_2C[4];
    float pos[3];
    char pad_3C[0x18];
    Blk *blk;
} Obj;

typedef struct Item {
    char pad_00[8];
    unsigned short flags;
    char pad_0A[6];
} Item;

typedef struct Group {
    char pad_00[0x64];
    Item *items;
} Group;

extern Mgr *D_001B48A0;
extern Group D_001DE3F8[];

extern Obj *func_06F830(Mod *mod, int a, void *parent, int flags);
extern int func_01F158(float *a0, float *a1, float *a2);

static __inline__ Mod *FindMod(unsigned int hash)
{
    unsigned int i;

    for (i = 0; i < D_001B48A0->nmods; i++) {
        if (D_001B48A0->mods[i].hash == hash)
            return &D_001B48A0->mods[i];
    }
    return 0;
}

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ void Scale3(float *o, float *v, float s)
{
    o[0] = v[0] * s;
    o[1] = v[1] * s;
    o[2] = v[2] * s;
}

static __inline__ void Add3(float *o, float *a, float *b)
{
    o[0] = a[0] + b[0];
    o[1] = a[1] + b[1];
    o[2] = a[2] + b[2];
}

static __inline__ void Mark(Ref *r)
{
    Item *it;

    if (r->idx != 0xFFFF) {
        it = (Item *)((char *)D_001DE3F8[r->list].items + (r->idx << 4));
        it->flags |= 8;
    }
}

static __inline__ void Unmark(Ref *r)
{
    Item *it;

    if (r->idx != 0xFFFF) {
        it = (Item *)((char *)D_001DE3F8[r->list].items + (r->idx << 4));
        it->flags &= ~8;
    }
}

Obj *func_172340(void *parent, Src *src, void *other)
{
    float v[9];
    float out[4];
    Mod *mod;
    Obj *obj;
    Blk *blk;
    Inst *inst;
    float dist;

    mod = FindMod(0xA40D4651);
    if (mod == 0)
        obj = 0;
    else
        obj = func_06F830(mod, 0, parent, 0xFF);
    if (obj == 0)
        return 0;
    blk = obj->blk;
    blk->other = other;
    blk->src = src;
    Copy3(v, obj->pos);
    inst = src->inst;
    Scale3(v + 6, obj->dir, 15.0f);
    Add3(v + 3, v + 6, v);
    out[0] = 0.0f;
    Mark(&inst->ref);
    if (func_01F158(v, out, 0) != 0)
        dist = out[0] * 15.0f;
    else
        dist = 1000.0f;
    blk->dist = dist;
    Unmark(&inst->ref);
    return obj;
}

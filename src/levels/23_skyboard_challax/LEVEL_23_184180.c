/* LEVEL_23:0x184180 -- placement copy of LEVEL_01_1A2D90.c: copies the object's transform record, advances its position by one velocity step and starts (once) the looping sound found by id. */
typedef struct V3 {
    float x;
    float y;
    float z;
} V3;

typedef struct Rec {
    char pad00[0x10];
    V3 vel;
    float pad1C;
    V3 at20;
    float pad2C;
    V3 pos;
    float pad3C;
} Rec;

typedef struct Holder {
    char pad00[0x10];
    Rec *rec;
} Holder;

typedef struct Cfg {
    char pad00[0x104];
    int voice;
} Cfg;

typedef struct Obj {
    char pad00[0x54];
    Holder *holder;
    Cfg *cfg;
} Obj;

typedef struct Item {
    char pad00[0x24];
    unsigned int id;
    char pad28[0x44 - 0x28];
} Item;

typedef struct Level {
    char pad00[0x34];
    Item *items;
    unsigned int nitems;
} Level;

typedef struct Mixer {
    char pad00[0x59C];
    int bus;
} Mixer;

extern Level *D_001DA190;
extern Mixer D_002025C0;
extern float D_001DBEEC;

extern void func_045288(Mixer *m, Rec *r);
extern void func_033630(V3 *v, Mixer *m);
extern int func_073978(Item *e, unsigned int id, Rec *r, int vol);
extern void func_073F58(float f, int a, int b);
extern void func_035568(Mixer *m, int x);

static __inline__ Item *FindItem(unsigned int id)
{
    unsigned int i;

    for (i = 0; i < D_001DA190->nitems; i++) {
        if (D_001DA190->items[i].id == id) {
            return &D_001DA190->items[i];
        }
    }
    return 0;
}

static __inline__ int StartSound(unsigned int id, Rec *r)
{
    Item *e;

    e = FindItem(id);
    if (e == 0) {
        return 0;
    }
    return func_073978(e, id, r, 0xFF);
}

void func_184180(Obj *o)
{
    Rec r;
    Cfg *cfg;
    Mixer *m;

    m = &D_002025C0;
    cfg = o->cfg;
    r = *o->holder->rec;
    r.pos.x = r.pos.x + r.vel.x * D_001DBEEC;
    r.pos.y = r.pos.y + r.vel.y * D_001DBEEC;
    r.pos.z = r.pos.z + r.vel.z * D_001DBEEC;
    func_045288(m, &r);
    func_033630(&r.at20, m);
    if (cfg->voice == 0) {
        cfg->voice = StartSound(0x7FB4A870, &r);
    }
    func_073F58(0.0f, m->bus, 99);
    func_073F58(0.0f, cfg->voice, 2);
    func_035568(m, 0);
}

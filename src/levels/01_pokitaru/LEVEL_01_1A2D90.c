/* LEVEL_01:0x1A2D90 -- copies the object's transform record, advances its position by one velocity step and starts (once) the looping sound found by id. */
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

extern Level *D_00206D90;
extern Mixer D_00235140;
extern float D_00208AB4;

extern void func_04BF08(Mixer *m, Rec *r);
extern void func_03A100(V3 *v, Mixer *m);
extern int func_07C558(Item *e, unsigned int id, Rec *r, int vol);
extern void func_07CB58(float f, int a, int b);
extern void func_03C0E8(Mixer *m, int x);

static __inline__ Item *FindItem(unsigned int id)
{
    unsigned int i;

    for (i = 0; i < D_00206D90->nitems; i++) {
        if (D_00206D90->items[i].id == id) {
            return &D_00206D90->items[i];
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
    return func_07C558(e, id, r, 0xFF);
}

void func_1A2D90(Obj *o)
{
    Rec r;
    Cfg *cfg;
    Mixer *m;

    m = &D_00235140;
    cfg = o->cfg;
    r = *o->holder->rec;
    r.pos.x = r.pos.x + r.vel.x * D_00208AB4;
    r.pos.y = r.pos.y + r.vel.y * D_00208AB4;
    r.pos.z = r.pos.z + r.vel.z * D_00208AB4;
    func_04BF08(m, &r);
    func_03A100(&r.at20, m);
    if (cfg->voice == 0) {
        cfg->voice = StartSound(0x7FB4A870, &r);
    }
    func_07CB58(0.0f, m->bus, 99);
    func_07CB58(0.0f, cfg->voice, 2);
    func_03C0E8(m, 0);
}

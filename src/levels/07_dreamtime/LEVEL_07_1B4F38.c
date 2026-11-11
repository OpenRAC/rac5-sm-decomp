/* LEVEL_07:0x1B4F38 -- placement copy of LEVEL_01_1A2D90.c: copies the object's transform record, advances its position by one velocity step and starts (once) the looping sound found by id. */
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

extern Level *D_0021B090;
extern Mixer D_0024AA40;
extern float D_0021D6CC;

extern void func_04C4D8(Mixer *m, Rec *r);
extern void func_03A630(V3 *v, Mixer *m);
extern int func_07E6D8(Item *e, unsigned int id, Rec *r, int vol);
extern void func_07ECC0(float f, int a, int b);
extern void func_03C698(Mixer *m, int x);

static __inline__ Item *FindItem(unsigned int id)
{
    unsigned int i;

    for (i = 0; i < D_0021B090->nitems; i++) {
        if (D_0021B090->items[i].id == id) {
            return &D_0021B090->items[i];
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
    return func_07E6D8(e, id, r, 0xFF);
}

void func_1B4F38(Obj *o)
{
    Rec r;
    Cfg *cfg;
    Mixer *m;

    m = &D_0024AA40;
    cfg = o->cfg;
    r = *o->holder->rec;
    r.pos.x = r.pos.x + r.vel.x * D_0021D6CC;
    r.pos.y = r.pos.y + r.vel.y * D_0021D6CC;
    r.pos.z = r.pos.z + r.vel.z * D_0021D6CC;
    func_04C4D8(m, &r);
    func_03A630(&r.at20, m);
    if (cfg->voice == 0) {
        cfg->voice = StartSound(0x7FB4A870, &r);
    }
    func_07ECC0(0.0f, m->bus, 99);
    func_07ECC0(0.0f, cfg->voice, 2);
    func_03C698(m, 0);
}

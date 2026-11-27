/* LEVEL_01:0x1551E8 -- sets up a countdown pickup spawner: converts two configured durations to frame counts, divides the total across the matching entries of the level list, publishes the object for the follow-up callback and reports whether the level carries the marker record. */
typedef struct Cfg {
    unsigned int w0;
    unsigned int w4;
} Cfg;

typedef struct State {
    float f0;
    int w4;
    int w8;
} State;

typedef struct Obj {
    char pad_00[0x54];
    Cfg *cfg;
    State *state;
} Obj;

typedef struct Ent {
    char pad_00[0x24];
    unsigned int key_24;
    char pad_28[0x1C];
} Ent;

typedef struct Cell {
    char pad_00[0x40];
    Ent *ent;
    char pad_44[0x3C];
} Cell;

typedef struct Level {
    char pad_00[0x34];
    Ent *recs_34;
    unsigned int count_38;
    char pad_3C[8];
    Cell *cells_44;
    unsigned int ncell_48;
} Level;

extern Level *D_00206D90;
extern Obj *D_00207404;

extern int func_028290(void);
extern int func_1EB278(float f);
extern void func_07C660(void (*cb)(char *));
extern void func_155458(char *o);

static __inline__ Ent *FindRec(unsigned int key)
{
    unsigned int i;

    for (i = 0; i < D_00206D90->count_38; i++) {
        if (D_00206D90->recs_34[i].key_24 == key) {
            return &D_00206D90->recs_34[i];
        }
    }
    return 0;
}

int func_1551E8(Obj *o)
{
    Cfg *cfg;
    State *st;
    float f;
    unsigned int i;
    unsigned int n;
    unsigned int total;
    unsigned int each;
    unsigned int t1;
    Ent *e;
    unsigned int k;

    cfg = o->cfg;
    st = o->state;
    f = (float)cfg->w0;
    if (func_028290() != 0) {
        f = (float)cfg->w4;
    }
    t1 = func_1EB278(f * 0.3f);
    n = 0;
    for (i = 0; i < D_00206D90->ncell_48; i++) {
        e = D_00206D90->cells_44[i].ent;
        if (e != 0) {
            k = e->key_24;
            if (k == 0x114CD815U || k == 0x4109ABC7U) {
                n++;
            }
        }
    }
    st->f0 = f * 0.7f;
    if (n != 0) {
        each = t1 / n;
    } else {
        each = 0;
    }
    total = func_1EB278((float)each * 0.2f);
    st->w4 = each - total;
    st->w8 = total << 1;
    D_00207404 = o;
    func_07C660(func_155458);
    return FindRec(0x5B5510B3U) != 0;
}

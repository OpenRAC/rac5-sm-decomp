/* LEVEL_03:0x177F00 -- when the object's configuration entry names a usable target slot, arms the object (timers 100 and 50, record reset) and returns 1; otherwise returns 0. */
typedef struct {
    unsigned char b0;
    char pad01[3];
    int *w4;
} Target;

typedef struct {
    char pad00[0x0C];
    Target *target;
    char pad10[0x34 - 0x10];
} Entry;

typedef struct {
    char pad00[4];
    Entry *tab;
} Cfg;

typedef struct {
    unsigned short h0;
    unsigned char b2;
    char pad3;
    void *owner;
    int w8;
} Rec;

typedef struct {
    char pad00[0x40];
    Cfg *cfg;
    unsigned char b44;
    char pad45[0x58 - 0x45];
    Rec *rec;
    char pad5C[0x76 - 0x5C];
    unsigned char b76;
    unsigned char b77;
} Obj;

int func_177F00(Obj *o)
{
    Entry *e;
    Target *t;
    int *slot;
    Rec *rec;

    e = &o->cfg->tab[o->b44];
    rec = o->rec;
    slot = 0;
    t = e->target;
    if (t != 0 && t->b0 != 0) {
        if (*t->w4 == 0) {
            slot = t->w4 + 1;
        }
    }
    if (slot == 0) {
        return 0;
    }
    o->b77 = 100;
    o->b76 = 50;
    rec->b2 = 2;
    rec->owner = o;
    rec->h0 = 0xFFFF;
    rec->w8 = 0;
    return 1;
}

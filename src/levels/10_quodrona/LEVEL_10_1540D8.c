/* LEVEL_10:0x1540D8 -- placement copy of LEVEL_01_1555B8.c: scales a global factor by a table entry and the object's unsigned counts and passes the result on; 0 when the object has no table. */
typedef struct Link {
    char pad_00[0x34];
    float *table;
    float *fp;
} Link;

typedef struct Cfg {
    char pad_00[0x10];
    Link *link;
    char pad_14[0x30 - 0x14];
    unsigned int count;
} Cfg;

typedef struct Obj {
    char pad_00[0x40];
    Cfg *cfg;
} Obj;

typedef struct Rec {
    char pad_00[0x58];
    float *factor;
} Rec;

extern Rec *D_0021007C;
extern int D_00223780;
extern int func_027F58(void);
extern int func_1F42D0(float v);

int func_1540D8(Obj *o)
{
    float *table;
    float *fp;
    float factor;
    float entry;
    unsigned int found;

    fp = D_0021007C->factor;
    table = o->cfg->link->table;
    if (table != 0) {
        factor = *fp;
        entry = table[D_00223780];
        found = func_027F58();
        return func_1F42D0(factor * entry / (float)o->cfg->count * (float)found);
    }
    return 0;
}

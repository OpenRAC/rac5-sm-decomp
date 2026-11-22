/* LEVEL_01:0x1555B8 -- scales a global factor by a table entry and the object's unsigned counts and passes the result on; 0 when the object has no table. */
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

extern Rec *D_00207404;
extern int D_0021A7F0;
extern int func_028650(void);
extern int func_1EB278(float v);

int func_1555B8(Obj *o)
{
    float *table;
    float *fp;
    float factor;
    float entry;
    unsigned int found;

    fp = D_00207404->factor;
    table = o->cfg->link->table;
    if (table != 0) {
        factor = *fp;
        entry = table[D_0021A7F0];
        found = func_028650();
        return func_1EB278(factor * entry / (float)o->cfg->count * (float)found);
    }
    return 0;
}

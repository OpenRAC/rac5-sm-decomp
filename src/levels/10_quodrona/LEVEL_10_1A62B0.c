/* LEVEL_10:0x1A62B0 -- looks up a table entry by id, spawns an object for it, positions it and returns the object. */

typedef struct {
    char pad_00[0x24];
    unsigned int id;
    char pad_28[0x1C];
} Entry;

typedef struct {
    char pad_00[0x34];
    Entry *items;
    unsigned int count;
} Table;

typedef struct {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Params;

extern Table *D_0020F9F0;
extern Params *D_003A02E8;
extern char *func_07CB88(Entry *e, unsigned int id, int a, int b);
extern void func_081000(char *obj, Params *p, int a2, int a3, int t0, int t1, int t2, int t3, float f12, float f13, float f14, float f15);
extern void func_1A6400(char *obj);

static __inline__ void CopyVec(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ Entry *FindEntry(unsigned int key)
{
    Table *tbl;
    unsigned int i;

    tbl = D_0020F9F0;
    for (i = 0; i < tbl->count; i++) {
        if (tbl->items[i].id == key) {
            return &tbl->items[i];
        }
    }
    return 0;
}

char *func_1A62B0(int owner, float *pos, float scale)
{
    Entry *found;
    char *obj;
    Params *g;
    char *rec;

    found = FindEntry(0x445CD871);
    if (found == 0) {
        obj = 0;
    } else {
        obj = func_07CB88(found, 0x445CD871, 0, 0xFF);
    }
    if (obj) {
        g = D_003A02E8;
        if (g) {
            func_081000(obj, g, 0, 0, 0, 0, 0, 1, g->f_14, g->f_18, g->f_1C, g->f_20);
        }
        rec = *(char **)(obj + 0x58);
        *(int *)(rec + 0x4C) = owner;
        CopyVec((float *)(rec + 0x40), pos);
        *(float *)(rec + 0x50) = scale;
        func_1A6400(obj);
    }
    return obj;
}

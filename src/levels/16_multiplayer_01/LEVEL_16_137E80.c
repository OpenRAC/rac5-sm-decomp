/* LEVEL_16:0x137E80 -- initialises the object: clears the attached block, seeds its first float from the level's table row, sets the flag bit and starts the track; for the first three tiers it validates the record, sets the entry's rate and, when the probe succeeds, sets the field bits and runs the two follow-up steps; returns 1 on that path and 0 otherwise. */
extern void *memset(void *p, int c, unsigned long n);

typedef struct {
    float f0;
    char pad04[0x20 - 4];
} Row;

typedef struct {
    char pad00[0x10];
    char track[0x54];
    float f64;
} Aux;

typedef struct {
    char pad00[0x28];
    float rate;
    char pad2C[0x34 - 0x2C];
} Entry;

typedef struct {
    char pad00[4];
    Entry *entries;
} Cfg;

typedef struct {
    char pad00[0x30];
    float pos[3];
    char pad3C[4];
    Cfg *cfg;
    unsigned char idx;
    unsigned char kind;
    char pad46[0x54 - 0x46];
    void *w54;
    Aux *aux;
    char pad5C[0x64 - 0x5C];
    unsigned int flags;
    char pad68[0x78 - 0x68];
    unsigned int bits;
} Obj;

extern int D_001D04A0;
extern Row D_001CECD0[];

extern void func_012DD0(char *track, Obj *o, int a, int b);
extern int func_02D7E0(void *w, Obj *o);
extern int func_013A40(float *pos, int a, int b, float f);
extern void func_1385A0(Obj *o);
extern void func_1394D0(Obj *o, int a, int kind);

int func_137E80(Obj *o)
{
    Aux *aux = o->aux;
    void *w = o->w54;

    memset(aux, 0, 0x74);
    aux->f64 = D_001CECD0[D_001D04A0 - 0x10].f0;
    o->flags |= 0x1000;
    func_012DD0(aux->track, o, 1, 0x10);
    if (o->kind < 3) {
        if (func_02D7E0(w, o) == 1) {
            o->cfg->entries[o->idx].rate = 0.30000001192092896f;
            if (func_013A40(o->pos, 0, 1, 2.0f) != 0) {
                o->bits = (o->bits & 0xFFF0FFFF) | 0x20000;
                func_1385A0(o);
                func_1394D0(o, 0xFF, o->kind);
                return 1;
            }
        }
    }
    return 0;
}

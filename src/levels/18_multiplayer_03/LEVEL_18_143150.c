/* LEVEL_18:0x143150 -- placement copy of LEVEL_01_16AE60.c: spawns an object of a known type at a position and initializes its data block and a float field. */
typedef struct {
    float x, y, z;
} Vec3_t;

typedef struct {
    char pad0[0x24];
    unsigned int key;
    char pad1[0x44 - 0x28];
} Def_t;

typedef struct {
    char pad0[0x34];
    Def_t *defs;
    unsigned int count;
} Reg_t;

typedef struct {
    int f00;
    char pad04[0x14];
    float f18;
    char pad1C[4];
    int f20;
    float f24;
} Data_t;

typedef struct {
    char pad0[0x30];
    Vec3_t pos;
    char pad1[0x58 - 0x3C];
    Data_t *data;
    char pad2[0x70 - 0x5C];
    float f70;
} Obj_t;

extern Reg_t *D_001B5D20;
extern Obj_t *func_06EEF8(void *def, unsigned int key, int a, int b);

static inline Def_t *FindDef(Reg_t *r, unsigned int key)
{
    unsigned i;
    for (i = 0; i < r->count; i++) {
        if (r->defs[i].key == key)
            return &r->defs[i];
    }
    return 0;
}

Obj_t *func_143150(Vec3_t *v, int a, int c, float f0, float f1, float f2)
{
    Def_t *d = FindDef(D_001B5D20, 0x5495B11A);
    Obj_t *o;

    if (d == 0)
        o = 0;
    else
        o = func_06EEF8(d, 0x5495B11A, 0, 0xFF);
    if (o) {
        Data_t *dt;
        Vec3_t *p = &o->pos;
        p->x = v->x;
        p->y = v->y;
        p->z = v->z;
        dt = o->data;
        dt->f00 = c;
        dt->f18 = f1;
        dt->f20 = a;
        dt->f24 = f2;
        o->f70 = f0;
    }
    return o;
}

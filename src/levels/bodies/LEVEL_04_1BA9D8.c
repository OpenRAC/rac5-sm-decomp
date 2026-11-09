/* LEVEL_04:0x1BA9D8 -- placement copy of LEVEL_01_1AE608.c: spawns an object of a known type and initializes it. */
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
    char pad0[0x98];
    int f98;
    int f9C;
    int fA0;
} Data_t;

typedef struct {
    char pad0[0x30];
    Vec3_t pos;
    char pad1[0x58 - 0x3C];
    Data_t *data;
} Obj_t;

extern Reg_t *D_002201B0;
extern Obj_t *func_07F9D0(void *def, unsigned int key, int a, int b);

static inline Def_t *FindDef(Reg_t *r, unsigned int key)
{
    unsigned i;
    for (i = 0; i < r->count; i++) {
        if (r->defs[i].key == key)
            return &r->defs[i];
    }
    return 0;
}

Obj_t *func_1BA9D8(int a, Vec3_t *v, int c)
{
    Def_t *d = FindDef(D_002201B0, 0xAE41AE83);
    Obj_t *o;

    if (d == 0)
        o = 0;
    else
        o = func_07F9D0(d, 0xAE41AE83, 0, 1);
    if (o) {
        Data_t *dt = o->data;
        Vec3_t *p = &o->pos;
        dt->fA0 = c;
        dt->f98 = a;
        dt->f9C = (int)v;
        p->x = v->x;
        p->y = v->y;
        p->z = v->z;
    }
    return o;
}

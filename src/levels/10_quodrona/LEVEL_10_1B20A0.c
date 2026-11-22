/* LEVEL_10:0x1B20A0 -- spawns the object of a known type: finds the definition in the registry, creates the object, stores the request id, the position and the kind byte into it and runs its setup; returns the object or zero. */
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
    char pad0[0x7EC];
    int id;
    Vec3_t pos;
} Data_t;

typedef struct {
    char pad0[0x47];
    unsigned char kind;
    char pad1[0x58 - 0x48];
    Data_t *data;
} Obj_t;

extern Reg_t *D_0020F9F0;
extern Obj_t *func_07CB88(void *def, unsigned int key, int a, int b);
extern void func_1B3768(Obj_t *o);

static __inline__ Def_t *FindDef(Reg_t *r, unsigned int key)
{
    unsigned i;
    for (i = 0; i < r->count; i++) {
        if (r->defs[i].key == key)
            return &r->defs[i];
    }
    return 0;
}

Obj_t *func_1B20A0(int id, Vec3_t *v, int kind)
{
    Def_t *d = FindDef(D_0020F9F0, 0xCE7DCD01);
    Obj_t *o;

    if (d == 0)
        o = 0;
    else
        o = func_07CB88(d, 0xCE7DCD01, 0, 0xFF);
    if (o) {
        Data_t *dt = o->data;
        Vec3_t *p = &dt->pos;

        dt->id = id;
        dt->pos.x = v->x;
        p->y = v->y;
        p->z = v->z;
        o->kind = kind;
        func_1B3768(o);
    }
    return o;
}

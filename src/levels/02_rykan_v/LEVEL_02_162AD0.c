/* LEVEL_02:0x162AD0 -- spawns the tagged helper object from the global table for the object's linked record, wires it to the owner and copies the record's anchor position into it, then clears the owner's timer. */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Def {
    char pad[0x24];
    unsigned int key;
    char pad1[0x44 - 0x28];
} Def;

typedef struct Reg {
    char pad0[0x34];
    Def *defs;
    unsigned int count;
} Reg;

typedef struct Anchor {
    char pad_00[4];
    Vec3 *pos_04;
} Anchor;

typedef struct Link {
    char pad_00[4];
    Anchor *anchor_04;
} Link;

typedef struct Data {
    Anchor *a_00;
    char pad_04[0x34 - 4];
    void *owner_34;
} Data;

typedef struct Helper {
    char pad_00[0x30];
    Vec3 pos_30;
    char pad_3C[0x54 - 0x3C];
    Data *data_54;
} Helper;

typedef struct Obj {
    char pad_00[0x54];
    Link *link_54;
    char pad_58[0x70 - 0x58];
    int timer_70;
} Obj;

extern Reg *D_0021BD50;
extern char D_0022CD40[];
extern Helper *func_082E40(Def *d, unsigned int key, char *tbl, int n);

static __inline__ Def *FindDef(Reg *r, unsigned int key)
{
    unsigned i;
    for (i = 0; i < r->count; i++) {
        if (r->defs[i].key == key)
            return &r->defs[i];
    }
    return 0;
}

static __inline__ Helper *Spawn(unsigned int key, char *tbl)
{
    Def *d = FindDef(D_0021BD50, key);

    if (d == 0)
        return 0;
    return func_082E40(d, key, tbl, 0xFF);
}

void func_162AD0(Obj *o)
{
    Link *link;
    Helper *h;
    Data *dt;
    Anchor *a;
    Vec3 *v;
    Vec3 *p;

    link = o->link_54;
    h = Spawn(0xEE3F0A2D, D_0022CD40);
    dt = h->data_54;
    a = link->anchor_04;
    p = &h->pos_30;
    dt->owner_34 = o;
    dt->a_00 = a;
    v = link->anchor_04->pos_04;
    p->x = v->x;
    p->y = v->y;
    p->z = v->z;
    o->timer_70 = 0;
}

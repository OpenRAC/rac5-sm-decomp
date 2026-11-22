/* USA LEVEL_02.REL:0x162AD0, 236-byte candidate (21 November 2026).
 * Measured pinned: 23 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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

void func_162AD0(Obj *o)
{
    Link *link;
    Def *d;
    Helper *h;
    Data *dt;
    Vec3 *v;
    Vec3 *p;
    char *tbl;

    link = o->link_54;
    tbl = D_0022CD40;
    d = FindDef(D_0021BD50, 0xEE3F0A2D);
    if (d == 0)
        h = 0;
    else
        h = func_082E40(d, 0xEE3F0A2D, tbl, 0xFF);
    dt = h->data_54;
    dt->owner_34 = o;
    dt->a_00 = link->anchor_04;
    v = link->anchor_04->pos_04;
    p = &h->pos_30;
    p->x = v->x;
    p->y = v->y;
    p->z = v->z;
    o->timer_70 = 0;
}

/* LEVEL_19:0x15C038 -- finds a table slot by id, then returns the active entry of that slot nearest to the object in the ground plane. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad_00[0xC];
    unsigned char b_0C;
} Link;

typedef struct {
    Vec3 pos;
    char pad_0C[0x1C];
    Link *link_28;
    char pad_2C[8];
    unsigned int flags_34;
    char pad_38[0x18];
} Sub;

typedef struct {
    char pad_00[0x30];
    Sub sub_30;
} Ent;

typedef struct {
    char pad_00[0xC];
    Ent *ents_0C;
    char pad_10[0x14];
    unsigned int id_24;
    char pad_28[8];
    unsigned int count_30;
    char pad_34[0x10];
} Slot;

typedef struct {
    char pad_00[0x34];
    Slot *slots_34;
    unsigned int count_38;
} Table;

typedef struct {
    char pad_00[0x30];
    Vec3 pos_30;
} Obj;

extern Table *D_001B5A20;

static __inline__ Slot *findSlot(Table *t, unsigned int id)
{
    unsigned int i;

    for (i = 0; i < t->count_38; i++) {
        if (t->slots_34[i].id_24 == id) {
            return &t->slots_34[i];
        }
    }
    return 0;
}

Ent *func_15C038(Obj *o)
{
    Slot *found;
    Ent *e;
    Ent *end;
    Ent *best;
    Sub *s;
    Vec3 loc;
    Vec3 d;
    Vec3 *p;
    float bestd;
    float dist;

    found = findSlot(D_001B5A20, 0x39124AB1);
    if (found == 0) {
        return 0;
    }
    p = &o->pos_30;
    loc.x = p->x;
    loc.y = p->y;
    loc.z = p->z;
    bestd = 1.0e37f;
    best = 0;
    end = found->ents_0C + found->count_30;
    for (e = found->ents_0C; e != end; e++) {
        s = &e->sub_30;
        if ((s->flags_34 & 7) == 1 && s->link_28->b_0C != 0) {
            d.x = loc.x - s->pos.x;
            d.y = loc.y - s->pos.y;
            d.z = loc.z - s->pos.z;
            dist = d.x * d.x + d.z * d.z;
            if (dist < bestd) {
                bestd = dist;
                best = e;
            }
        }
    }
    return best;
}

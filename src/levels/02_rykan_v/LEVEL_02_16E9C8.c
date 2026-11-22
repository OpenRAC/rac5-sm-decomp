/* LEVEL_02:0x16E9C8 -- three-state controller: state 0 creates the two hashed effects from the shared table and stores them in the object's slots, state 1 waits for the parent's flag or state byte to change, state 2 runs the finishing step. */
typedef struct {
    char pad00[0x24];
    unsigned int hash;
    char pad28[0x44 - 0x28];
} Item;

typedef struct {
    char pad00[0x34];
    Item *items;
    unsigned int count;
} Table;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x64 - 0x46];
    unsigned int flags;
} Parent;

typedef struct {
    void *slot[2];
    char pad08[4];
    Parent *parent;
} Slots;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x54 - 0x46];
    Slots *slots;
} Obj;

extern Table *D_0021BD50;
extern unsigned int D_00234E88[2];
extern int D_00234E98[2];

extern void *func_082E40(Item *item, int variant, Obj *owner, int alpha);
extern void func_16EB58(Obj *o);

static __inline__ Item *Find(unsigned int hash)
{
    unsigned int i;

    for (i = 0; i < D_0021BD50->count; i++) {
        if (D_0021BD50->items[i].hash == hash) {
            return &D_0021BD50->items[i];
        }
    }
    return 0;
}

static __inline__ void *Make(unsigned int hash, int variant, Obj *owner)
{
    Item *item;

    item = Find(hash);
    if (item == 0) {
        return 0;
    }
    return func_082E40(item, variant, owner, 0xFF);
}

void func_16E9C8(Obj *o)
{
    Parent *p;
    Slots *slots;
    unsigned int i;

    if (o->state == 0) {
        slots = o->slots;
        for (i = 0; i < 2; i++) {
            slots->slot[i] = Make(D_00234E88[i], D_00234E98[i], o);
        }
        o->state = 1;
    } else if (o->state == 1) {
        p = o->slots->parent;
        if ((p->flags & 1) == 0 || p->state != 0) {
            o->state = 2;
        }
    } else if (o->state == 2) {
        func_16EB58(o);
    }
}

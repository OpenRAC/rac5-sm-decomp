/* LEVEL_01:0x1B9C20 -- frees the object's slot entry (decrementing the owner's live counter if it was in use), releases its pool handle and runs the shared follow-up. */
typedef struct {
    char pad00[0x68];
} Pool;

struct Ent {
    char pad00[0x18];
    unsigned char b18;
    char pad19[3];
};

struct Rec {
    struct Ent ents[12];
    char pad150[8];
    unsigned char b158;
};

struct Owner {
    char pad00[0x58];
    struct Rec *rec;
};

struct Link {
    char pad00[0x2C];
    struct Owner *owner;
};

struct Slot {
    unsigned short h;
    char pad2;
    unsigned char b3;
    char pad4[0x3C];
    void *p40;
    char pad44[0x1C];
    unsigned char b60;
};

struct Obj {
    char pad00[0x45];
    unsigned char b45;
    char pad46[0xE];
    struct Link *link;
    struct Slot *slot;
    int w5C;
};

extern Pool D_0022F6F8[];
extern void *memset(void *p, int v, unsigned int n);
extern void func_095858(Pool *pool, unsigned int index);
extern void func_019530(struct Obj *o);
extern void func_1BEDA8(void *p, struct Obj *o);

static __inline__ void Release(Pool *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_095858(pool, *h);
        *h = 0xFFFF;
    }
}

void func_1B9C20(struct Obj *o)
{
    struct Slot *slot;
    struct Link *link;
    struct Rec *rec;
    struct Ent *e;

    link = o->link;
    slot = o->slot;
    rec = link->owner->rec;
    e = &rec->ents[slot->b60];
    if (e->b18 & 1) {
        rec->b158--;
    }
    memset(e, 0, 0x1C);
    Release(&D_0022F6F8[slot->b3], &slot->h);
    if (o->b45 == 0x15) {
        if (slot->p40 != 0) {
            func_1BEDA8(slot->p40, o);
        }
    }
    func_019530(o);
    if (o->w5C == 0) {
        o->w5C = 1;
    }
}

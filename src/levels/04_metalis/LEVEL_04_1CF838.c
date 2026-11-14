/* LEVEL_04:0x1CF838 -- placement copy of LEVEL_01_1BC978.c: frees the object's slot entry (decrementing the owner's live counter if it was in use), releases its pool handle and runs the shared follow-up. */
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
    struct Owner *owner;
};

struct Slot {
    unsigned short h;
    char pad2;
    unsigned char b3;
    char pad4[0x74];
    unsigned char b78;
};

struct Obj {
    char pad00[0x54];
    struct Link *link;
    struct Slot *slot;
};

extern Pool D_00249EF8[];
extern void *memset(void *p, int v, unsigned int n);
extern void func_098950(Pool *pool, unsigned int index);
extern void func_019290(struct Obj *o);

static __inline__ void Release(Pool *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_098950(pool, *h);
        *h = 0xFFFF;
    }
}

void func_1CF838(struct Obj *o)
{
    struct Slot *slot;
    struct Link *link;
    struct Rec *rec;
    struct Ent *e;

    link = o->link;
    slot = o->slot;
    rec = link->owner->rec;
    e = &rec->ents[slot->b78];
    if (e->b18 & 1) {
        rec->b158--;
    }
    memset(e, 0, 0x1C);
    Release(&D_00249EF8[slot->b3], &slot->h);
    func_019290(o);
}

/* LEVEL_03:0x1D1AE8 -- frees the object's slot entry (when the link allows it, decrementing the owner's live counter if it was in use), releases its pool handle and runs the shared follow-up. */
typedef struct {
    float v[2];
    unsigned short pad8;
    unsigned short fA;
    unsigned short *next;
} Node;

typedef struct {
    unsigned short f0;
    unsigned short f2;
    unsigned short f4;
    unsigned short f6;
} Entry;

typedef struct {
    char pad60[0x60];
    Entry *entries;
    Node *nodes;
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
    char pad30[0x22];
    unsigned char b52;
};

struct Slot {
    unsigned short h;
    char pad2;
    unsigned char b3;
    char pad4[0x76];
    unsigned char b7A;
};

struct Obj {
    char pad00[0x54];
    struct Link *link;
    struct Slot *slot;
};

struct P19338 {
    char pad0[0x5C];
    int f5C;
};

extern Pool D_0024A578[];
extern void *memset(void *p, int v, unsigned int n);
extern void func_095488(Pool *o, unsigned int index);
extern void func_019338(struct P19338 *p);

static __inline__ void Release(Pool *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_095488(pool, *h);
        *h = 0xFFFF;
    }
}

void func_1D1AE8(struct Obj *o)
{
    struct Link *link;
    struct Slot *slot;
    struct Rec *rec;
    struct Ent *e;

    link = o->link;
    slot = o->slot;
    if (link->b52 == 0) {
        rec = link->owner->rec;
        e = &rec->ents[slot->b7A];
        if (e->b18 & 1) {
            rec->b158--;
        }
        memset(e, 0, 0x1C);
    }
    Release(&D_0024A578[slot->b3], &slot->h);
    func_019338((struct P19338 *)o);
}

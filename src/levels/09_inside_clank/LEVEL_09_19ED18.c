/* LEVEL_09:0x19ED18 -- frees the object's slot entry when it has one (decrementing the owner's live counter if it was in use), clears the attached nodes, releases its pool handle and runs the shared follow-up. */
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
    char pad000[0x158];
    unsigned char b158;
    char pad159;
    unsigned char b15A;
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
    char pad4[0xA6];
    unsigned char bAA;
};

struct Obj {
    char pad00[0x54];
    struct Link *link;
    struct Slot *slot;
};

struct P18998 {
    char pad0[0x5C];
    int f5C;
};

extern Pool D_00216E78[];
extern void *memset(void *p, int v, unsigned int n);
extern void func_091FB0(Pool *o, unsigned int index);
extern void func_1B5FB0(int unused, int *p);
extern void func_018998(struct P18998 *p);

static __inline__ void Release(Pool *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_091FB0(pool, *h);
        *h = 0xFFFF;
    }
}

void func_19ED18(struct Obj *o)
{
    struct Slot *slot;
    struct Link *link;
    struct Rec *rec;
    struct Ent *e;

    link = o->link;
    slot = o->slot;
    if (slot->bAA != 0xFF) {
        link->owner->rec->b15A = 0;
        rec = link->owner->rec;
        e = &((struct Ent *)rec)[slot->bAA];
        if (e->b18 & 1) {
            rec->b158--;
        }
        memset(e, 0, 0x1C);
    }
    func_1B5FB0((int)o, (int *)((char *)slot + 0x58));
    Release(&D_00216E78[slot->b3], &slot->h);
    func_018998((struct P18998 *)o);
}

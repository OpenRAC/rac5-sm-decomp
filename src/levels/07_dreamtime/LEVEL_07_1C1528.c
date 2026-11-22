/* LEVEL_07:0x1C1528 -- frees the object's slot entry when it has one (decrementing the owner's live counter if it was in use), clears the attached nodes, releases its pool handle and runs the shared follow-up. */
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
};

struct Slot {
    unsigned short h;
    char pad2;
    unsigned char b3;
    char pad4[0xA4];
    unsigned char bAC;
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

extern Pool D_00244FF8[];
extern void *memset(void *p, int v, unsigned int n);
extern void func_0976E0(Pool *o, unsigned int index);
extern void func_1DC000(int unused, int *p);
extern void func_019C98(struct P19338 *p);

static __inline__ void Release(Pool *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_0976E0(pool, *h);
        *h = 0xFFFF;
    }
}

void func_1C1528(struct Obj *o)
{
    struct Slot *slot;
    struct Link *link;
    struct Rec *rec;
    struct Ent *e;

    link = o->link;
    slot = o->slot;
    if (slot->bAC != 0xFF) {
        rec = link->owner->rec;
        e = &rec->ents[slot->bAC];
        if (e->b18 & 1) {
            rec->b158--;
        }
        memset(e, 0, 0x1C);
        slot->bAC = 0xFF;
    }
    func_1DC000((int)o, (int *)((char *)slot + 0x58));
    Release(&D_00244FF8[slot->b3], &slot->h);
    func_019C98((struct P19338 *)o);
}

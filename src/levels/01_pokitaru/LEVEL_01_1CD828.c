/* LEVEL_01:0x1CD828 -- retires a record: swap-removes its entry from the group, drops its links, marks its pool node and pushes it on the free list. */
typedef struct Entry {
    unsigned short a;
    char pad2;
    unsigned char idx;
    char rest[12];
} Entry;

typedef struct Group {
    char pad0[0xB0];
    Entry *entries;
    int count;
    char pad1[0xBC - 0xB8];
} Group;

typedef struct PoolSlot {
    char pad60[0x60];
    void *entries;
    char *nodes;
} PoolSlot;

typedef struct Slot {
    unsigned short handle;
    char pad_02;
    unsigned char pool;
} Slot;

typedef struct Rec {
    char pad0[0x44];
    unsigned char group;
    char pad1[0x4C - 0x45];
    Entry *entry;
    char pad2[0x58 - 0x50];
    Slot *slot;
    char pad3[0x6C - 0x5C];
    struct Rec *next;
    char pad4[0x78 - 0x70];
    unsigned char flags;
    char pad5[0x80 - 0x79];
} Rec;

typedef struct Table {
    char pad0[0xC];
    Rec *recs;
} Table;

typedef struct Pool {
    char pad0[4];
    Table *table;
    Group *groups;
    char pad1[0x40 - 0xC];
    Rec *head;
} Pool;

extern PoolSlot D_0022F6F8[];
extern void func_095858(PoolSlot *o, unsigned int index);
extern void func_1CD6F0(Rec *r);

static __inline__ void Release(PoolSlot *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_095858(pool, *h);
        *h = 0xFFFF;
    }
}

void func_1CD828(Pool *p, Rec *r)
{
    Entry *e;
    Entry *last;
    Group *g;
    Rec *recs;
    unsigned char idx;
    Slot *slot;
    unsigned short *w;
    int n;

    e = r->entry;
    if (e == 0) {
        if ((r->flags & 8) == 0) {
            Release(&D_0022F6F8[r->slot->pool], &r->slot->handle);
        }
        return;
    }
    recs = p->table->recs;
    g = &p->groups[r->group];
    n = g->count - 1;
    last = g->entries + n;
    g->count = n;
    if (e != last) {
        idx = last->idx;
        *e = *last;
        {
            Rec *q = recs + idx;
            q->entry = e;
        }
    }
    if (r->flags & 2) {
        func_1CD6F0(r);
        r->flags = r->flags & 0xF9;
    }
    r->entry = 0;
    slot = r->slot;
    if (slot->handle != 0xFFFF) {
        w = (unsigned short *)(D_0022F6F8[slot->pool].nodes + slot->handle * 16 + 8);
        *w = *w | 0x28;
    }
    r->flags = r->flags | 8;
    r->next = p->head;
    p->head = r;
}

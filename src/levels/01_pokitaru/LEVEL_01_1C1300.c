/* LEVEL_01:0x1C1300 -- gives back the pool entry held by the attached slot, clears the linked owner's matching 0x1C-byte record (lowering its counter when the record was flagged) and runs func_019530. */
typedef struct {
    char pad60[0x60];
    void *entries;
    void *nodes;
} Pool;

typedef struct {
    char pad00[0x10];
    unsigned short handle;
    char pad12;
    unsigned char pool;
    char pad14[0x84 - 0x14];
    unsigned char index;
} Slot;

typedef struct {
    char pad00[0x58];
    char *table;
} Target;

typedef struct {
    char pad00[0x30];
    Target *target;
} Link;

typedef struct {
    char pad00[0x54];
    Link *link;
    Slot *slot;
} Owner;

struct P19338;

extern Pool D_0022F6F8[];
extern void func_095858(Pool *o, unsigned int index);
extern void func_019530(struct P19338 *p);
extern void *memset(void *p, int c, unsigned int n);

static __inline__ void Release(Pool *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_095858(pool, *h);
        *h = 0xFFFF;
    }
}

void func_1C1300(Owner *o)
{
    Slot *slot = o->slot;
    Link *link = o->link;
    Target *t;
    char *rec;

    Release(&D_0022F6F8[slot->pool], &slot->handle);
    t = link->target;
    if (t != 0) {
        rec = t->table + slot->index * 0x1C;
        if (rec[0x18] & 1)
            t->table[0x158]--;
        memset(rec, 0, 0x1C);
    }
    func_019530((struct P19338 *)o);
}

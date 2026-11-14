/* LEVEL_01:0x159B90 -- gives back the pool entry held by the object's slot, then clears the table entry the slot selects (dropping a counter when it was flagged) and runs a follow-up helper. */
typedef struct { char pad68[0x68]; } Pool;

typedef struct {
    char pad00[0x158];
    unsigned char count;
} Block;

typedef struct {
    char pad00[0x18];
    unsigned char flags;
    char pad19[3];
} Cell;

typedef struct {
    char pad00[0x20];
    unsigned short handle;
    char pad22;
    unsigned char pool;
    char pad24[0x5C];
    unsigned char index;
} Slot;

typedef struct {
    char pad00[0x58];
    Block *block;
} Table;

typedef struct {
    char pad00[0x38];
    Table *table;
} Link;

typedef struct {
    char pad00[0x54];
    Link *link;
    Slot *slot;
} Obj;

extern Pool D_0022F6F8[];
extern void func_095858(Pool *o, unsigned int index);
extern void func_019530(Obj *o);
extern void *memset(void *p, int c, unsigned n);

static __inline__ void Release(Pool *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_095858(pool, *h);
        *h = 0xFFFF;
    }
}

void func_159B90(Obj *o)
{
    Link *link = o->link;
    Slot *slot = o->slot;

    Release(&D_0022F6F8[slot->pool], &slot->handle);
    if (link->table != 0) {
        Block *block = link->table->block;
        Cell *cell = (Cell *)((char *)block + slot->index * 0x1C);

        if (cell->flags & 1) {
            block->count--;
        }
        memset(cell, 0, 0x1C);
    }
    func_019530(o);
}

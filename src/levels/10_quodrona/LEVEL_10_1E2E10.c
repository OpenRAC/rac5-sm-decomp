/* LEVEL_10:0x1E2E10 -- gives back the pool entry held by the object's slot, then clears the table cell the slot selects (dropping a counter when it was flagged) and runs a follow-up helper. */
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
    char pad00[0x58];
    Block *block;
} Table;

typedef struct {
    char pad00[0x30];
    Table *table;
} Link;

typedef struct {
    char pad00[4];
    unsigned short handle;
    char pad06;
    unsigned char pool;
    char pad08[0x61];
    unsigned char index;
} Slot;

typedef struct {
    char pad00[0x54];
    Link *link;
    Slot *slot;
} Obj;

extern Pool D_00238AF8[];
extern void func_095BC8(Pool *o, unsigned int index);
extern void func_018BC0(Obj *o);
extern void *memset(void *p, int c, unsigned n);

static __inline__ void Release(Pool *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_095BC8(pool, *h);
        *h = 0xFFFF;
    }
}

void func_1E2E10(Obj *o)
{
    Link *link = o->link;
    Slot *slot = o->slot;
    Block *block;
    Cell *cell;

    Release(&D_00238AF8[slot->pool], &slot->handle);
    block = link->table->block;
    cell = (Cell *)((char *)block + slot->index * 0x1C);
    if (cell->flags & 1) {
        block->count--;
    }
    memset(cell, 0, 0x1C);
    func_018BC0(o);
}

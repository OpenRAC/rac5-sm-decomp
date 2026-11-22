/* LEVEL_08:0x198B98 -- when the object is in state 12 calls a helper, gives back the pool entry held by its slot, then clears the table cell the slot selects (dropping a counter when it was flagged) and runs a follow-up helper. */
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
    char pad00[0x2C];
    Table *table;
} Link;

typedef struct {
    unsigned short handle;
    char pad02;
    unsigned char pool;
    char pad04[0x42];
    unsigned char index;
} Slot;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0xE];
    Link *link;
    Slot *slot;
} Obj;

extern Pool D_0027E978[];
extern void func_09D778(Pool *o, unsigned int index);
extern void func_019F18(Obj *o);
extern void func_21D890(float f);
extern void *memset(void *p, int c, unsigned n);

static __inline__ void Release(Pool *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_09D778(pool, *h);
        *h = 0xFFFF;
    }
}

void func_198B98(Obj *o)
{
    Link *link;
    Slot *slot;
    Block *block;
    Cell *cell;

    if (o->state == 12) {
        func_21D890(0.10000000149011612f);
    }
    slot = o->slot;
    link = o->link;
    Release(&D_0027E978[slot->pool], &slot->handle);
    block = link->table->block;
    cell = (Cell *)((char *)block + slot->index * 0x1C);
    if (cell->flags & 1) {
        block->count--;
    }
    memset(cell, 0, 0x1C);
    func_019F18(o);
}

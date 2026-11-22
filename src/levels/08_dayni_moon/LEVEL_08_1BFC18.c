/* LEVEL_08:0x1BFC18 -- when the object is in state 0x15 and its link is not ready, plays the start sound, then gives back the pool entry held by the object's slot, clears the table cell the slot selects (dropping a counter when it was flagged) and runs a follow-up helper. */
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
    char pad34[0x3D - 0x34];
    unsigned char ready_3D;
} Link;

typedef struct {
    unsigned short handle;
    char pad02;
    unsigned char pool;
    char pad04[0x4C - 4];
    unsigned char index;
} Slot;

typedef struct {
    char pad00[0x45];
    unsigned char kind_45;
    char pad46[0x54 - 0x46];
    Link *link;
    Slot *slot;
} Obj;

extern Pool D_0027E978[];
extern void func_09D778(Pool *o, unsigned int index);
extern void func_019F18(Obj *o);
extern void func_21D890(float v);
extern void *memset(void *p, int c, unsigned n);

static __inline__ void Release(Pool *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_09D778(pool, *h);
        *h = 0xFFFF;
    }
}

void func_1BFC18(Obj *o)
{
    Link *link = o->link;
    Slot *slot;
    Block *block;
    Cell *cell;

    if (o->kind_45 == 0x15 && link->ready_3D == 0)
        func_21D890(0.6f);
    slot = o->slot;
    Release(&D_0027E978[slot->pool], &slot->handle);
    block = link->table->block;
    cell = (Cell *)((char *)block + slot->index * 0x1C);
    if (cell->flags & 1) {
        block->count--;
    }
    memset(cell, 0, 0x1C);
    func_019F18(o);
}

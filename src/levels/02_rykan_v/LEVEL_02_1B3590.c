/* LEVEL_02:0x1B3590 -- gives back the slot's pool entry, clears its grid record and detaches the owner. */
typedef struct {
    char pad60[0x60];
    void *entries;
    void *nodes;
} Obj;

typedef struct {
    char pad_00[0x18];
    unsigned char flags;
    char pad_19[3];
} Rec;

typedef struct {
    Rec rec[12];
    char pad_150[8];
    unsigned char count;
} Grid;

typedef struct {
    char pad_00[0x58];
    Grid *grid;
} Cell;

typedef struct {
    char pad_00[0x30];
    Cell *cell;
} Mgr;

typedef struct {
    char pad_00[0x1C];
    unsigned short handle;
    char pad_1E;
    unsigned char pool;
    char pad_20[0x34];
    unsigned char index;
} Slot;

typedef struct {
    char pad_00[0x54];
    Mgr *mgr;
    Slot *slot;
} Owner;

extern Obj D_00246BF8[];
extern void func_09BF28(Obj *o, unsigned int index);
extern void func_019FB8(Owner *o);
extern void *memset(void *p, int c, unsigned int n);

static __inline__ void Release(Obj *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_09BF28(pool, *h);
        *h = 0xFFFF;
    }
}

void func_1B3590(Owner *o)
{
    Slot *slot = o->slot;
    Mgr *mgr = o->mgr;
    Grid *grid;
    Rec *rec;

    Release(&D_00246BF8[slot->pool], &slot->handle);
    grid = mgr->cell->grid;
    rec = &grid->rec[slot->index];
    if (rec->flags & 1) {
        grid->count--;
    }
    memset(rec, 0, sizeof(Rec));
    func_019FB8(o);
}

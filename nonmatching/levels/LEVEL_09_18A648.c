/* USA LEVEL_09.REL:0x18A648, 308-byte candidate (21 November 2026).
 * Measured pinned: 10 differing words; first difference at 0x34.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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
    Table *table_2C;
    char pad30[0x64 - 0x30];
    unsigned char cell_64;
    char pad65[2];
    unsigned char has_67;
} Rec;

typedef struct {
    unsigned short handle;
    char pad02;
    unsigned char pool;
    char pad04[0x28 - 4];
    int handles[1];
} Slot;

typedef struct {
    char pad00[0x54];
    Rec *rec;
    Slot *slot;
} Obj;

extern Pool D_00216E78[];
extern unsigned int D_0020D87C;
extern int D_001E0198;
extern void func_091FB0(Pool *p, unsigned int index);
extern void func_0940F0(int handle);
extern void func_018998(Obj *o);
extern void *memset(void *p, int c, unsigned n);

static __inline__ void Release(Pool *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_091FB0(pool, *h);
        *h = 0xFFFF;
    }
}

void func_18A648(Obj *o)
{
    Rec *rec = o->rec;
    Slot *slot = o->slot;
    Block *block;
    Cell *cell;
    unsigned int i;
    unsigned int n;
    unsigned int cnt;
    int *p;

    if (rec->cell_64 != 0xFF) {
        block = rec->table_2C->block;
        cell = (Cell *)((char *)block + rec->cell_64 * 0x1C);
        if (cell->flags & 1) {
            block->count--;
        }
        memset(cell, 0, 0x1C);
    }
    if (rec->has_67 != 0 && (cnt = D_0020D87C) != 0) {
        n = cnt;
        p = slot->handles;
        for (i = 0; i < n; i++, p++) {
            if (*p != 0) {
                if (*p == D_001E0198)
                    D_001E0198 = 0;
                else
                    func_0940F0(*p);
                *p = 0;
            }
        }
    }
    Release(&D_00216E78[slot->pool], &slot->handle);
    func_018998(o);
}

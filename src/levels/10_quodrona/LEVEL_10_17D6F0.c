/* LEVEL_10:0x17D6F0 -- placement copy of LEVEL_03_1791D8.c: sets two flag bits on the owner, gives back the pool entry held by its slot and marks the slot as empty. */
typedef struct {
    char pad68[0x68];
} Pool;

typedef struct {
    unsigned short handle;
    char pad_02;
    unsigned char pool;
} Slot;

typedef struct {
    char pad_00[0x58];
    Slot *slot;
    char pad_5C[8];
    unsigned int flags;
} Owner;

extern Pool D_00238AF8[];
extern void func_095BC8(Pool *o, unsigned int index);

static __inline__ void Release(Pool *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_095BC8(pool, *h);
        *h = 0xFFFF;
    }
}

void func_17D6F0(Owner *o)
{
    Slot *slot = o->slot;

    o->flags |= 0x30;
    Release(&D_00238AF8[slot->pool], &slot->handle);
}

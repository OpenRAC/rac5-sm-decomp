/* LEVEL_17:0x16A5D0 -- gives back the pool entry held by the attached slot and marks the slot as empty. */
typedef struct {
    char pad_00[0xC];
    unsigned short handle;
    char pad_0E;
    unsigned char pool;
} Slot;

typedef struct {
    char pad_00[0x58];
    Slot *slot;
} Owner;

typedef struct {
    char pad_00[0x68];
} Pool;

extern Pool D_001CF6F8[];
extern void func_086E80(Pool *pool, unsigned int index);

static __inline__ void Release(Pool *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_086E80(pool, *h);
        *h = 0xFFFF;
    }
}

void func_16A5D0(Owner *o)
{
    Slot *slot = o->slot;

    Release(&D_001CF6F8[slot->pool], &slot->handle);
}

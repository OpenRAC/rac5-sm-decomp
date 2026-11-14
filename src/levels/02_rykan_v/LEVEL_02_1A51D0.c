/* LEVEL_02:0x1A51D0 -- gives back the pool entry held by the attached slot, marks the slot empty and runs a follow-up helper on the object. */
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
} Owner;

extern Pool D_00246BF8[];
extern void func_09BF28(Pool *o, unsigned int index);
extern void func_019FB8(Owner *o);

static __inline__ void Release(Pool *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_09BF28(pool, *h);
        *h = 0xFFFF;
    }
}

void func_1A51D0(Owner *o)
{
    Slot *slot = o->slot;

    Release(&D_00246BF8[slot->pool], &slot->handle);
    func_019FB8(o);
}

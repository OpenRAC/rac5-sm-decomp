/* LEVEL_03:0x16DEF0 -- placement copy of LEVEL_02_1A51D0.c: gives back the pool entry held by the attached slot, marks the slot empty and runs a follow-up helper on the object. */
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

extern Pool D_0024A578[];
extern void func_095488(Pool *o, unsigned int index);
extern void func_019338(Owner *o);

static __inline__ void Release(Pool *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_095488(pool, *h);
        *h = 0xFFFF;
    }
}

void func_16DEF0(Owner *o)
{
    Slot *slot = o->slot;

    Release(&D_0024A578[slot->pool], &slot->handle);
    func_019338(o);
}

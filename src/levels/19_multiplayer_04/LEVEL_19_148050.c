/* LEVEL_19:0x148050 -- gives back the pool entry held by the attached slot and marks the slot as empty. */
typedef struct {
    char pad60[0x60];
    void *entries;
    void *nodes;
} Obj;

typedef struct {
    char pad_00[0x1C];
    unsigned short handle;
    char pad_1E;
    unsigned char pool;
} Slot;

typedef struct {
    char pad_00[0x58];
    Slot *slot;
} Owner;

extern Obj D_001DE578[];
extern void func_0868F0(Obj *o, unsigned int index);

static __inline__ void Release(Obj *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_0868F0(pool, *h);
        *h = 0xFFFF;
    }
}

void func_148050(Owner *o)
{
    Slot *slot = o->slot;

    Release(&D_001DE578[slot->pool], &slot->handle);
}

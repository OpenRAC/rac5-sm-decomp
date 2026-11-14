/* LEVEL_18:0x167D80 -- placement copy of LEVEL_17_15B710.c: gives back the pool entry held by the attached slot and marks the slot as empty. */
typedef struct {
    char pad68[0x68];
} Obj;

typedef struct {
    char pad_00[0x30];
    unsigned short handle;
    char pad_32;
    unsigned char pool;
} Slot;

typedef struct {
    char pad_00[0x58];
    Slot *slot;
} Owner;

extern Obj D_001DE778[];
extern void func_085D88(Obj *o, unsigned int index);

static __inline__ void Release(Obj *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_085D88(pool, *h);
        *h = 0xFFFF;
    }
}

void func_167D80(Owner *o)
{
    Slot *slot = o->slot;

    Release(&D_001DE778[slot->pool], &slot->handle);
}

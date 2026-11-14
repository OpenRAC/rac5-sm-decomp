/* LEVEL_08:0x1CAAF8 -- placement copy of LEVEL_04_19CAE0.c: gives back the pool entry held by the attached slot and marks the slot as empty. */
typedef struct {
    char pad68[0x68];
} Obj;

typedef struct {
    char pad_00[8];
    unsigned short handle;
    char pad_0A;
    unsigned char pool;
} Slot;

typedef struct {
    char pad_00[0x58];
    Slot *slot;
} Owner;

extern Obj D_0027E978[];
extern void func_09D778(Obj *o, unsigned int index);

static __inline__ void Release(Obj *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_09D778(pool, *h);
        *h = 0xFFFF;
    }
}

void func_1CAAF8(Owner *o)
{
    Slot *slot = o->slot;

    Release(&D_0027E978[slot->pool], &slot->handle);
}

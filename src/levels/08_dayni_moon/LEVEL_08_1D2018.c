/* LEVEL_08:0x1D2018 -- placement copy of LEVEL_01_19F960.c: gives back the pool entry held by the attached slot and marks the slot as empty. */
typedef struct {
    char pad60[0x60];
    void *entries;
    void *nodes;
} Obj;

typedef struct {
    unsigned short handle;
    char pad_02;
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

void func_1D2018(Owner *o)
{
    Slot *slot = o->slot;

    Release(&D_0027E978[slot->pool], &slot->handle);
}

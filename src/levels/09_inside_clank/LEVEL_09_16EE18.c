/* LEVEL_09:0x16EE18 -- placement copy of LEVEL_01_19F960.c: gives back the pool entry held by the attached slot and marks the slot as empty. */
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

extern Obj D_00216E78[];
extern void func_091FB0(Obj *o, unsigned int index);

static __inline__ void Release(Obj *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_091FB0(pool, *h);
        *h = 0xFFFF;
    }
}

void func_16EE18(Owner *o)
{
    Slot *slot = o->slot;

    Release(&D_00216E78[slot->pool], &slot->handle);
}

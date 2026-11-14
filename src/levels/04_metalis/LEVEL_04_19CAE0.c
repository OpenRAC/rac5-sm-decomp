/* LEVEL_04:0x19CAE0 -- gives back the pool entry held by the attached slot and marks the slot as empty. */
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

extern Obj D_00249EF8[];
extern void func_098950(Obj *o, unsigned int index);

static __inline__ void Release(Obj *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_098950(pool, *h);
        *h = 0xFFFF;
    }
}

void func_19CAE0(Owner *o)
{
    Slot *slot = o->slot;

    Release(&D_00249EF8[slot->pool], &slot->handle);
}

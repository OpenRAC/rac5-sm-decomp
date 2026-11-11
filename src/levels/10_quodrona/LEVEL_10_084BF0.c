/* LEVEL_10:0x084BF0 -- placement copy of LEVEL_01_084630.c: gives back the pool entry held by the object and marks its handle as empty. */
typedef struct {
    char pad60[0x60];
    void *entries;
    void *nodes;
} Obj;

typedef struct {
    char pad_00[0x54];
    unsigned short handle;
    char pad_56;
    unsigned char pool;
} Owner;

extern Obj D_00238AF8[];
extern void func_095BC8(Obj *o, unsigned int index);

static __inline__ void Release(Obj *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_095BC8(pool, *h);
        *h = 0xFFFF;
    }
}

void func_084BF0(Owner *o)
{
    Release(&D_00238AF8[o->pool], &o->handle);
}

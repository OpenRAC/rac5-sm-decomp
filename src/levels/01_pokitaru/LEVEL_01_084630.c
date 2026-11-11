/* LEVEL_01:0x084630 -- gives back the pool entry held by the object and marks its handle as empty. */
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

extern Obj D_0022F6F8[];
extern void func_095858(Obj *o, unsigned int index);

static __inline__ void Release(Obj *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_095858(pool, *h);
        *h = 0xFFFF;
    }
}

void func_084630(Owner *o)
{
    Release(&D_0022F6F8[o->pool], &o->handle);
}
